/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@interface NSDictionary : NSObject

@property (readonly) unsigned long long count;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedKeySetForKeys:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)dictionaryWithObjects:(id)arg1 forKeys:(id)arg2;
+ (id)dictionary;
+ (id)dictionaryWithObject:(id)arg1 forKey:(id)arg2;
+ (id)dictionaryWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
+ (id)dictionaryWithObjectsAndKeys:(id)arg1;
+ (id)newDictionaryWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
+ (id)dictionaryWithDictionary:(id)arg1 copyItems:(_Bool)arg2;
+ (id)dictionaryWithDictionary:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)objectEnumerator;
- (void)getObjects:(id *)arg1;
- (id)allKeys;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)_cfMutableCopy;
- (unsigned long long)countForKey:(id)arg1;
- (_Bool)containsKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (_Bool)__getValue:(id *)arg1 forKey:(id)arg2;
- (unsigned long long)countForObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;
- (void)__apply:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)isEqualToDictionary:(id)arg1;
- (id)keyEnumerator;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (unsigned long long)_cfTypeID;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
- (id)allValues;
- (id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)allObjects;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)keysSortedByValueWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (id)initWithDictionary:(id)arg1 copyItems:(_Bool)arg2;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2;
- (_Bool)isNSDictionary__;
- (id)allKeysForObject:(id)arg1;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)getKeys:(id *)arg1;
- (id)invertedDictionary;
- (id)keyOfEntryPassingTest:(CDUnknownBlockType)arg1;
- (id)keysOfEntriesPassingTest:(CDUnknownBlockType)arg1;
- (id)keysSortedByValueUsingComparator:(CDUnknownBlockType)arg1;
- (id)keysSortedByValueUsingSelector:(SEL)arg1;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithObject:(id)arg1 forKey:(id)arg2;
- (id)initWithObjectsAndKeys:(id)arg1;

@end
