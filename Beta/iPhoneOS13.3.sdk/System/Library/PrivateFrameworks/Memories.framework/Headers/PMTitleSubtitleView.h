/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, PXExtendedTraitCollection, PXTitleSubtitleUILabel, UIViewController;

@interface PMTitleSubtitleView : UIView

{
    struct CGPoint _ptOffset;
    double _titleScale;
    NSString *_titleFontName;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_leftConstraint;
    UIViewController *_viewController;
    PXTitleSubtitleUILabel *_label;
    UIView *_dark;
    PXExtendedTraitCollection *_extendedTraitCollection;
    struct CGRect _specSize;
}

@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leftConstraint;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) PXTitleSubtitleUILabel *label;
@property (retain, nonatomic) UIView *dark;
@property (retain, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (nonatomic) struct CGRect specSize;
@property (nonatomic) double titleScale;
@property (nonatomic) struct CGPoint ptOffset;
@property (nonatomic, readonly) double heightOfTitleArea;
@property (retain, nonatomic) NSString *titleFontName;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *subtitleText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (double)toolbarHeight;
- (void)registerForChangesFromViewController:(id)arg1;
- (void)updateTitleAnimationFromVideoComposition:(id)arg1;
- (void)updateSubtitleTitleLabelForSize:(struct CGSize)arg1;
- (void)updateSpecIfNeeded;
- (void)updateDarkFrame;
- (void)updateFeatureSpecWithExtendedTraitCollection:(id)arg1;
- (void)updateSpecialConstraints;
- (void)setSpecForVerticalExport;

@end
