<style>
.container {
  max-width: 900px;
  display: flex;
  justify-content: space-evenly;
  margin: 0 auto;
}

.card-wrapper {
  width: 400px;
  height: 500px;
  position: relative;
}

.card {
  position: absolute;
  top: 50%;
  left: 50%;
  width: 350px;
  height: 450px;
  transform: translate(-50%, -50%);
  border-radius: 16px;
  overflow: hidden;
  box-shadow: 0 5px 18px rgba(0, 0, 0, 0.6);
  cursor: pointer;
  transition: 0.5s;
}
.card .card-image {
  position: absolute;
  top: 0px;
  left: 0px;
  width: 100%;
  height: 100%;
  z-index: 2;
  background-color: #000;
  transition: 0.5s;
}
.card:hover img {
  opacity: 0.4;
  transition: 0.5s;
}

.card:hover .card-image {
  transform: translateY(-100px);
  transition: all 0.9s;
}

/**** Social Icons *****/
.social-icons {
  position: absolute;
  top: 50%;
  left: 50%;
  transform: translate(-50%, -50%);
  z-index: 3;
  display: flex;
}
.social-icons li {
  list-style: none;
}
.social-icons li a {
  position: relative;
  display: block;
  width: 50px;
  height: 50px;
  line-height: 50px;
  text-align: center;
  background: #fff;
  font-size: 23px;
  color: #333;
  font-weight: bold;
  margin: 0 6px;
  transition: 0.4s;
  transform: translateY(200px);
  opacity: 0;
}

.card:hover .social-icons li a {
  transform: translateY(0px);
  opacity: 1;
}

.social-icons li a:hover {
  background: #000;
  transition: 0.2s;
}
.social-icons li a:hover .fab {
  color: #fff;
}

.social-icons li a .fab {
  transition: 0.8s;
}
.social-icons li a .fab:hover {
  transform: rotateY(360deg);
  color: #fff;
}

.card:hover li:nth-child(1) a {
  transition-delay: 0.1s;
}

.card:hover li:nth-child(2) a {
  transition-delay: 0.2s;
}

.card:hover li:nth-child(3) a {
  transition-delay: 0.3s;
}

.card:hover li:nth-child(4) a {
  transition-delay: 0.4s;
}
.details {
  position: absolute;
  bottom: 0;
  left: 0;
  background: #fff;
  width: 100%;
  height: 120px;
  z-index: 1;
  padding: 10px;
}
.details h2 {
  margin: 30px 0;
  padding: 0;
  text-align: center;
}
.details h2 .job-title {
  font-size: 1rem;
  line-height: 2.5rem;
  color: #333;
  font-weight: 300;
}

.jane {
  position: absolute;
  bottom: -120px;
  left: 0;
  opacity: 0;
  background: #fff;
  width: 100%;
  height: 120px;
  z-index: 3;
  padding: 10px;
  transition: 0.4s;
}

.profile-two .social-icons li a {
  border-radius: 50%;
}

.card:hover .profile-img--two {
  transform: rotateY(180deg);
}

.card:hover .jane {
  bottom: 0;
  left: 0;
  transition-delay: 0.5s;
  opacity: 1;
}
@import url('https://fonts.googleapis.com/css?family=Roboto&display=swap');
@import url('https://stackpath.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css');
*{ margin: 0; padding: 0;}
*, *::before, *::after {
  margin: 0;
  padding: 0;
  box-sizing: inherit;
}

body{
  min-height: 100vh;
  display: flex;
  justify-content: center;
  flex-wrap: wrap;
  align-content: flex-start;
    
  font-family: 'Roboto', sans-serif;
  font-style: normal;
  font-weight: 300;
  font-smoothing: antialiased;
-webkit-font-smoothing: antialiased;
-moz-osx-font-smoothing: grayscale;
  font-size: 15px;
  background: #eee;
}
.cd__intro{
   padding: 60px 30px;
   margin-bottom: 15px;
        flex-direction: column;

}
.cd__intro,
.cd__credit{
    display: flex;
    width: 100%;
    justify-content: center;
    align-items: center;
    background: #fff;
    color: #333;
    line-height: 1.5;
    text-align: center;
}

.cd__intro h1 {
   font-size: 18pt;
   padding-bottom: 15px;

}
.cd__intro p{
   font-size: 14px;
}

.cd__action{
   text-align: center;
   display: block;
   margin-top: 20px;
}

.cd__action a.cd__btn {
  text-decoration: none;
  color: #666;
   border: 2px solid #666;
   padding: 10px 15px;
   display: inline-block;
   margin-left: 5px;
}
.cd__action a.cd__btn:hover{
   background: #666;
   color: #fff;
    transition: .3s;
-webkit-transition: .3s;
}
.cd__action .cd__btn:before{
  font-family: FontAwesome;
  font-weight: normal;
  margin-right: 10px;
}
.down:before{content: "\f019"}
.back:before{content:"\f112"}

.cd__credit{
    padding: 12px;
    font-size: 9pt;
    margin-top: 40px;

}
.cd__credit span:before{
   font-family: FontAwesome;
   color: #e41b17;
   content: "\f004";


}
.cd__credit a{
   color: #333;
   text-decoration: none;
}
.cd__credit a:hover{
   color: #1DBF73; 
}
.cd__credit a:hover:after{
    font-family: FontAwesome;
    content: "\f08e";
    font-size: 9pt;
    position: absolute;
    margin: 3px;
}
.cd__main{
  background: #fff;
  padding: 20px;
  flex-direction: row;
  flex-wrap: wrap;
  justify-content: center;
  
}
.cd__main{
    display: flex;
    width: 100%;
}

@media only screen and (min-width: 1360px){
    .cd__main{
      max-width: 1280px;
      margin-left: auto;
      margin-right: auto; 
      padding: 24px;
    }
}
</style>

<h1>Ritesh Narayan Shah</h1>
<div class="container">
    
   <div class="card-wrapper">
      
  <div class="card">
        
  <div class="card-image">
          <img src="ritesh.jpg" alt="profile one">
        </div>

 <ul class="social-icons">
        <li>
          <a href="https://www.facebook.com/ritesh.sah.1291/">
            <i class="fab fa-facebook-f"></i>
          </a>
        </li>
        <li>
          <a href="https://www.instagram.com/riteshnarayashah/">
            <i class="fab fa-instagram"></i>
          </a>
        </li>
        <li>
          <a href="#">
            <i class="fab fa-twitter"></i>
          </a>
        </li>
        <li>
          <a href="#">
            <i class="fab fa-dribbble"></i>
          </a>
        </li>
      </ul>

 <div class="details">
        <h2>Ritesh Narayan Shah
          <br>
          <span class="job-title">Web Developer</span><br>
          <span class="job-title">3 year Wordpress Exprience</span>
        </h2>
      </div>
    </div>
  </div>

- 👋 Hi, I’m @Ritesh narayan Shah
- 👀 I’m interested in Web development 
- 🌱 I’m currently learning BCA Course 
- 💞️ I’m looking to collaborate on 
- 📫 How to reach me 9234670937
- 😄 Pronouns: ...
- ⚡ Fun fact: ...

<!---
toxicboi99/toxicboi99 is a ✨ special ✨ repository because its `README.md` (this file) appears on your GitHub profile.
You can click the Preview link to take a look at your changes.
--->
