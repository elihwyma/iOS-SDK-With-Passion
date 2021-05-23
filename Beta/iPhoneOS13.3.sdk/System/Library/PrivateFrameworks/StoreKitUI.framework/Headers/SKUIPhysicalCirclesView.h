/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class CADisplayLink, NSMutableArray, NSObject, NSString, PKPhysicsBody, PKPhysicsWorld, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer;

@protocol OS_dispatch_source, SKUIPhysicalCirclesDataSource, SKUIPhysicalCirclesDelegate;

__attribute__((visibility("hidden")))
@interface SKUIPhysicalCirclesView : UIView

{
    NSObject<OS_dispatch_source> *_circleLoadStepTimer;
    NSMutableArray *_circleBodies;
    struct SKUIPhysicalCircleConstants _constants;
    id <SKUIPhysicalCirclesDataSource> _dataSource;
    id <SKUIPhysicalCirclesDelegate> _delegate;
    CADisplayLink *_displayLink;
    PKPhysicsBody *_groundBody;
    long long _longPressCircleIndex;
    UILongPressGestureRecognizer *_longPressRecognizer;
    double _maximumFrequencyDistance;
    double _minimumFrequencyDistance;
    UIPanGestureRecognizer *_panRecognizer;
    void *_physicsKitFramework;
    PKPhysicsWorld *_physicsWorld;
    NSMutableArray *_repellors;
    UITapGestureRecognizer *_tapRecognizer;
}

@property (weak, nonatomic) id <SKUIPhysicalCirclesDataSource> dataSource;
@property (weak, nonatomic) id <SKUIPhysicalCirclesDelegate> delegate;
@property (nonatomic) struct SKUIPhysicalCircleConstants constants;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)reloadData;
- (void)_displayLinkTick:(id)arg1;
- (void)_longPressAction:(id)arg1;
- (void)addCirclesWithCount:(long long)arg1;
- (void)removeCirclesInIndexSet:(id)arg1 byAnimatingToPoint:(struct CGPoint)arg2 delay:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)removeAllCirclesAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)removeCirclesInIndexSet:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)circleViewAtIndex:(long long)arg1;
- (void)setSize:(struct CGSize)arg1 forCircleAtIndex:(long long)arg2;
- (void)startPhysics;
- (void)stopPhysics;
- (void)removeCircleAtIndex:(long long)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)removeAllRepellors;
- (id)addRepellorWithCenter:(struct CGPoint)arg1 radius:(double)arg2 bufferSize:(double)arg3;
- (void)_tapGestureAction:(id)arg1;
- (void)_panGestureAction:(id)arg1;
- (void)_loadCirclesWithStartIndex:(long long)arg1 totalCount:(long long)arg2;
- (void)_cancelStepTimers;
- (void)_reloadDidFinish;
- (void)removeRepellor:(id)arg1;
- (void)_removeCircleBodies:(id)arg1;
- (void)_calculateFrequencyScaling;
- (long long)_circleIndexForPoint:(struct CGPoint)arg1;
- (void)_startFluctuationForCircleView:(id)arg1;
- (void)_stopFluctuationForCircleView:(id)arg1;
- (void)_addSpringForCircleBody:(id)arg1;
- (struct CGPoint)_initialPositionForCircleIndex:(long long)arg1 view:(id)arg2;
- (id)_circleBodyWithView:(id)arg1;
- (_Bool)_addNextMissingSpringJoint;

@end
