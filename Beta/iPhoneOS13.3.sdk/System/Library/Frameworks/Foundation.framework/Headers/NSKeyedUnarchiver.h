/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSCoder.h>

@protocol NSKeyedUnarchiverDelegate;

@interface NSKeyedUnarchiver : NSCoder

{
    id _delegate;
    unsigned int _flags;
    id _objRefMap;
    id _replacementMap;
    id _nameClassMap;
    id _tmpRefObjMap;
    id _refObjMap;
    int _genericKey;
    id _data;
    void *_offsetData;
    id _containers;
    id _objects;
    const char *_bytes;
    unsigned long long _len;
    id _helper;
    void *_reserved0;
}

@property id <NSKeyedUnarchiverDelegate> delegate;
@property _Bool requiresSecureCoding;
@property long long decodingFailurePolicy;

+ (void)initialize;
+ (id)unarchiveObjectWithData:(id)arg1;
+ (id)unarchiveObjectWithFile:(id)arg1;
+ (void)setClass:(Class)arg1 forClassName:(id)arg2;
+ (id)unarchivedObjectOfClasses:(id)arg1 fromData:(id)arg2 error:(id *)arg3;
+ (id)unarchiveTopLevelObjectWithData:(id)arg1 error:(id *)arg2;
+ (id)unarchivedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id *)arg3;
+ (id)_strictlyUnarchivedObjectOfClasses:(id)arg1 fromData:(id)arg2 error:(id *)arg3;
+ (id)unarchiveObjectWithData:(id)arg1 error:(id *)arg2;
+ (Class)classForClassName:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (_Bool)allowsKeyedCoding;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (long long)decodeInt64ForKey:(id)arg1;
- (id)allowedClasses;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (_Bool)containsValueForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (id)error;
- (_Bool)_containsNextUnkeyedObject;
- (id)decodeObject;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(void *)arg3;
- (long long)versionForClassName:(id)arg1;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;
- (id)initForReadingWithData:(id)arg1;
- (unsigned int)systemVersion;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)arg1;
- (id)decodeDataObject;
- (id)_decodeArrayOfObjectsForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (_Bool)decodeBoolForKey:(id)arg1;
- (id)_decodePropertyListForKey:(id)arg1;
- (_Bool)_validateAllowedClassesContainsClass:(Class)arg1 forKey:(id)arg2;
- (_Bool)_allowsValueCoding;
- (float)decodeFloatForKey:(id)arg1;
- (void)setAllowedClasses:(id)arg1;
- (void)__setError:(id)arg1;
- (id)_blobForCurrentObject;
- (void)setClass:(Class)arg1 forClassName:(id)arg2;
- (id)_initWithStream:(struct __CFReadStream *)arg1 data:(id)arg2 topDict:(struct __CFDictionary *)arg3;
- (id)_initForReadingFromData:(id)arg1 error:(id *)arg2 throwLegacyExceptions:(_Bool)arg3;
- (id)initForReadingFromData:(id)arg1 error:(id *)arg2;
- (void)finishDecoding;
- (void)_setAllowedClassNames:(id)arg1;
- (void)_temporaryMapReplaceObject:(id)arg1 withObject:(id)arg2;
- (Class)classForClassName:(id)arg1;
- (id)initWithStream:(id)arg1;
- (id)_allowedClassNames;
- (void)_replaceObject:(id)arg1 withObject:(id)arg2;
- (_Bool)_validatePropertyListClass:(Class)arg1 forKey:(id)arg2;
- (void)_enableStrictSecureDecodingMode;
- (unsigned int)_currentUniqueIdentifier;

@end
