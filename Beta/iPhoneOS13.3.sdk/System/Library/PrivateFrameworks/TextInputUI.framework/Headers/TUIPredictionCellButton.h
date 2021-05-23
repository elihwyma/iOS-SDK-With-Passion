/*
 Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

#import <UIKitCore/UIButton.h>

@class TUIPredictionViewCell;

@interface TUIPredictionCellButton : UIButton

{
    TUIPredictionViewCell *_cellView;
}

@property (nonatomic, readonly) TUIPredictionViewCell *cellView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;

@end
