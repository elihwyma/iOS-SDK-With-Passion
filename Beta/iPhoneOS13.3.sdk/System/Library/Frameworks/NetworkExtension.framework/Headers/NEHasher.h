/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSCoder.h>

@class NSArray;

@interface NEHasher : NSCoder

{
    struct CC_SHA1state_st *_sha1Context;
    NSArray *_classPrefixWhitelist;
}

@property struct CC_SHA1state_st *sha1Context;
@property (retain) NSArray *classPrefixWhitelist;

+ (id)hashObject:(id)arg1;
+ (id)hashObject:(id)arg1 withClassPrefixWhitelist:(id)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)allowsKeyedCoding;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeBool:(_Bool)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (long long)decodeInt64ForKey:(id)arg1;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (_Bool)containsValueForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;
- (long long)versionForClassName:(id)arg1;
- (void)encodeBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)encodeDataObject:(id)arg1;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;
- (id)decodeDataObject;
- (id)decodeObjectForKey:(id)arg1;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (int)decodeIntForKey:(id)arg1;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (double)decodeDoubleForKey:(id)arg1;
- (_Bool)decodeBoolForKey:(id)arg1;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (float)decodeFloatForKey:(id)arg1;
- (id)decodePropertyListForKey:(id)arg1;
- (id)finishHashing;

@end
