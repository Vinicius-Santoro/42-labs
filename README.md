<h1>42-Labs</h1>

### _Projeto: construir uma API e uma aplicação de interface de linha de comando, utilizando a linguagem C._

- Neste projeto desenvolvi em C uma API que segue o modelo de arquitetura REST. O projeto funciona da seguinte forma: O cliente solicita para que o servidor jogue um dado, e o servidor retorna o resultado da jogada para o cliente.


## _Requisitos:_

O projeto deve seguir alguns requisitos, sendo eles:

- A API deve estar de acordo com o modelo de arquitetura REST;
- Implementar pelo menos uma requisição do método GET no path `/`, retornando alguma informação no formato `JSON` e status `HTTP 200 OK`.
- Registrar logs em um arquivo; guardando informações sobre todas as requisições e respostas(e.g. horário da requisição, método, etc).
- A aplicação deve agrupar os dados dos logs e os mostrem de maneira legível no terminal.
- Os dados devem possibillitar uma análise sobre as requisições.

## _O projeto ficou assim:_

![project](https://user-images.githubusercontent.com/83036509/155849314-7898428c-425b-45b4-97eb-543f76f8f87a.gif)


<h1></h1>

O mundo das API`s é extremamente novo para mim. Sabendo disso, decidi ler de forma analítica todos os requisitos do projeto para conseguir desenvolve-lo de uma maneira mais eficiente. Os itens que tive que pesquisar encontram-se abaixo:

### _O que é uma API?:_
Para desenvolvermos uma API em C, é necessário saber o que é uma API.
De acordo com a IBM (https://www.ibm.com/cloud/learn/api), API (interface de programação de aplicativos), é uma ferramenta que permite que as empresas/grupos abram os dados e a funcionalidade de seus aplicativos para desenvolvedores externos de terceiros, parceiros de negócios e departamentos internos de suas empresas. Isso permite que serviços e produtos se comuniquem entre si e aproveitem os dados e a funcionalidade uns dos outros por meio de uma interface documentada.

### _Como funciona uma API?:_
Sabendo que uma API é um conjunto de regras definidas que explicam como os computadores ou aplicativos se comunicam entre si. As APIs ficam entre um aplicativo e o servidor web, atuando como uma camada intermediária que processa a transferência de dados entre sistemas. O funcionamento dela é assim:

1. `Um aplicativo cliente inicia uma chamada de API` para recuperar informações, também conhecida como  solicitação. Essa solicitação é processada de um aplicativo para o servidor da Web por meio do URI (Uniform Resource Identifier) ​​da API e inclui um verbo de solicitação, cabeçalhos e, às vezes, um corpo de solicitação.
2. `Após receber uma solicitação válida`, a API faz uma chamada para o programa externo ou servidor web.
3. `O servidor envia uma resposta` à API com as informações solicitadas.
4. `A API transfere os dados` para o aplicativo solicitante inicial.

### _Exemplos de API:_
Estamos utilizando as API's o tempo todo, mesmo sem saber. Decidi listar 3 exemplos reais de API's que são super comuns no dia a dia de qualquer pessoa.
1. <b>Logins universais</b>: a API de login universal permite que as pessoas façam login em sites usando seus detalhes de login de perfil do Facebook, Twitter ou Google. Esse recurso conveniente permite que qualquer site aproveite uma API de um dos serviços mais populares para autenticar rapidamente o usuário.
2. <b>Processamento de pagamentos de terceiros:</b> a função "Pagar com o PayPal que usamos em sites de comércio eletrônico funciona por meio de uma API. Isso permite que as pessoas paguem por produtos on-line sem expor dados confidenciais ou conceder acesso a indivíduos não autorizados.
3. <b>Twitter</b>: cada Tweet contém atributos principais descritivos, incluindo um autor, um ID exclusivo, uma mensagem, um carimbo de data/hora de quando foi postado e metadados de geolocalização. O Twitter disponibiliza Tweets e respostas públicas aos desenvolvedores e permite que os desenvolvedores publiquem Tweets por meio da API da empresa.

### _Arquitetura Rest:_
É cobrado para nós, na primeira linha da descrição do projeto, que devemos estar de acordo com a arquitetura REST.

Este projeto esta na arquitetura REST pelos seguintes motivos:
- Temos um cliente que faz uma requisição para o servidor enviar ou modificar dados;
- Temos método HTTP, que define que tipo de operação o servidor vai realizar;
- Temos uma path, ou seja, um caminho ou rota para o servidor;
- Temos informações no corpo da requisição (no nosso caso, nos logs).

## _Como testar o projeto:_

Para testarmos o projeto de uma maneira interessante, deveremos utilizar dois terminais. Um terminal será para abrirmos o servidor, e acompanharmos cada movimentação solicitada. O outro terminal será para verificarmos especificamente a quantidade de requisições solicitadas.


- No primeiro terminal, adicionaremos o comando abaixo para gerarmos o compilado do `server`. 

```bash
$> make server
```
- Após a geração do compilado, iremos executá-lo. 

```bash
$> ./SERVER
```
- Teremos algo parecido com isso: 

![server-compilado](https://user-images.githubusercontent.com/83036509/155886145-441dd2f9-0a48-4593-a298-e79714228e6e.gif)


<h1></h1>

- No segundo terminal, adicionaremos o comando abaixo para gerarmos o compilado do `cli`. 

```bash
$> make cli
```
- Após a geração do compilado, iremos executá-lo. 

```bash
$> ./CLI
```
- Teremos algo parecido com isso:

![cli-compilado](https://user-images.githubusercontent.com/83036509/155886248-c4cfd003-022f-4866-8961-8ee4ffb75f8c.gif)

Assim que mandarmos alguma requisição para o servidor, ele registrará essa requisição no arquivo `server.log`. Nosso `CLI` irá contar exatamente quantas requisições foram feitas de acordo com a `PATH` e com o `HTTP Method`.

## _Como o projeto foi desenvolvido:_

Compilando o projeto:

-   [Makefile](https://github.com/42sp/42labs-selection-process-v2-Vinicius-Santoro/blob/main/42-labs/readmes/1.makefile.md)

<h1></h1>

Criando o servidor:

-   [main.c](https://github.com/42sp/42labs-selection-process-v2-Vinicius-Santoro/blob/main/42-labs/readmes/2.main.md)
-   [mongoose.c](https://github.com/42sp/42labs-selection-process-v2-Vinicius-Santoro/blob/main/42-labs/readmes/3.moongose.md)

<h1></h1>

Extraindo as informações dos LOGS e direcionando-as para o terminal:

-   [cli.c](https://github.com/42sp/42labs-selection-process-v2-Vinicius-Santoro/blob/main/42-labs/readmes/4.cli.md)
-   [init_vars.c](https://github.com/42sp/42labs-selection-process-v2-Vinicius-Santoro/blob/main/42-labs/readmes/5.init_vars.md)
-   [get_next_line.c](https://github.com/42sp/42labs-selection-process-v2-Vinicius-Santoro/blob/main/42-labs/readmes/6.get_next_line.md)
-   [verify_methods.c](https://github.com/42sp/42labs-selection-process-v2-Vinicius-Santoro/blob/main/42-labs/readmes/7.verify_methods.md)
-   [print_methods.c](https://github.com/42sp/42labs-selection-process-v2-Vinicius-Santoro/blob/main/42-labs/readmes/8.print_methods.md)
