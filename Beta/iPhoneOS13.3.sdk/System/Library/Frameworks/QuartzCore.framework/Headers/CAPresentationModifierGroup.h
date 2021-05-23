/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@interface CAPresentationModifierGroup : NSObject

{
    void *_shmem;
    unsigned long long _capacity;
    unsigned long long _count;
}

@property (readonly) unsigned long long capacity;
@property (readonly) unsigned long long count;

+ (id)groupWithCapacity:(unsigned long long)arg1;

- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (struct Shmem *)shmem;
- (void)flush;
- (unsigned long long)nextSlot;
- (void)resetBitMask;
- (void)markWritten:(unsigned long long)arg1;

@end
