/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXChangeDirectionNumberFilter, PXInitialHysteresisNumberFilter;

@interface PXCuratedLibraryZoomLevelPinchFilter : NSObject

{
    _Bool _didHandleInitialPinch;
    PXInitialHysteresisNumberFilter *_initialDirectionFilter;
    PXChangeDirectionNumberFilter *_scaleDirectionFilter;
    double _lastDirection;
    _Bool _isTrackingPinch;
}

@property (nonatomic, readonly) _Bool isTrackingPinch;

- (id)init;
- (void)reset;
- (void)filterPinchGestureWithScale:(double)arg1 initialPinchHandler:(CDUnknownBlockType)arg2 subsequentDirectionChangeHandler:(CDUnknownBlockType)arg3;

@end
