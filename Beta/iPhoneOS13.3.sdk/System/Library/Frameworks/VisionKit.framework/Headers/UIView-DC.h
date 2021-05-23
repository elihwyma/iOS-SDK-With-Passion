/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <UIKit/UIView.h>

@interface UIView (DC)

@property (nonatomic, readonly) _Bool dc_isRTL;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets dc_directionalSafeAreaInsets;

+ (void)dc_animateWithDuration:(double)arg1 timingFunction:(id)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)dc_animateWithDuration:(double)arg1 timingFunction:(id)arg2 animations:(CDUnknownBlockType)arg3;

- (_Bool)dc_isInSecureWindow;
- (id)dc_imageRenderedFromLayer;
- (id)dc_imageRenderedFromViewHierarchy;
- (id)dc_renderImage;
- (void)dc_crashIfWindowIsSecure;
- (id)dc_imageViewRenderedFromLayer;
- (id)dc_imageViewRenderedFromViewHierarchy;
- (void)dc_removeAllConstraintsForSubview:(id)arg1;
- (void)dc_addConstraintsToFillSuperview;
- (id)dc_renderImageView;
- (id)dc_animator;

@end
