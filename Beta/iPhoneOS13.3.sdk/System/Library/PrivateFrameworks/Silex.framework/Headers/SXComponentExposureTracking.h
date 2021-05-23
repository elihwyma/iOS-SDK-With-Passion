/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class SXComponentView;

@interface SXComponentExposureTracking : NSObject

{
    SXComponentView *_componentView;
    CDUnknownBlockType _exposureStateChangeBlock;
    CDUnknownBlockType _conditionBlock;
    double _visibilityFactor;
    double _minimumVisibleY;
    double _maximumVisibleY;
    long long _lastObservedVisibilityState;
}

@property (weak, nonatomic, readonly) SXComponentView *componentView;
@property (copy, nonatomic, readonly) CDUnknownBlockType exposureStateChangeBlock;
@property (copy, nonatomic, readonly) CDUnknownBlockType conditionBlock;
@property (nonatomic, readonly) double visibilityFactor;
@property (nonatomic) double minimumVisibleY;
@property (nonatomic) double maximumVisibleY;
@property (nonatomic) long long lastObservedVisibilityState;

+ (id)exposureTrackingWithComponent:(id)arg1 exposureStateChangeBlock:(CDUnknownBlockType)arg2 conditionBlock:(CDUnknownBlockType)arg3;

- (id)initWithComponent:(id)arg1 exposureStateChangeBlock:(CDUnknownBlockType)arg2 conditionBlock:(CDUnknownBlockType)arg3;
- (void)calculateVisibilityFactor;

@end
