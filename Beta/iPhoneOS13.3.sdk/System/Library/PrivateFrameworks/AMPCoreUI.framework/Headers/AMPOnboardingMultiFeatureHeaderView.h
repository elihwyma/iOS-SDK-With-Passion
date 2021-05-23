/*
 Image: /System/Library/PrivateFrameworks/AMPCoreUI.framework/AMPCoreUI
 */

#import <UIKit/UIScrollView.h>

@class NSArray, UILabel;

__attribute__((visibility("hidden")))
@interface AMPOnboardingMultiFeatureHeaderView : UIScrollView

{
    _Bool _isPresentedInFormSheet;
    UILabel *_titleLabel;
    double _containerHeight;
    NSArray *_featureViews;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSArray *featureViews;
@property (nonatomic) double containerHeight;
@property (nonatomic) _Bool isPresentedInFormSheet;

- (void)updateContentSize;
- (void)setFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)adjustedContentInsetDidChange;
- (id)initWithFeatures:(id)arg1;

@end
