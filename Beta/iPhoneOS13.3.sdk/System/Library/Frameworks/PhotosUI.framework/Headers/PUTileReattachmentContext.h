/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface PUTileReattachmentContext : NSObject

{
    _Bool _isZoomingIn;
    _Bool _isTransitioningOverOneUp;
    NSMapTable *__tileControllerVelocities;
}

@property (nonatomic, readonly) NSMapTable *_tileControllerVelocities;
@property (nonatomic, setter=setZoomingIn:) _Bool isZoomingIn;
@property (nonatomic, setter=setTransitioningOverOneUp:) _Bool isTransitioningOverOneUp;

- (struct PUDisplayVelocity)velocityForTileController:(id)arg1;
- (void)setVelocity:(struct PUDisplayVelocity)arg1 forTileController:(id)arg2;

@end
