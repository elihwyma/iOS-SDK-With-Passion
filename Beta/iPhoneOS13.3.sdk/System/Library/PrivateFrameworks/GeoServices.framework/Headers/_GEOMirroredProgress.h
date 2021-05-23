/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSProgress.h>

__attribute__((visibility("hidden")))
@interface _GEOMirroredProgress : NSProgress

{
    NSProgress *_originalProgress;
}

- (void)dealloc;
- (void)_update;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_initWithMirroredProgressForSubclasses:(id)arg1;
- (void)_registerForKVO;
- (void)_unregisterForKVO;
- (id)initWithMirroredProgress:(id)arg1;
- (void)_replaceObservedProgressWith:(id)arg1;

@end
