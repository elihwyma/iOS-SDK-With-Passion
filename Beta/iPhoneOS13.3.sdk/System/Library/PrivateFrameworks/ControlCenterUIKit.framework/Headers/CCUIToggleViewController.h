/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

#import <ControlCenterUIKit/CCUIButtonModuleViewController.h>

@class CCUICAPackageDescription, CCUIToggleModule, NSString, UIColor, UIImage, UIImageView, UIViewPropertyAnimator;

@interface CCUIToggleViewController : CCUIButtonModuleViewController

{
    UIImageView *_glyphImageView;
    UIImage *_glyphImage;
    UIImage *_selectedGlyphImage;
    UIColor *_selectedColor;
    CCUICAPackageDescription *_glyphPackageDescription;
    NSString *_glyphState;
    CCUIToggleModule *_module;
}

@property (weak, nonatomic) CCUIToggleModule *module;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double preferredExpandedContentHeight;
@property (nonatomic, readonly) double preferredExpandedContentWidth;
@property (nonatomic, readonly) double preferredExpandedContinuousCornerRadius;
@property (nonatomic, readonly) _Bool providesOwnPlatter;
@property (nonatomic, readonly) UIViewPropertyAnimator *customAnimator;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)refreshState;
- (void)buttonTapped:(id)arg1 forEvent:(id)arg2;
- (_Bool)shouldFinishTransitionToExpandedContentModule;
- (void)reconfigureView;

@end
