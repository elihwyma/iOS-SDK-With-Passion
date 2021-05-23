/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <UIKit/UIView.h>

@class NSArray, NSPointerArray, NSString, NSUUID;

@protocol MPUMarqueeViewDelegate;

@interface MPUMarqueeView : UIView

{
    NSUUID *_currentAnimationID;
    long long _options;
    NSPointerArray *_coordinatedMarqueeViews;
    MPUMarqueeView *_primaryMarqueeView;
    _Bool _marqueeEnabled;
    double _contentGap;
    UIView *_contentView;
    UIView *_animationReferenceView;
    id <MPUMarqueeViewDelegate> _delegate;
    double _marqueeDelay;
    double _marqueeScrollRate;
    UIView *_viewForContentSize;
    long long _animationDirection;
    struct CGSize _contentSize;
    struct UIEdgeInsets _fadeEdgeInsets;
}

@property (nonatomic) double contentGap;
@property (nonatomic) struct CGSize contentSize;
@property (nonatomic, readonly) UIView *contentView;
@property (weak, nonatomic) UIView *animationReferenceView;
@property (nonatomic) struct UIEdgeInsets fadeEdgeInsets;
@property (weak, nonatomic) id <MPUMarqueeViewDelegate> delegate;
@property (nonatomic) double marqueeDelay;
@property (nonatomic) double marqueeScrollRate;
@property (nonatomic, getter=isMarqueeEnabled) _Bool marqueeEnabled;
@property (nonatomic, readonly) NSArray *coordinatedMarqueeViews;
@property (retain, nonatomic) UIView *viewForContentSize;
@property (nonatomic) long long animationDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)_duration;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)invalidateIntrinsicContentSize;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)didMoveToWindow;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)sceneDidEnterBackgroundNotification:(id)arg1;
- (void)sceneWillEnterForegroundNotification:(id)arg1;
- (void)_createMarqueeAnimationIfNeeded;
- (void)_tearDownMarqueeAnimation;
- (void)_applyMarqueeFade;
- (void)setMarqueeEnabled:(_Bool)arg1 withOptions:(long long)arg2;
- (void)addCoordinatedMarqueeView:(id)arg1;
- (void)_createMarqueeAnimationIfNeededWithMaximumDuration:(double)arg1 beginTime:(double)arg2;
- (void)resetMarqueePosition;

@end
