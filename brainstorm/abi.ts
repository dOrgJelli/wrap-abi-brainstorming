interface ModuleAbi {
  // highest version used within all entries
  version: number;
  entries: Entry[];
}

type EntryType = "object";

abstract class Entry {
  public readonly version: number;
  public readonly type: EntryType;
  public readonly name: string;
}

/// Entries ///

class Object_0 implements Entry {
  public readonly version: number = 0;
  public readonly type: EntryType = "object";

  constructor(
    public readonly name: string,
    public readonly properties: Property
  ) { }
}

const obj: Object_0 = new Object_0("Foo");
