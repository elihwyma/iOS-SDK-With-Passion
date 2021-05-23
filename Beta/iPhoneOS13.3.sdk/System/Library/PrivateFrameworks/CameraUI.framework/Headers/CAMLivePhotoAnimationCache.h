/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface CAMLivePhotoAnimationCache : NSObject

{
    _Bool _automaticModeAllowed;
    NSDictionary *__animationFramesByColor;
}

@property (nonatomic, readonly, getter=_isEmpty) _Bool _empty;
@property (retain, nonatomic, setter=_setAnimationFramesByColor:) NSDictionary *_animationFramesByColor;
@property (nonatomic, readonly) _Bool automaticModeAllowed;

- (id)_colors;
- (id)initWithAutomaticModeAllowed:(_Bool)arg1;
- (void)preloadFramesIfNeeded;
- (id)framesForLivePhotoMode:(long long)arg1;
- (id)_actuallyLoadEnablingAnimationImagesForColors:(id)arg1 scale:(double)arg2;
- (id)_tintColorForMode:(long long)arg1;

@end
