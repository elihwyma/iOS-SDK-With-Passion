/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <PrototypeTools/PTSettings.h>

@class BSAnimationSettings, NSString, PTPointSettings;

@interface SBFAnimationSettings : PTSettings

{
    BSAnimationSettings *_exportedSettings;
    long long _animationType;
    double _delay;
    unsigned long long _frameRate;
    unsigned long long _curve;
    PTPointSettings *_controlPoint1Settings;
    PTPointSettings *_controlPoint2Settings;
    double _duration;
    double _mass;
    double _stiffness;
    double _damping;
    double _epsilon;
    double _speed;
}

@property (nonatomic) long long animationType;
@property (nonatomic) double delay;
@property (nonatomic) unsigned long long frameRate;
@property (nonatomic) unsigned long long curve;
@property (retain, nonatomic) PTPointSettings *controlPoint1Settings;
@property (retain, nonatomic) PTPointSettings *controlPoint2Settings;
@property (nonatomic) double duration;
@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double damping;
@property (nonatomic) double epsilon;
@property (nonatomic, readonly) double calculatedDuration;
@property (nonatomic) double speed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)settingsControllerModule;
+ (_Bool)ignoresKey:(id)arg1;
+ (id)_moduleWithSectionTitle:(id)arg1;
+ (id)_moduleWithSectionTitle:(id)arg1 delay:(_Bool)arg2 frameRate:(_Bool)arg3;

- (void)dealloc;
- (void)setDefaultValues;
- (id)initWithDefaultValues;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)BSAnimationSettings;

@end
