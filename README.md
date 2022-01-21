# Mizi

![](./media/interface/logo.png)

A simple static website generator written in C++ that takes markdown format as input. 

Inspired from [hundredrabbits/100r.co](https://github.com/hundredrabbits/100r.co)

Created for my website [abstractxan.xyz](https://abstractxan.xyz)

Sample generated repo here : [mizi.netlify.com](https://mizi.netlify.com) 

[![Netlify Status](https://api.netlify.com/api/v1/badges/62460383-615c-4be8-911e-c1513ea806dc/deploy-status)](https://app.netlify.com/sites/mizi/deploys)

## Download and run
- Clone / Download this repository
- Move into `src` by doind `cd src`
- Update `src/config.conf` for your webpages
- Update `src/website.md`
- Build using `./build.sh` or Run `./mizi` to create site
- Go up a directory `cd ..`
- Open `index.html` which essentially opens `site/home.html`

![](./media/mizi.png)
## Currently supported features:

1. Inputs a single markdown file as input
2. Configurable `<head>` and header and footer for every page
3. Create reusable components using templates by updating `templates.conf`


``` md
# Category
## Page
### Section
- First
- Second
- Third
<p>Could write in HTML too!</p>
Inline [links!](https://abstractxan.xyz)
Inline images ![images](./media/interface/favicon.ico)

$$$ Seperate Pages
## Seperate Page
### Section
Text
```

- A config file for `<head>` , header and footer

## Todo

``` md

```

## Contribute
Open a new issue for bug / feature requests. PRs are welcome.

