/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface UIDevice : NSObject

{
    long long _numDeviceOrientationObservers;
    float _batteryLevel;
    struct {
        unsigned int batteryMonitoringEnabled:1;
        unsigned int proximityMonitoringEnabled:1;
        unsigned int expectsFaceContactInLandscape:1;
        unsigned int orientation:3;
        unsigned int batteryState:2;
        unsigned int proximityState:1;
        unsigned int hasTouchPadOverride:1;
        unsigned int hasTouchPad:1;
    } _deviceFlags;
}

@property (nonatomic, readonly, getter=_feedbackSupportLevel) long long feedbackSupportLevel;
@property (nonatomic) long long orientation;
@property (retain, nonatomic, readonly) NSString *buildVersion;
@property (nonatomic, readonly) _Bool _supportsPencil;
@property (nonatomic, setter=_setBacklightLevel:) float _backlightLevel;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *localizedModel;
@property (nonatomic, readonly) NSString *systemName;
@property (nonatomic, readonly) NSString *systemVersion;
@property (nonatomic, readonly) long long orientation;
@property (nonatomic, readonly) NSUUID *identifierForVendor;
@property (nonatomic, readonly, getter=isGeneratingDeviceOrientationNotifications) _Bool generatesDeviceOrientationNotifications;
@property (nonatomic, getter=isBatteryMonitoringEnabled) _Bool batteryMonitoringEnabled;
@property (nonatomic, readonly) long long batteryState;
@property (nonatomic, readonly) float batteryLevel;
@property (nonatomic, getter=isProximityMonitoringEnabled) _Bool proximityMonitoringEnabled;
@property (nonatomic, readonly) _Bool proximityState;
@property (nonatomic, readonly, getter=isMultitaskingSupported) _Bool multitaskingSupported;
@property (nonatomic, readonly) long long userInterfaceIdiom;

+ (id)currentDevice;
+ (_Bool)_hasHomeButton;
+ (_Bool)_isWatchCompanion;
+ (_Bool)_isWatch;
+ (long long)currentDeviceOrientationAllowingAmbiguous:(_Bool)arg1;
+ (id)modelSpecificLocalizedStringKeyForKey:(id)arg1;
+ (_Bool)_isLowEnd;

- (id)_tapticEngine;
- (long long)_keyboardGraphicsQuality;
- (long long)_graphicsQuality;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)_isSystemSoundEnabled;
- (id)_deviceInfoForKey:(struct __CFString *)arg1;
- (_Bool)_supportsForceTouch;
- (void)_registerForSystemSounds:(id)arg1;
- (void)_unregisterForSystemSounds:(id)arg1;
- (_Bool)_supportsDeepColor;
- (void)_enableDeviceOrientationEvents:(_Bool)arg1;
- (void)_playSystemSound:(unsigned int)arg1;
- (void)_updateSystemSoundActiveStatus:(id)arg1;
- (void)_setActiveUserInterfaceIdiom:(long long)arg1;
- (void)beginGeneratingDeviceOrientationNotifications;
- (void)endGeneratingDeviceOrientationNotifications;
- (void)_setExpectsFaceContactInLandscape:(_Bool)arg1;
- (void)playInputClick;
- (float)_softwareDimmingAlpha;
- (void)_playInputSelectSound;
- (void)_playInputDeleteSound;
- (void)_setProximityState:(_Bool)arg1;
- (void)_setBatteryState:(long long)arg1;
- (void)_setBatteryLevel:(float)arg1;
- (_Bool)_hasTouchPad;
- (void)_setHasTouchPad:(_Bool)arg1;
- (void)_setGraphicsQualityOverride:(long long)arg1;
- (void)_clearGraphicsQualityOverride;
- (_Bool)_hasGraphicsQualityOverride;
- (long long)_predictionGraphicsQuality;
- (long long)_nativeScreenGamut;

@end
