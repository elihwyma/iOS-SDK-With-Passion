/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIScrollViewSimulatedGesture : NSObject

{
    double _simulationDuration;
    double _beginTime;
    CDUnknownBlockType _beginBlock;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _endBlock;
}

- (id)initWithDuration:(double)arg1 begin:(CDUnknownBlockType)arg2 update:(CDUnknownBlockType)arg3 end:(CDUnknownBlockType)arg4;
- (_Bool)updateSimulation;

@end
