/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class GKBubbleSet, MISSING_TYPE, NSDictionary, UIView;

@interface _GKBubbleFlowPathTransitionInfo : NSObject

{
    double _startTime;
    double _duration;
    GKBubbleSet *_bubbles;
    long long _focusBubbleType;
    UIView *_effectiveView;
    MISSING_TYPE *_bubbleStartPositionsByType[12];
    _Bool _couldUseFallbackAnimator;
    NSDictionary *_auxiliaryInfo;
    MISSING_TYPE *_bubbleEndPositionsByType[12];
    long long _newlyVisibleBubbles;
}

@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) UIView *effectiveView;
@property (nonatomic) GKBubbleSet *bubbles;
@property (nonatomic) long long newlyVisibleBubbles;
@property (nonatomic) long long focusBubbleType;
@property (nonatomic) _Bool couldUseFallbackAnimator;
@property (retain, nonatomic) NSDictionary *auxiliaryInfo;

- (id)init;
- (void)dealloc;
- (id)description;

@end
