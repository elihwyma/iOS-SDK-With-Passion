/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardFoundation/SBFTouchPassThroughViewController.h>

@class NSString, UIImage, UIImageView, UIView, _UIBackdropView;

@interface SBHUDViewController : SBFTouchPassThroughViewController

{
    _Bool _showsProgress;
    UIImage *_image;
    double _progress;
    NSString *_title;
    NSString *_subtitle;
    double _visibilityProgress;
    UIView *_hudView;
    UIView *_blockView;
    _UIBackdropView *_backdropView;
    UIImageView *_backdropMaskImageView;
}

@property (nonatomic, readonly) UIView *hudView;
@property (nonatomic, readonly) UIView *blockView;
@property (nonatomic, readonly) _UIBackdropView *backdropView;
@property (nonatomic, readonly) UIImageView *backdropMaskImageView;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) _Bool showsProgress;
@property (nonatomic) double progress;
@property (nonatomic) double visibilityProgress;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)progressIndicatorStep;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_rotateToInterfaceOrientation:(long long)arg1;
- (void)_updateBlockView;
- (void)_updateBackdropMask;
- (_Bool)displaysLabel;
- (id)_blockColorForValue:(float)arg1;
- (_Bool)definesAnimatedDismissal;
- (void)dismissAnimatedWithCompletion:(CDUnknownBlockType)arg1;

@end
