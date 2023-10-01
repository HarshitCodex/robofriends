import { Component } from "react";
import CardList from "./CardList";
import SearchBox from "./SearchBox";
import Scroll from "./Scroll";

class App extends Component {
  constructor() {
    super();
    this.state = {
      robots: [],
      searchField: "",
    };
    console.log("Nothing rendered");
  }

  componentDidMount() {
    fetch("https://jsonplaceholder.typicode.com/users/")
      .then((response) => {
        return response.json();
      })
      .then((users) => {
        // console.log(users[0]);
        this.setState({ robots: users });
      });
  }

  onSearchChange = (event) => {
    this.setState({ searchField: event.target.value });
  };

  render() {
    const filteredRobots = this.state.robots.filter((robot) => {
      return robot.name
        .toLowerCase()
        .includes(this.state.searchField.toLowerCase());
    });
    console.log(this.state.robots.length);
    if (this.state.robots.length === 0) {
      return <h1>Loading...</h1>;
    }
    return (
      <div className="tc">
        <h1 className="f1">Hello RoboFriends!</h1>
        <SearchBox searchChange={this.onSearchChange} />
        <Scroll>
          <CardList robots={filteredRobots} />
        </Scroll>
      </div>
    );
  }
}

export default App;
