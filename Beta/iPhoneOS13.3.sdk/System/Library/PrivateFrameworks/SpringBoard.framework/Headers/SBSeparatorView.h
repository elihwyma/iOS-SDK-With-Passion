/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class SBSeparatorNubView;

@interface SBSeparatorView : UIView

{
    SBSeparatorNubView *_nubView;
    unsigned long long _nubStyle;
}

@property (nonatomic) unsigned long long nubStyle;
@property (nonatomic, readonly) struct CGRect nubRect;

- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateNubViewFrame;

@end
