/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@interface VNCanceller : NSObject

{
    CDUnknownBlockType _signallingBlock;
    struct os_unfair_lock_s _lock;
    _Bool _signalled;
}

- (id)init;
- (void)reset;
- (void)_releaseSignallingBlock;
- (_Bool)tryToPerformBlock:(CDUnknownBlockType)arg1 usingSignallingBlock:(CDUnknownBlockType)arg2;
- (void)signalCancellation;
- (_Bool)wasSignalled;

@end
