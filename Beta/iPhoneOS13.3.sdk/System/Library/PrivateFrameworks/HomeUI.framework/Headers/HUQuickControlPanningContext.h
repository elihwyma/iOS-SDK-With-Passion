/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@interface HUQuickControlPanningContext : NSObject

{
    _Bool _requiresSomeMovementBeforeActivation;
    double _initialSliderValue;
    double _verticalDragCoefficient;
    struct CGRect _controlFrame;
}

@property (nonatomic) struct CGRect controlFrame;
@property (nonatomic) double initialSliderValue;
@property (nonatomic) double verticalDragCoefficient;
@property (nonatomic) _Bool requiresSomeMovementBeforeActivation;

- (id)init;
- (void)assertConfigurationIsValid;

@end
