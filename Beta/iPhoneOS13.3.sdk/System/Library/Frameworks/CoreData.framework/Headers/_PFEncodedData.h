/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface _PFEncodedData : NSData

{
    NSData *_aData;
    unsigned int _byteCount;
    unsigned int _reserved;
}

+ (Class)classForKeyedUnarchiver;

- (id)init;
- (unsigned long long)retainCount;
- (unsigned long long)length;
- (id)retain;
- (oneway void)release;
- (id)description;
- (const void *)bytes;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)subdataWithRange:(struct _NSRange)arg1;
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;
- (Class)classForArchiver;
- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2;
- (_Bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)isEqualToData:(id)arg1;
- (_Bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (struct _NSRange)rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (id)privateCopy;

@end
