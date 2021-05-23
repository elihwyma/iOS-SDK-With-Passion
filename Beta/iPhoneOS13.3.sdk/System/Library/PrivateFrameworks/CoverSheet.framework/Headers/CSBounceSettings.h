/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <PrototypeTools/PTSettings.h>

@interface CSBounceSettings : PTSettings

{
    double _gravity;
    double _velocity;
    double _elasticity;
    double _friction;
    double _resistance;
    double _multiplier;
    double _minVelocityToAssist;
    double _maxVelocityToAssist;
    double _maxVelocityAssistance;
}

@property double gravity;
@property double velocity;
@property double elasticity;
@property double friction;
@property double resistance;
@property double multiplier;
@property double minVelocityToAssist;
@property double maxVelocityToAssist;
@property double maxVelocityAssistance;

- (void)setDefaultValues;

@end
