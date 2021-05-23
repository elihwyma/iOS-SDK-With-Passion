/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSProgress.h>

@interface _HDMirroredProgress : NSProgress

{
    NSProgress *_originalProgress;
}

+ (id)_KVOKeyPaths;

- (void)dealloc;
- (void)_update;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_registerForKVO;
- (void)_unregisterForKVO;
- (id)initWithMirroredProgress:(id)arg1;

@end
