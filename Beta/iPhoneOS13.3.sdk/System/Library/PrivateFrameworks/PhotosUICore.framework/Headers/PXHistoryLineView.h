/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class PXStateBadgeView, UILabel;

@interface PXHistoryLineView : UIView

{
    PXStateBadgeView *_stateBadgeView;
    UILabel *_reasonLabel;
}

- (void)layoutSubviews;
- (id)initWithHistoryLine:(id)arg1;
- (void)setHistoryLine:(id)arg1;

@end
