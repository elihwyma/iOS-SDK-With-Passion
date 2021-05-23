/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingTouchSequence : NSObject

{
    _Bool _didReceiveSpatialFocusUpdate;
    _Bool _didReceiveProgrammaticFocusUpdate;
    double _peakSpeed;
    struct CGPoint _startLocation;
    struct CGPoint _previousLocation;
    struct CGPoint _endLocation;
    struct CGVector _axisLockedDistanceAccumulator;
}

@property (nonatomic) struct CGPoint startLocation;
@property (nonatomic) struct CGPoint previousLocation;
@property (nonatomic) struct CGPoint endLocation;
@property (nonatomic) double peakSpeed;
@property (nonatomic) struct CGVector axisLockedDistanceAccumulator;
@property (nonatomic) _Bool didReceiveSpatialFocusUpdate;
@property (nonatomic) _Bool didReceiveProgrammaticFocusUpdate;

@end
