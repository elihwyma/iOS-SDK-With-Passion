/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@class NSArray;

@interface GKHorizontalBubbleControlsView : UIView

{
    NSArray *_bubbles;
    double _overlap;
    NSArray *_bubbleTokens;
}

@property (retain, nonatomic) NSArray *bubbleTokens;
@property (retain, nonatomic) NSArray *bubbles;
@property (nonatomic) double overlap;

- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)_commonInit;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end
