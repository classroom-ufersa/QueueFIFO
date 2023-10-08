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
  - [Algumas Funções da TAD Fila Com Vetor](#algumas-funcoes-da-tad-filavet)
- [Fila Com Lista](#fila-com-lista)
  - [Descrição](#descrição-fila-com-lista)
  - [Estrutura](#estrutura-fila-com-lista)
  - [Vantagens](#vantagens-fila-com-lista)
  - [Desvantagens](#desvantagens-fila-com-lista)
  - [Algumas Funções da TAD Fila Com Lista](#algumas-funcoes-da-tad-filalist)

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

Claro, aqui estão os tópicos com base no código fornecido para a estrutura de dados de Fila com Vetor:

---

## Fila Com Vetor

### Descrição Fila Com Vetor

- Uma fila com vetor em C é uma estrutura de dados linear que segue a abordagem "primeiro a entrar, primeiro a sair" (FIFO - First-In-First-Out). Em outras palavras, o primeiro elemento adicionado à fila é o primeiro a ser removido, semelhante a filas mesmo de supermercados etc.

- Para implementar uma fila com vetor em C, você utiliza um vetor (array) para armazenar os elementos da fila. Além disso, você precisa de um índice que aponta para o final da fila, pois o inicio sempre vai ser o indice 0.


![Fila vet](https://github.com/classroom-ufersa/QueueFIFO/blob/main/Img/filavet.png)

**imagem tirada do site:** [UFRJ](https://www.cos.ufrj.br/~rfarias/cos121/filas.html)


## Estrutura Fila Com Vetor

Estrutura `struct fila`

```c
struct fila
{
    int tamanhoatual;  
    float dados[MAX];  
};
```

- `int tamanhoatual`: Este membro representa o número de elementos atualmente na fila. Quando a fila é criada, o tamanho atual é definido como 0 na hora de criar a fila, indicando que a fila está vazia.

- `float dados[MAX]`: Este é um vetor que armazena os elementos da fila. Os elementos da fila são do tipo float e a capacidade máxima da fila é definida como `MAX`.

## Vantagens Fila com Vetor:

1. **Simplicidade**: Filas com vetores são fáceis de entender e implementar. 

2. **Eficiência de Acesso**: O acesso aos elementos de uma fila com vetor é rápido, pois os elementos são armazenados em uma estrutura de dados contígua na memória.

3. **Espaço de Memória Fixo**: A fila com vetor tem um tamanho máximo fixo definido pela capacidade do vetor. Isso pode ser benéfico quando você deseja limitar o consumo de memória.

4. **Apropriada para Uso Limitado**: Em casos em que o número máximo de elementos na fila é conhecido antecipadamente, uma fila com vetor pode ser a escolha certa.

## Desvantagens Fila com Vetor:

1. **Tamanho Fixo**: O tamanho da fila é fixo, o que significa que, se você atingir a capacidade máxima, não poderá adicionar mais elementos a menos que aloque um vetor maior e copie os elementos existentes.

2. **Desperdício de Memória**: Se a capacidade do vetor for definida muito grande, pode ocorrer desperdício de memória, especialmente se a fila não estiver sendo totalmente utilizada.

3. **Complexidade de remoção**: O tempo para remover em filas com vetores é bem maior pois após remover o primeiro elemento (Do indice 0), temos que reorganizar toda a fila, por exemplo colocar o que estava no indice 1 para o indice 0, o indice 2 para o 1... e isso ate o fim da fila o que da uma complexidade O(n) Linear, diferente da fila com listas.
## Algumas funções da TAD filavet

### fila_cria

**Descrição:** Esta função cria uma nova fila vazia alocando memória para a estrutura da fila e o vetor de dados associado. Ela define a capacidade inicial da fila.

**Código:**

```c
Fila *fila_cria(void)
{
    Fila *f = (Fila *)malloc(sizeof(Fila));
    if (f == NULL)
    {
        printf("Erro alocacao!\n");
        exit(1);
    }
    f->tamanhoatual = 0;
    return f;
}
```

**Exemplo de Uso:**

```c
Fila *minhaFila = fila_cria();
```

### fila_insere

**Descrição:** Esta função adiciona um elemento à fila no final. Se a capacidade da fila for excedida não é adicionado.

**Código:**

```c
void fila_insere(Fila *f, float v)
{
    if (fila_cheia(f))
        printf("Fila cheia!\n");
    else
    {
        f->dados[f->tamanhoatual] = v;
        f->tamanhoatual++;
        printf("Valor %.1f inserido na fila.\n", v);
    }
}
```

**Exemplo de Uso:**

```c
fila_insere(minhaFila, 42.5);
```

### fila_retira

**Descrição:** Esta função remove e retorna o elemento do início da fila. Ela também reorganiza todo o vetor apos a remoção.

**Código:**

```c
float fila_retira(Fila *f)
{
    int i = 0, j = 1;
    float v = f->dados[0];
    for (i = 0; i < (f->tamanhoatual) - 1; i++)
    {
        f->dados[i] = f->dados[j];
        j++;
    }
    f->tamanhoatual--;
    return v;
}
```

**Exemplo de Uso:**

```c
float elemento = fila_retira(minhaFila);
```

### fila_vazia

**Descrição:** Esta função verifica se a fila está vazia, retornando 1(verdadeiro) se estiver vazia ou 0(falso) caso contrário.

**Código:**

```c
int fila_vazia(Fila *f)
{
    if (f->tamanhoatual == 0)
        return 1;
    return 0;
}
```

**Exemplo de Uso:**

```c
if (fila_vazia(minhaFila))
{
    printf("A fila está vazia.\n");
}
```

### fila_cheia

**Descrição:** Esta função verifica se a fila está cheia, retornando 1(verdadeiro) se estiver cheia ou 0(falso) caso contrário.

**Código:**

```c
int fila_cheia(Fila *f)
{
    if (f->tamanhoatual == MAX)
        return 1;
    return 0;
}
```

**Exemplo de Uso:**

```c
if (fila_cheia(minhaFila))
{
    printf("A fila está cheia.\n");
}
```

### fila_imprime

**Descrição:** Esta função imprime os elementos da fila, se houver elementos presentes.

**Código:**

```c
void fila_imprime(Fila *f)
{
    if (fila_vazia(f))
        printf("Fila vazia!\n");
    else
    {
        int i = 0, j = 0;
        for (i = 0; i < f->tamanhoatual; i++)
        {
            j++;
            printf("\nDado %d: %.1f\n", j, f->dados[i]);
        }
    }
}
```

**Exemplo de Uso:**

```c
fila_imprime(minhaFila);
```

### fila_libera

**Descrição:** Esta função libera a memória alocada para a fila.

**Código:**

```c
void fila_libera(Fila *f)
{
    free(f);
}
```

**Exemplo de Uso:**

```c
fila_libera(minhaFila);
```

## Fila com Lista

### Descrição Fila com Lista

- Uma fila com listas encadeadas em C é uma estrutura de dados linear que segue a abordagem "primeiro a entrar, primeiro a sair" (FIFO - First-In-First-Out). Em vez de usar um vetor, essa implementação utiliza uma lista encadeada para armazenar os elementos da fila.

- Uma lista encadeada é uma estrutura de dados na qual cada elemento (nó) possui um valor e um ponteiro para o próximo elemento da lista.

![Fila lista](https://github.com/classroom-ufersa/QueueFIFO/blob/main/Img/filalista.png)

**imagem tirada do site:** [IFSC](https://wiki.sj.ifsc.edu.br/index.php/PRG29003:_Introdução_a_Filas)

## Estrutura Fila com Lista

Estruturas `struct lista` e `struct fila`

```c
struct lista
{
    float dado;
    struct lista *prox;
};

struct fila
{
    struct lista *fim;
    struct lista *ini;
    int tamanho;
};
```

- `struct lista`: Cada nó na lista encadeada contém um valor (`dado`) e um ponteiro para o próximo nó (`prox`).

- `struct fila`: A estrutura de fila mantém dois ponteiros, `ini` e `fim`, que apontam para o início e o final da fila, respectivamente. Também mantém o tamanho atual da fila (`tamanho`).

## Vantagens Fila com Lista:

1. **Dinamicidade**: A fila pode crescer dinamicamente à medida que novos elementos são adicionados, sem a necessidade de definir um tamanho máximo fixo.

2. **Economia de Memória**: A memória é alocada sob demanda à medida que os elementos são inseridos na fila, economizando memória quando a capacidade total não é usada.

3. **Facilidade de Inserção e Remoção**: A inserção e a remoção de elementos no início da fila (primeiro e último nós) são operações eficientes, diferente da com vetores que a remoção tinha uma complexidade O(n) com listas encadeadas a complexidade é constate O(1).

## Desvantagens Fila com Lista:

1. **Acesso Aleatório Ineficiente**: O acesso aleatório aos elementos é ineficiente, pois você deve percorrer a fila a partir do início para acessar elementos em posições intermediárias.

2. **Memória de Ponteiros**: Cada nó na lista encadeada requer um espaço adicional para armazenar um ponteiro para o próximo nó, o que pode resultar em um gasto a mais de memória comparado a uma fila com vetor.

## Algumas funções da TAD filalist

### fila_cria

**Descrição:** Esta função cria uma nova fila vazia alocando memória para a estrutura da fila e inicializando os ponteiros de início (`ini`) e fim (`fim`) como nulos.

**Código:**

```c
Fila *fila_cria(void)
{
    Fila *f = (Fila *)malloc(sizeof(Fila));
    f->fim = NULL;
    f->ini = NULL;
    if (f == NULL)
    {
        printf("[Erro] memória.\n");
        exit(1);
    }
    f->tamanho = 0;
    return f;
}
```

**Exemplo de Uso:**

```c
Fila *minhaFila = fila_cria();
```

### fila_insere

**Descrição:** Esta função adiciona um elemento à fila no final, usando uma lista encadeada. Ela aloca memória para um novo nó, atribui o valor e atualiza os ponteiros `ini` e `fim` conforme necessário.

**Código:**

```c
void fila_insere(Fila *f, float v)
{
    Lista *novo = (Lista *)malloc(sizeof(Lista));
    if (novo == NULL)
    {
        printf("[Erro] memória.\n");
        exit(1);
    }
    novo->dado = v;
    novo->prox = NULL;
    if (f->fim != NULL)
        f->fim->prox = novo;
    else
        f->ini = novo;
    f->fim = novo;
    f->tamanho++;
    printf("Valor %.1f inserido na fila.\n", v);
}
```

**Exemplo de Uso:**

```c
fila_insere(minhaFila, 42.5);
```

### fila_retira

**Descrição:** Esta função remove e retorna o elemento do início da fila usando uma lista encadeada. Ela verifica se a fila está vazia antes de tentar desenfileirar.

**Código:**

```c
float fila_retira(Fila *f)
{
    if (fila_vazia(f))
    {
        printf("Fila vazia!\n");
        exit(1);
    }
    Lista *l = f->ini;
    float v = f->ini->dado;
    f->ini = f->ini->prox;
    if (f->ini == NULL)
        f->fim = NULL;
    f->tamanho--;
    free(l);
    return v;
}
```

**Exemplo de Uso:**

```c
float elemento = fila_retira(minhaFila);
```

### fila_imprime

**Descrição:** Esta função imprime os elementos da fila usando uma lista encadeada, se houver elementos presentes.

**Código:**

```c
void fila_imprime(Fila *f)
{
    Lista *l;
    int i = 1;
    for (l = f->ini; l != NULL; l = l->prox)
    {
        printf("\nDado %d: %.1f\n", i, l->dado);
        i++;
    }
}
```

**Exemplo de Uso:**

```c
fila_imprime(minhaFila);
```

### fila_libera

**Descrição:** Esta função libera a memória alocada para a fila e seus nós na lista encadeada.

**Código:**

```c
void fila_libera(Fila *f)
{
    Lista *p = f->ini;
    while (p != NULL)
    {
        Lista *t = p->prox;
        free(p);
        p = t;
    }
    free(f);
}
```

**Exemplo de Uso:**

```c
fila_libera(minhaFila);
```
