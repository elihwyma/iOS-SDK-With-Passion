/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UISettings.h>

__attribute__((visibility("hidden")))
@interface _UIScreenEdgePanRecognizerEdgeSettings : _UISettings

{
    double _hysteresis;
    double _edgeRegionSize;
    double _bottomEdgeRegionSize;
    double _edgeAngleWindow;
    double _edgeAngleWindowDecayTime;
    double _maximumSwipeDuration;
}

@property (nonatomic) double hysteresis;
@property (nonatomic) double edgeRegionSize;
@property (nonatomic) double bottomEdgeRegionSize;
@property (nonatomic) double edgeAngleWindow;
@property (nonatomic) double edgeAngleWindowDegreees;
@property (nonatomic) double edgeAngleWindowDecayTime;
@property (nonatomic) double maximumSwipeDuration;

+ (id)settingsControllerModule;
+ (id)keyPathsForValuesAffectingEdgeAngleWindowDegreees;

- (void)setDefaultValues;

@end
