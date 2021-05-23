/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

#import <UIKit/UIViewController.h>

@class CCUICAPackageView, MTVisualStylingProvider, NSString, UIImageView;

@interface CCUISliderModuleBackgroundViewController : UIViewController

{
    UIImageView *_headerImageView;
    CCUICAPackageView *_packageView;
    MTVisualStylingProvider *_visualStylingProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)setGlyphImage:(id)arg1;
- (void)setGlyphPackageDescription:(id)arg1;
- (void)setGlyphState:(id)arg1;
- (struct CGPoint)_headerCenterForBounds:(struct CGRect)arg1;
- (void)_updateHeaderGlyphVisualStyling;
- (struct CGRect)effectiveContentFrameForContainerFrame:(struct CGRect)arg1;

@end
