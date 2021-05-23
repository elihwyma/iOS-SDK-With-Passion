/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSCoder.h>

@class NSData;

@protocol NSKeyedArchiverDelegate;

@interface NSKeyedArchiver : NSCoder

{
    void *_stream;
    unsigned long long _flags;
    id _delegate;
    id _containers;
    id _objects;
    id _objRefMap;
    id _replacementMap;
    id _classNameMap;
    id _conditionals;
    id _classes;
    unsigned long long _genericKey;
    void *_cache;
    unsigned long long _cacheSize;
    unsigned long long _estimatedCount;
    void *_reserved2;
    id _visited;
    void *_reserved0;
}

@property id <NSKeyedArchiverDelegate> delegate;
@property unsigned long long outputFormat;
@property (readonly) NSData *encodedData;
@property _Bool requiresSecureCoding;

+ (void)initialize;
+ (id)archivedDataWithRootObject:(id)arg1;
+ (_Bool)archiveRootObject:(id)arg1 toFile:(id)arg2;
+ (void)setClassName:(id)arg1 forClass:(Class)arg2;
+ (id)archivedDataWithRootObject:(id)arg1 requiringSecureCoding:(_Bool)arg2 error:(id *)arg3;
+ (id)classNameForClass:(Class)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (_Bool)allowsKeyedCoding;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)_encodePropertyList:(id)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeBool:(_Bool)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
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
- (void)encodeDataObject:(id)arg1;
- (unsigned int)systemVersion;
- (void)encodeBycopyObject:(id)arg1;
- (void)_encodeArrayOfObjects:(id)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeByrefObject:(id)arg1;
- (_Bool)_allowsValueCoding;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)setClassName:(id)arg1 forClass:(Class)arg2;
- (id)initRequiringSecureCoding:(_Bool)arg1;
- (void)finishEncoding;
- (id)_initWithOutput:(id)arg1;
- (id)classNameForClass:(Class)arg1;
- (void)_setBlobForCurrentObject:(id)arg1;
- (id)_blobForCurrentObject;

@end
