/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class UILabel, UIScrollView;

@interface CKActionSheetMenuTitleView : UIView

{
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
}

- (id)initWithTitle:(id)arg1;
- (id)_textColor;
- (double)_desiredHeightForLabel:(id)arg1 parentBoundingRect:(struct CGRect)arg2;
- (void)updateTitleConstraintsForBoundingRect:(struct CGRect)arg1;

@end
