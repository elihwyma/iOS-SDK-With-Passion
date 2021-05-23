/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@interface NSCoder : NSObject

+ (_Bool)__categorizeException:(id)arg1 intoError:(id *)arg2;

- (_Bool)allowsKeyedCoding;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeBool:(_Bool)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;
- (void)failWithError:(id)arg1;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (long long)decodeInt64ForKey:(id)arg1;
- (id)allowedClasses;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (_Bool)containsValueForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (id)error;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2 size:(unsigned long long)arg3;
- (id)decodeObject;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;
- (void)encodeConditionalObject:(id)arg1;
- (void)encodeObject:(id)arg1;
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(const void *)arg3;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(void *)arg3;
- (void)encodeRootObject:(id)arg1;
- (long long)versionForClassName:(id)arg1;
- (void)encodeValuesOfObjCTypes:(const char *)arg1;
- (void)encodeBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)encodeDataObject:(id)arg1;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;
- (void)setObjectZone:(struct _NSZone *)arg1;
- (struct _NSZone *)objectZone;
- (unsigned int)systemVersion;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)arg1;
- (id)decodeDataObject;
- (void)encodeBycopyObject:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (int)decodeIntForKey:(id)arg1;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (double)decodeDoubleForKey:(id)arg1;
- (_Bool)decodeBoolForKey:(id)arg1;
- (id)__tryDecodeObjectForKey:(id)arg1 error:(id *)arg2 decodeBlock:(CDUnknownBlockType)arg3;
- (id)decodeTopLevelObjectForKey:(id)arg1 error:(id *)arg2;
- (id)decodeTopLevelObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (_Bool)requiresSecureCoding;
- (id)decodeTopLevelObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (_Bool)_validateAllowedClass:(Class)arg1 forKey:(id)arg2 allowingInvocations:(_Bool)arg3;
- (_Bool)__failWithExceptionName:(id)arg1 errorCode:(long long)arg2 format:(id)arg3;
- (_Bool)_validateAllowedClassesContainsClass:(Class)arg1 forKey:(id)arg2;
- (_Bool)validateClassSupportsSecureCoding:(Class)arg1;
- (void)encodeByrefObject:(id)arg1;
- (id)decodeTopLevelObjectAndReturnError:(id *)arg1;
- (_Bool)_allowsValueCoding;
- (id)decodeObjectForKey:(id)arg1 error:(id *)arg2;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeLong:(long long)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (long long)decodeLongForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (void)setAllowedClasses:(id)arg1;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)decodePropertyListForKey:(id)arg1;
- (_Bool)validateAllowedClass:(Class)arg1 forKey:(id)arg2;
- (void)__failWithExternalError:(id)arg1;
- (long long)decodingFailurePolicy;
- (void)__setError:(id)arg1;
- (_Bool)__failWithException:(id)arg1;
- (void)encodePoint:(struct CGPoint)arg1;
- (struct CGPoint)decodePoint;
- (void)encodeSize:(struct CGSize)arg1;
- (struct CGSize)decodeSize;
- (void)encodeRect:(struct CGRect)arg1;
- (struct CGRect)decodeRect;
- (void)encodePoint:(struct CGPoint)arg1 forKey:(id)arg2;
- (void)encodeSize:(struct CGSize)arg1 forKey:(id)arg2;
- (void)encodeRect:(struct CGRect)arg1 forKey:(id)arg2;
- (struct CGPoint)decodePointForKey:(id)arg1;
- (struct CGSize)decodeSizeForKey:(id)arg1;
- (struct CGRect)decodeRectForKey:(id)arg1;

@end
