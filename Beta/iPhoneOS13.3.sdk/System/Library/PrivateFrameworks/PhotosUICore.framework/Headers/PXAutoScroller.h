/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@protocol PXAnonymousScrollView, PXAutoScrollerDelegate;

@interface PXAutoScroller : NSObject

{
    struct {
        _Bool didAutoscrollWithTimestamp;
    } _delegateRespondsTo;
    _Bool __repeating;
    struct NSObject *_scrollView;
    id <PXAutoScrollerDelegate> _delegate;
    double __margin;
    double __maximumSpeed;
    double __lastUpdateTimestamp;
    struct CGPoint __autoscrollDirection;
}

@property (nonatomic, readonly) double _margin;
@property (nonatomic, readonly) double _maximumSpeed;
@property (nonatomic, setter=_setAutoscrollDirection:) struct CGPoint _autoscrollDirection;
@property (nonatomic, getter=_isRepeating, setter=_setRepeating:) _Bool _repeating;
@property (nonatomic, setter=_setLastUpdateTimestamp:) double _lastUpdateTimestamp;
@property (nonatomic, readonly) NSObject<PXAnonymousScrollView> *scrollView;
@property (weak, nonatomic) id <PXAutoScrollerDelegate> delegate;

- (id)init;
- (void)stop;
- (void)updateWithTimestamp:(double)arg1;
- (id)initWithTargetScrollView:(struct NSObject *)arg1;
- (void)updateWithUserInteractionLocation:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (struct CGRect)visibleRectForScrollView:(struct NSObject *)arg1;
- (void)startRepeating;
- (void)stopRepeating;
- (_Bool)autoscrollWithOffset:(struct CGPoint)arg1;

@end
