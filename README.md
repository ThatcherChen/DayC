# DayC - A CLI todo application

<u>Help you make your work organized when working in console.</u>

## Basic Features

- Add a todo to your work list

```shell
tdc todo new -c content -d date -t tag
```

- Show all todos in your work list

```shell
tdc todo ls
```

- Show details of a todo

```shell
tdc todo ls todo-id
```

- Delete todos in your work list

```shell
tdc todo rm todo-id
```

- Import todos from text file

```shell
tdc todo import file-name
```

- Export todos to text files

```shell
tdc todo export file-name
```

- Modify a todo

```shell
tdc todo modify todo-id
```

- Sort todos

```shell
tdc todo sort -d // Sort by date
tdc todo sort -t // Sort by tag
```

## Work Flow

You can create workflow to organize your work step by step.

- Create a workflow

```shell
tdc wkfl new
```

- Show all workflow

```shell
tdc wkfl ls
```

- Show all steps in a workflow in graph.

```shell
tdc wkfl ls work-flow-id
```

- Delete a workflow

```shell
tdc wkfl rm work-flow-id
```
