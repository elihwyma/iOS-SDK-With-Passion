/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <Foundation/NSObject.h>

@class UIScrollView;

@interface ISVisibilityOffsetHelper : NSObject

{
    long long _direction;
    double _maximumDistance;
    double _maximumDistanceLag;
    UIScrollView *__scrollView;
    struct CGPoint __targetContentOffset;
}

@property (retain, nonatomic, setter=_setScrollView:) UIScrollView *_scrollView;
@property (nonatomic, setter=_setTargetContentOffset:) struct CGPoint _targetContentOffset;
@property (nonatomic) long long direction;
@property (nonatomic) double maximumDistance;
@property (nonatomic) double maximumDistanceLag;

- (struct CGRect)visibleRectForScrollView:(struct NSObject *)arg1;
- (struct CGRect)boundsForView:(struct NSObject *)arg1 inScrollView:(struct NSObject *)arg2;
- (void)getVisibility:(_Bool *)arg1 offset:(double *)arg2 targetVisibilityOffset:(double *)arg3 forView:(struct NSObject *)arg4;
- (void)computeVisibilityOffsetsInScrollView:(id)arg1 withTargetContentOffset:(struct CGPoint)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_updateDirectionIfNeeded;
- (struct ISVisibilityRange)_visibilityRangeForRect:(struct CGRect)arg1;

@end
