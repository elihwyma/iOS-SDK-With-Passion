/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <CoreData/NSManagedObject.h>

@interface NSManagedObject (IMAdditions)

- (id)propertiesForKeys:(id)arg1;
- (_Bool)setDifferentString:(id)arg1 forKey:(id)arg2;
- (_Bool)setDifferentNumber:(id)arg1 forKey:(id)arg2;
- (_Bool)setDifferentDate:(id)arg1 forKey:(id)arg2;
- (_Bool)setDifferentValue:(id)arg1 forKey:(id)arg2 klass:(Class)arg3;
- (_Bool)setDifferentObject:(id)arg1 forKey:(id)arg2;

@end
