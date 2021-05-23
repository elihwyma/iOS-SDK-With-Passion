/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIBannerContainerView : UIView

{
    NSMutableArray *_banners;
    NSMutableArray *_constraints;
}

@property (retain, nonatomic) NSMutableArray *banners;
@property (retain, nonatomic) NSMutableArray *constraints;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)statusBarFrameDidChange:(id)arg1;
- (void)_setBanner:(id)arg1 visible:(_Bool)arg2 alongsideAnimations:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_presentBanner:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_dismissBanner:(id)arg1 alongsideAnimations:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
