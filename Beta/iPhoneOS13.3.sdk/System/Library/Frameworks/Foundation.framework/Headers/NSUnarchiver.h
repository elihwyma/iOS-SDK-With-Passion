/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSCoder.h>

@interface NSUnarchiver : NSCoder

{
    void *datax;
    unsigned long long cursor;
    struct _NSZone *objectZone;
    unsigned long long systemVersion;
    BOOL streamerVersion;
    BOOL swap;
    BOOL unused1;
    BOOL unused2;
    void *pointerTable;
    void *stringTable;
    id classVersions;
    long long lastLabel;
    void *map;
    void *allUnarchivedObjects;
    id reserved;
}

@property (readonly, getter=isAtEnd) _Bool atEnd;
@property (readonly) unsigned int systemVersion;

+ (void)initialize;
+ (void)decodeClassName:(id)arg1 asClassName:(id)arg2;
+ (id)unarchiveObjectWithData:(id)arg1;
+ (id)unarchiveObjectWithFile:(id)arg1;
+ (id)classNameDecodedForArchiveClassName:(id)arg1;

- (void)dealloc;
- (id)data;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (id)decodeObject;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(void *)arg3;
- (long long)versionForClassName:(id)arg1;
- (void)decodeClassName:(id)arg1 asClassName:(id)arg2;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;
- (id)initForReadingWithData:(id)arg1;
- (id)classNameDecodedForArchiveClassName:(id)arg1;
- (void)_setAllowedClasses:(id)arg1;
- (void)setObjectZone:(struct _NSZone *)arg1;
- (struct _NSZone *)objectZone;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)arg1;
- (id)decodeDataObject;

@end
