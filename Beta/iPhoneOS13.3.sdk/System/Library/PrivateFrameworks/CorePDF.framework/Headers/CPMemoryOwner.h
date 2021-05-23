/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CPMemoryOwner : NSObject

{
    void *memory;
}

- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)initWithAllocatedMemory:(void *)arg1;

@end
