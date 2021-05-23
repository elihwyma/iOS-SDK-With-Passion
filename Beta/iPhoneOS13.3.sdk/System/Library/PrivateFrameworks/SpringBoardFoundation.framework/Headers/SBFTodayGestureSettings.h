/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <PrototypeTools/PTSettings.h>

@interface SBFTodayGestureSettings : PTSettings

{
    double _sideSpringTension;
    double _sideSpringFriction;
    double _interactiveSideSpringTension;
    double _interactiveSideSpringFriction;
}

@property (nonatomic) double sideSpringTension;
@property (nonatomic) double sideSpringFriction;
@property (nonatomic) double interactiveSideSpringTension;
@property (nonatomic) double interactiveSideSpringFriction;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
