# Filas (Queue - first in, first out)

## Tópicos
- [Introdução](#introdução)
- [Como Baixar, Compilar e Executar Código de Repositório via Terminal](#baixar-compilar-e-executar-código-de-repositório-via-terminal)
- [Porque Utilizar TADS?](#porque-utilizar-uma-tad)
- [Fila Com Vetor](#fila-com-vetor)
  - [Descrição](#descrição-fila-com-vetor)
  - [Estrutura](#estrutura-fila-com-vetor)
  - [Vantagens](#vantagens-fila-com-vetor)
  - [Desvantagens](#desvantagens-fila-com-vetor)
  - [Algumas Funções da TAD Fila Com Vetor](#algumas-funções-da-tad-filavet)
- [Fila Com Lista](#fila-com-lista)
  - [Descrição](#descrição-fila-com-lista)
  - [Estrutura](#estrutura-fila-com-lista)
  - [Vantagens](#vantagens-fila-com-lista)
  - [Desvantagens](#desvantagens-fila-com-lista)
  - [Algumas Funções da TAD Fila Com Lista](#algumas-funções-da-tad-filalist)

## Introdução

A estrutura de dados fila é uma das estruturas mais comuns na programação, frequentemente usada para organizar e gerenciar elementos de dados em uma ordem específica. Ela segue o princípio da "primeira a entrar, primeira a sair" (FIFO - First-In-First-Out), onde o primeiro elemento adicionado à fila é o primeiro a ser removido. Filas são amplamente utilizadas em uma variedade de aplicações, desde sistemas operacionais até processamento de tarefas em lote.

Filas podem ser implementadas de várias maneiras, incluindo filas baseadas em arrays, listas ligadas e outras estruturas de dados. A escolha da implementação depende das necessidades específicas do problema a ser resolvido e das características de desempenho desejadas.

Em resumo, as filas são uma estrutura de dados simples, mas fundamental, com inúmeras aplicações na programação. Entender como funcionam e quando usá-las é essencial para a resolução eficaz de muitos problemas computacionais.
## Baixar, Compilar e Executar Código de Repositório via Terminal

### Pré-requisitos

Antes de prosseguir, certifique-se de que você tenha o seguinte instalado no seu sistema:

- **Git**: Para baixar o repositório.
- **Compilador C**: Como o GCC, para compilar o código.
- **Terminal**: Para executar comandos.

### Passo 1: Clone o Repositório

Abra seu terminal e execute o seguinte comando para clonar o repositório do GitHub:

```bash
git clone "https://github.com/classroom-ufersa/QueueFIFO.git"
```

### Passo 2: Navegue para o Diretório do Repositório em que está a TAD que quer compilar

Use o comando `cd` para navegar para o diretório do repositório que acabou de ser clonado ou simplesmente abra com terminal integrado na pasta.

```bash
cd FilaLista
```

### Passo 3: Compile o Código

Compile-o usando o compilador C. Por exemplo:

```powershell
gcc -o main main.c
```

### Passo 4: Execute o Programa

Agora, você pode executar o programa compilado usando o comando `./` no terminal:

```bash
./main
```

## Porque utilizar uma TAD?

- **Reutilização de Código:** Uma vez que as operações da Fila estão encapsuladas no TAD Fila, elas podem ser reutilizadas em diferentes partes do código ou em projetos diferentes sem a necessidade de reimplementação. Isso economiza tempo e esforço.

- **Encapsulamento:** O TAD Fila permite encapsular a implementação da Fila. Isso significa que você pode mudar a implementação interna da Fila sem afetar o código que a utiliza.

- **Ocultação de Complexidade:** A implementação de estruturas de dados como Filas pode ser complexa, envolvendo alocação de memória, gerenciamento de ponteiros e manipulação de elementos. O TAD Fila oculta essa complexidade, tornando mais fácil para outros desenvolvedores usar a Fila sem se preocupar com os detalhes complicados.

- **Padronização:** O TAD Fila estabelece um conjunto padrão de operações e nomes para trabalhar com Filas. Isso torna o código mais consistente e fácil de entender para qualquer desenvolvedor.

- **Facilita a Depuração:** Se ocorrer um erro em uma operação da Fila, é mais fácil depurar (encontrar o erro) quando você tem uma interface clara e bem definida para a Fila. Você pode isolar o problema mais facilmente.

- **Documentação:** O TAD Fila serve como documentação clara das operações suportadas pela Fila. Isso ajuda os desenvolvedores a entender como usar a Fila corretamente.
