/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBUISettings.h>

@class NSString;

@interface SBAttentionAwarenessSettings : SBUISettings

{
    _Bool _allowsAttentionAwareAutoLock;
    _Bool _supportsAttentionSensor;
    _Bool _shouldUseAttentionSensor;
    _Bool _isObservingDataSources;
    struct AWNotification_s *_attentionAwarenessToken;
    double _sampleInterval;
    double _dimInterval;
    double _sleepInterval;
}

@property (nonatomic) _Bool shouldUseAttentionSensor;
@property (nonatomic) double sampleInterval;
@property (nonatomic) double dimInterval;
@property (nonatomic) double sleepInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)settingsControllerModule;
+ (_Bool)attentionSensorSupported;

- (void)dealloc;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)setDefaultValues;

@end
