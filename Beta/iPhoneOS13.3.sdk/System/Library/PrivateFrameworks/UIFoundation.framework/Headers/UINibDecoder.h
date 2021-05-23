/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSCoder.h>

@class UINibStringIDTable;

@interface UINibDecoder : NSCoder

{
    Class arrayClass;
    Class setClass;
    Class dictionaryClass;
    Class *classes;
    id *missingClasses;
    struct UINibDecoderObjectEntry *objects;
    struct UINibDecoderValue *values;
    char *valueTypes;
    void *valueData;
    unsigned long long valueDataSize;
    struct UINibDecoderHeader header;
    id *objectsByObjectID;
    unsigned int *longObjectClassIDs;
    char *shortObjectClassIDs;
    unsigned int *keyMasks;
    long long inlinedValueKey;
    struct UINibDecoderRecursiveState recursiveState;
    UINibStringIDTable *keyIDTable;
    id delegate;
    struct UIKeyToKeyIDCache keyIDCache;
    struct UIKeyAndScopeToValueCache valueCache;
    long long lookupRounds;
    long long maxPossibleLookupRounds;
    long long failedByKeyMask;
    long long savedByKeyMask;
}

@property id delegate;
@property (nonatomic, readonly) long long uniqueIDForCurrentlyDecodingObject;
@property (nonatomic, readonly, getter=isReusable) _Bool reusable;

+ (id)unarchiveObjectWithData:(id)arg1;
+ (id)unarchiveObjectWithFile:(id)arg1;

- (void)dealloc;
- (_Bool)allowsKeyedCoding;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;
- (long long)decodeInt64ForKey:(id)arg1;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (_Bool)containsValueForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (id)decodeObject;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(void *)arg3;
- (long long)versionForClassName:(id)arg1;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;
- (id)initForReadingWithData:(id)arg1;
- (unsigned int)systemVersion;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)arg1;
- (id)decodeDataObject;
- (id)decodeObjectForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (_Bool)decodeBoolForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (void)finishDecoding;
- (struct CGPoint)decodeCGPointForKey:(id)arg1;
- (struct CGSize)decodeCGSizeForKey:(id)arg1;
- (struct CGRect)decodeCGRectForKey:(id)arg1;
- (_Bool)validateAndIndexData:(id)arg1 error:(id *)arg2;
- (id)initForReadingWithData:(id)arg1 error:(id *)arg2;
- (_Bool)validateAndIndexClasses:(const void *)arg1 length:(unsigned long long)arg2;
- (_Bool)validateAndIndexKeys:(const void *)arg1 length:(unsigned long long)arg2;
- (_Bool)validateAndIndexValues:(const void *)arg1 length:(unsigned long long)arg2;
- (_Bool)validateAndIndexObjects:(const void *)arg1 length:(unsigned long long)arg2;
- (_Bool)decodeArrayOfCGFloats:(double *)arg1 count:(long long)arg2 forKey:(id)arg3;
- (id)nextGenericKey;
- (_Bool)decodeArrayOfFloats:(float *)arg1 count:(long long)arg2 forKey:(id)arg3;
- (_Bool)decodeArrayOfDoubles:(double *)arg1 count:(long long)arg2 forKey:(id)arg3;
- (struct CGAffineTransform)decodeCGAffineTransformForKey:(id)arg1;
- (struct UIEdgeInsets)decodeUIEdgeInsetsForKey:(id)arg1;
- (id)decodeNXObject;
- (id)decodePropertyList;

@end
