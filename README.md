
<!--
*** Thanks for checking out the Best-README-Template. If you have a suggestion
*** that would make this better, please fork the repo and create a pull request
*** or simply open an issue with the tag "enhancement".
*** Thanks again! Now go create something AMAZING! :D
***
***
***
*** To avoid retyping too much info. Do a search and replace for the following:
*** VeliML, MitsuRunner, twitter_handle, email, MitsuRunner, ESP8266/ES32 based system to get Mitsubishi heatpumps work with state of the art defrozing algorith
-->



<!-- PROJECT SHIELDS -->
<!--
*** I'm using markdown "reference style" links for readability.
*** Reference links are enclosed in brackets [ ] instead of parentheses ( ).
*** See the bottom of this document for the declaration of the reference variables
*** for contributors-url, forks-url, etc. This is an optional, concise syntax you may use.
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->
[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]
[![LinkedIn][linkedin-shield]][linkedin-url]



<!-- PROJECT LOGO -->
<br />
<p align="center">
  <a href="https://github.com/VeliML/MitsuRunner">
    <img src="images/logo.png" alt="Logo" width="80" height="80">
  </a>

  <h3 align="center">MitsuRunner</h3>

  <p align="center">
    ESP8266/ES32 based system to get Mitsubishi heatpumps work with state of the art defrozing algorith
    <br />
    <a href="https://github.com/VeliML/MitsuRunner"><strong>Explore the docs »</strong></a>
    <br />
    <br />
    <a href="https://github.com/VeliML/MitsuRunner">View Demo</a>
    ·
    <a href="https://github.com/VeliML/MitsuRunner/issues">Report Bug</a>
    ·
    <a href="https://github.com/VeliML/MitsuRunner/issues">Request Feature</a>
  </p>
</p>



<!-- TABLE OF CONTENTS -->
<details open="open">
  <summary><h2 style="display: inline-block">Table of Contents</h2></summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgements">Acknowledgements</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project

[![Product Name Screen Shot][product-screenshot]](https://example.com)

Here's a blank template to get started:
**To avoid retyping too much info. Do a search and replace with your text editor for the following:**
`VeliML`, `MitsuRunner`, `twitter_handle`, `email`, `MitsuRunner`, `ESP8266/ES32 based system to get Mitsubishi heatpumps work with state of the art defrozing algorith`


### Built With

* []()
* []()
* []()



<!-- GETTING STARTED -->
## Getting Started

To get a local copy up and running follow these simple steps.

### Prerequisites

This is an example of how to list things you need to use the software and how to install them.
* npm
  ```sh
  npm install npm@latest -g
  ```

### Installation

1. Clone the repo
   ```sh
   git clone https://github.com/VeliML/MitsuRunner.git
   ```
2. Install NPM packages
   ```sh
   npm install
   ```



<!-- USAGE EXAMPLES -->
## Usage

Use this space to show useful examples of how a project can be used. Additional screenshots, code examples and demos work well in this space. You may also link to more resources.

_For more examples, please refer to the [Documentation](https://example.com)_



<!-- ROADMAP -->
## Roadmap

See the [open issues](https://github.com/VeliML/MitsuRunner/issues) for a list of proposed features (and known issues).



<!-- CONTRIBUTING -->
## Contributing

Contributions are what make the open source community such an amazing place to be learn, inspire, and create. Any contributions you make are **greatly appreciated**.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request



<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE` for more information.



<!-- CONTACT -->
## Contact

Your Name - [@twitter_handle](https://twitter.com/twitter_handle) - email

Project Link: [https://github.com/VeliML/MitsuRunner](https://github.com/VeliML/MitsuRunner)



<!-- ACKNOWLEDGEMENTS -->
## Acknowledgements

* []()
* []()
* []()





<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/VeliML/repo.svg?style=for-the-badge
[contributors-url]: https://github.com/VeliML/repo/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/VeliML/repo.svg?style=for-the-badge
[forks-url]: https://github.com/VeliML/repo/network/members
[stars-shield]: https://img.shields.io/github/stars/VeliML/repo.svg?style=for-the-badge
[stars-url]: https://github.com/VeliML/repo/stargazers
[issues-shield]: https://img.shields.io/github/issues/VeliML/repo.svg?style=for-the-badge
[issues-url]: https://github.com/VeliML/repo/issues
[license-shield]: https://img.shields.io/github/license/VeliML/repo.svg?style=for-the-badge
[license-url]: https://github.com/VeliML/repo/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/VeliML

# MitsuRunner
Software for ESP8266 or ESP32 based device designed to prevent Mitsubishi heatpumps to do too short heating runs and melting ice too often from outdoor unit's heat exhanger.

This software started form topic in lampopumput.info site: https://lampopumput.info/foorumi/threads/msz-ln-sulatushuijaus.31223/ 

There are a lot of Finnish people suffering poor design of Mitsubishi heat pumps, especially MSZ-LN series pumps, whose goes to "grazy mode"where they melt ice from outdoor unit in 30 to 40 minutes cycles, even there is no any ice in outdoor unit's heat exhanger.

The design of these heatpumps are poor from their software side and from mechanical side. The software in the units does not suit for the Finnish climate and most probably not to any climate, where pump needs to be used for heating and temperature goes below -5 degrees. The pump heats mainly with short cycles and tries to melt ice from outdoor unit's heat exhanger even there is no ice. This wastes just energy and makes heating infficient. This is due to poor fuzzy logic algorith which: instead of following current state with sensors, tries to forecast from previous experience, when to melt ice from outdoor heat exhanger. The mechanical side probems are related to defrost temperature sensor, which is used to detect when the ice has melt from outdoor heat exhanger. The defrost temperature sensor is installed touching felt insulation, which get's wet and icy from melting water/condension. After using pump to heat for a while, the felt becomes so wet and thus icy that the defrost sensor does not anymore get correct value when outdoor heat exhanger has melted as it measures fel's ice's temperature now not heat exhangers temperature. Thus it starts to affect for device's fuzzy logic, which starts to think that heating has been too long as outdoor heat exhanger is too icy and thus starts to decrease durating of heating... leading to situation where pump does not heat much, but tries to melt outdoor unit's heat exhanger much. Basically wasting energy by melting really often, meaning : heating outside air by taking heat from inside.  

This .yaml file is designed for ESPhome.io, which is needed to generate, compile and update sources. Please follow information from their site how to set-up environments.

