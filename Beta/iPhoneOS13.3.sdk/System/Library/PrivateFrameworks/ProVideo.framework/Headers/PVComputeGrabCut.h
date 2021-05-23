/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface PVComputeGrabCut : NSObject

{
    struct HFGrabCutInterface *_module;
}

- (id)init;
- (void)dealloc;
- (void)reset;
- (_Bool)processImage:(id)arg1 trimap:(id)arg2 roi:(struct CGRect)arg3 clusters:(int)arg4 gamma:(float)arg5 iterations:(int)arg6 mask:(id)arg7;

@end
