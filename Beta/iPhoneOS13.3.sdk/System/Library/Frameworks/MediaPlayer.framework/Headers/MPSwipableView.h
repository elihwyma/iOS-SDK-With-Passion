/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIView.h>

@class MPActivityGestureRecognizer, MPSwipeGestureRecognizer, MPTapGestureRecognizer, NSString, UIPinchGestureRecognizer;

@protocol MPSwipableViewDelegate;

@interface MPSwipableView : UIView

{
    long long _enabledGestureTypes;
    long long _simultaneousGestureTypes;
    id <MPSwipableViewDelegate> _swipeDelegate;
    MPTapGestureRecognizer *_tapGestureRecognizer;
    MPSwipeGestureRecognizer *_swipeGestureRecognizer;
    MPActivityGestureRecognizer *_activityGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
}

@property (nonatomic) long long enabledGestureTypes;
@property (nonatomic) long long simultaneousGestureTypes;
@property (weak, nonatomic) id <MPSwipableViewDelegate> swipeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)addGestureRecognizer:(id)arg1;
- (void)removeGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_tapGestureRecognized:(id)arg1;
- (void)_swipeGestureRecognized:(id)arg1;
- (void)_activityGestureRecognized:(id)arg1;
- (void)_pinchGestureRecognized:(id)arg1;
- (void)_updateGestureRecognizersForEnabledTypes;

@end
