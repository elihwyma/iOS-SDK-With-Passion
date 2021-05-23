/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

#import <UIKit/UIViewController.h>

@class CCUIButtonModuleView, CCUICAPackageDescription, NSString, UIColor, UIImage, UIViewPropertyAnimator;

@interface CCUIButtonModuleViewController : UIViewController

{
    CCUIButtonModuleView *_buttonModuleView;
    _Bool _expanded;
}

@property (retain, nonatomic) UIImage *glyphImage;
@property (retain, nonatomic) UIColor *glyphColor;
@property (retain, nonatomic) UIImage *selectedGlyphImage;
@property (retain, nonatomic) UIColor *selectedGlyphColor;
@property (retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription;
@property (copy, nonatomic) NSString *glyphState;
@property (nonatomic) double glyphScale;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (nonatomic, getter=isExpanded) _Bool expanded;
@property (nonatomic, readonly) CCUIButtonModuleView *buttonView;
@property (nonatomic, readonly) _Bool hasGlyph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double preferredExpandedContentHeight;
@property (nonatomic, readonly) double preferredExpandedContentWidth;
@property (nonatomic, readonly) double preferredExpandedContinuousCornerRadius;
@property (nonatomic, readonly) _Bool providesOwnPlatter;
@property (nonatomic, readonly) UIViewPropertyAnimator *customAnimator;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)buttonTouchDown:(id)arg1 forEvent:(id)arg2;
- (void)buttonTapped:(id)arg1 forEvent:(id)arg2;
- (void)_buttonTouchDown:(id)arg1 forEvent:(id)arg2;
- (void)_buttonTapped:(id)arg1 forEvent:(id)arg2;
- (void)willTransitionToExpandedContentMode:(_Bool)arg1;
- (void)didTransitionToExpandedContentMode:(_Bool)arg1;

@end
