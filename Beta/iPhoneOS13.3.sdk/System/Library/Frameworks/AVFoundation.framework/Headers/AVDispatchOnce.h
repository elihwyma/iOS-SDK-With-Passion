/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVDispatchOnce : NSObject

{
    struct os_unfair_lock_s _lock;
    _Bool _testFlag;
}

- (id)init;
- (void)runBlockOnce:(CDUnknownBlockType)arg1;

@end
