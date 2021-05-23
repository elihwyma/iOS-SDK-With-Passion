/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UISEGestureFeatureSettings : NSObject

{
    double _bottomEdgeAngleWindow;
    double _bottomEdgeRegionSize;
    double _cornerAngleWindow;
    double _edgeAngleWindow;
    double _edgeAngleWindowDecayTime;
    double _edgeRegionSize;
    double _hysteresis;
    unsigned long long _interfaceBottomEdge;
    unsigned long long _minimumNumberOfSubfeatures;
    double _maximumSwipeDuration;
    unsigned long long _targetEdges;
    struct CGRect _bounds;
}

@property (nonatomic) double bottomEdgeAngleWindow;
@property (nonatomic) double bottomEdgeRegionSize;
@property (nonatomic) struct CGRect bounds;
@property (nonatomic) double cornerAngleWindow;
@property (nonatomic) double edgeAngleWindow;
@property (nonatomic) double edgeAngleWindowDecayTime;
@property (nonatomic) double edgeRegionSize;
@property (nonatomic) double hysteresis;
@property (nonatomic) unsigned long long interfaceBottomEdge;
@property (nonatomic) unsigned long long minimumNumberOfSubfeatures;
@property (nonatomic) double maximumSwipeDuration;
@property (nonatomic) unsigned long long targetEdges;

- (id)init;

@end
