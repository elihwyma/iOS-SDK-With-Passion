/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSMutableData.h>

@interface NSPurgeableData : NSMutableData

{
    unsigned long long _length;
    int _accessCount;
    unsigned char _private[32];
    void *_reserved;
}

- (id)init;
- (void)dealloc;
- (unsigned long long)length;
- (id)description;
- (const void *)bytes;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void *)mutableBytes;
- (void)setLength:(unsigned long long)arg1;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(_Bool)arg3 deallocator:(CDUnknownBlockType)arg4;
- (_Bool)beginContentAccess;
- (void)endContentAccess;
- (void)discardContentIfPossible;
- (_Bool)isContentDiscarded;
- (void)_destroyMemory;

@end
