/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSCoder.h>

@class NSMutableData, NSMutableSet;

@interface UINibEncoder : NSCoder

{
    struct __CFDictionary *objectsToObjectIDs;
    struct __CFDictionary *objectIDsToObjects;
    struct __CFArray *values;
    struct __CFSet *encodedObjects;
    NSMutableData *data;
    struct __CFDictionary *replacements;
    unsigned int nextObjectID;
    struct {
        unsigned int currentObjectID;
        unsigned int nextAnonymousKey;
    } recursiveState;
    NSMutableSet *objectsUniquedByValue;
    struct __CFSet *objectsReplacedWithNil;
    id delegate;
}

@property id delegate;

+ (id)archivedDataWithRootObject:(id)arg1;
+ (_Bool)archiveRootObject:(id)arg1 toFile:(id)arg2;

- (void)dealloc;
- (_Bool)allowsKeyedCoding;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeBool:(_Bool)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;
- (void)encodeConditionalObject:(id)arg1;
- (void)encodeObject:(id)arg1;
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(const void *)arg3;
- (id)initForWritingWithMutableData:(id)arg1;
- (void)encodeRootObject:(id)arg1;
- (long long)versionForClassName:(id)arg1;
- (void)encodeValuesOfObjCTypes:(const char *)arg1;
- (void)encodeBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (unsigned int)systemVersion;
- (void)encodeBycopyObject:(id)arg1;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeByrefObject:(id)arg1;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)finishEncoding;
- (void)serializeObject:(id)arg1;
- (void)encodeCGPoint:(struct CGPoint)arg1 forKey:(id)arg2;
- (void)encodeCGSize:(struct CGSize)arg1 forKey:(id)arg2;
- (void)encodeCGRect:(struct CGRect)arg1 forKey:(id)arg2;
- (id)nextGenericKey;
- (id)assignObjectIDForObject:(id)arg1;
- (id)objectIDForObject:(id)arg1;
- (Class)encodedClassForObject:(id)arg1;
- (id)encodedClassNameForClass:(Class)arg1;
- (_Bool)object:(id)arg1 encodesWithCoderFromClass:(Class)arg2;
- (_Bool)object:(id)arg1 encodesAsMemberAndWithCoderOfClass:(Class)arg2;
- (_Bool)shouldUniqueObjectByValue:(id)arg1;
- (void)serializeArray:(id)arg1;
- (void)serializeDictionary:(id)arg1;
- (void)serializeSet:(id)arg1;
- (id)replacementObjectForObject:(id)arg1 forKey:(id)arg2;
- (void)appendValue:(id)arg1;
- (void)encodeArrayOfDoubles:(double *)arg1 count:(long long)arg2 forKey:(id)arg3;
- (void)encodeArrayOfCGFloats:(double *)arg1 count:(long long)arg2 forKey:(id)arg3;
- (_Bool)previouslyCodedObject:(id)arg1;
- (id)encodedClassNameForObject:(id)arg1;
- (void)encodeArrayOfFloats:(float *)arg1 count:(long long)arg2 forKey:(id)arg3;
- (void)encodeCGAffineTransform:(struct CGAffineTransform)arg1 forKey:(id)arg2;
- (void)encodeUIEdgeInsets:(struct UIEdgeInsets)arg1 forKey:(id)arg2;

@end
