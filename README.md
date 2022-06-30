# Split

A simple code for splitting `std::string` into `vector<string>` and joining `vector<string>` into `std::string`.

### Splitting `std::string` into `vector<string>`

```c++
string str = "10 20 30 40 50 60 70 80 90 100";
vector<string> splitted_str = split(str, " ");

// Output: { "10", "20", "30", "40", "50", "60", "70", "80", "90", "100" }
```

### Joining `vector<string>` into `std::string`

```c++
vector<string> splitted_str = { "10", "20", "30", "40", "50", "60", "70", "80", "90", "100" };
string str = join(splitted_str, "-");

// Output: 10-20-30-40-50-60-70-80-90-100
```
