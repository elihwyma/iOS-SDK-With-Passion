/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@class GKBubbleSet, MISSING_TYPE, NSArray, NSMutableArray;

@interface GKBubbleFlowContainerView : UIView

{
    struct CGRect _bubbleRestingRects[12];
    NSMutableArray *_bubbleSets;
    _Bool _usingCustomLayout;
    long long _supportedBubbles;
}

@property (retain, nonatomic) NSArray *bubbleSets;
@property (nonatomic, readonly) long long supportedBubbles;
@property (nonatomic, readonly) GKBubbleSet *primaryBubbleControls;
@property (nonatomic) _Bool usingCustomLayout;

- (void)dealloc;
- (void)setHidden:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)addBubbleSet:(id)arg1;
- (struct CGRect)restingRectForBubbleType:(long long)arg1;
- (void)enumerateBubbles:(CDUnknownBlockType)arg1;
- (void)setRestingRect:(struct CGRect)arg1 forBubbleType:(long long)arg2;
- (MISSING_TYPE *)worldPositionForBubble:(long long)arg1;

@end
