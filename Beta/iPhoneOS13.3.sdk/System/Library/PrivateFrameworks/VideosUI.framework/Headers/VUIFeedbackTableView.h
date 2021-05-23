/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class NSArray, VUIFeedbackTableLayout;

__attribute__((visibility("hidden")))
@interface VUIFeedbackTableView : UIView

{
    VUIFeedbackTableLayout *_layout;
    NSArray *_dataModels;
}

@property (retain, nonatomic) VUIFeedbackTableLayout *layout;
@property (retain, nonatomic) NSArray *dataModels;

- (id)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (void)prepareForCellReuse;
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;
- (struct CGSize)_calculateMaxDescriptionThatFit:(struct CGSize)arg1;
- (struct CGSize)_calculateMaxHeaderThatFits:(struct CGSize)arg1;

@end
