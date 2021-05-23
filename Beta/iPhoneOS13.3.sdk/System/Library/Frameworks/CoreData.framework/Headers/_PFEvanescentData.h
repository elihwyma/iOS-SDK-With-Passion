/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSData.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface _PFEvanescentData : NSData

{
    unsigned long long _length;
    NSURL *_fileURL;
    int _openfd;
    const void *_activeMap;
    int _mapRefCount;
}

@property (copy, readonly) NSURL *url;
@property (readonly) const void *mapping;

+ (Class)classForKeyedUnarchiver;

- (void)dealloc;
- (unsigned long long)length;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (const void *)bytes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invalidate;
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (Class)classForCoder;
- (id)initWithURL:(id)arg1;
- (id)subdataWithRange:(struct _NSRange)arg1;
- (Class)classForArchiver;
- (id)initWithPath:(id)arg1;
- (_Bool)isEqualToData:(id)arg1;
- (void)enumerateByteRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)getBytes:(void *)arg1;
- (void)_destroyMapping;
- (const void *)_openMapping;
- (void)_closeMapping;

@end
