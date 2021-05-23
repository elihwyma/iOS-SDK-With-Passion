/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVExternalDeviceInternal, NSArray, NSData, NSDictionary, NSString;

@protocol AVExternalDeviceDelegate;

@interface AVExternalDevice : NSObject

{
    AVExternalDeviceInternal *_externalDevice;
}

@property (nonatomic) id <AVExternalDeviceDelegate> delegate;
@property (nonatomic, readonly) NSArray *screenIDs;
@property (nonatomic, readonly) NSDictionary *screenInputCapabilities;
@property (nonatomic, readonly) NSDictionary *screenPrimaryInputDevices;
@property (nonatomic, readonly) NSDictionary *screenViewAreas;
@property (nonatomic, readonly) NSDictionary *screenSafeAreas;
@property (nonatomic, readonly) NSData *OEMIcon;
@property (nonatomic, readonly) NSArray *OEMIcons;
@property (nonatomic, readonly) NSString *OEMIconLabel;
@property (nonatomic, readonly) _Bool OEMIconVisible;
@property (nonatomic, readonly) NSString *modelName;
@property (nonatomic, readonly) NSArray *externalDeviceHIDs;
@property (nonatomic, readonly) _Bool nightMode;
@property (nonatomic, readonly) _Bool nightModeSupported;
@property (nonatomic, readonly) _Bool rightHandDrive;
@property (nonatomic, readonly) NSArray *limitedUIElements;
@property (nonatomic, readonly) _Bool limitedUI;
@property (nonatomic, readonly) _Bool ownsScreen;
@property (nonatomic, readonly) _Bool ownsTurnByTurnNavigation;
@property (nonatomic, readonly) _Bool recognizingSpeech;
@property (nonatomic, readonly) NSArray *supportedFeatures;
@property (nonatomic, readonly) long long electronicTollCollection;
@property (nonatomic, readonly) long long navigationAidedDriving;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly) long long transportType;
@property (nonatomic, readonly) NSData *MFiCertificateSerialNumber;

+ (id)currentCarPlayExternalDevice;
+ (id)sharedLocalDevice;
+ (id)currentExternalDevice;

- (id)init;
- (void)dealloc;
- (id)_weakReference;
- (struct OpaqueFigEndpoint *)figEndpoint;
- (id)_figEndpointPropertyValueForKey:(struct __CFString *)arg1;
- (id)_screenInfo;
- (id)initWithFigEndpoint:(struct OpaqueFigEndpoint *)arg1;
- (void)requestCarUIForURL:(id)arg1 withUUID:(id)arg2;
- (id)externalDeviceHIDWithUUID:(id)arg1;
- (void)requestCarUI;
- (void)requestCarUIForURL:(id)arg1;
- (void)requestViewArea:(long long)arg1 forScreenID:(id)arg2;
- (id)requestTurnByTurnNavigationOwnership;
- (id)borrowScreenForClient:(id)arg1 reason:(id)arg2;
- (void)takeScreenForClient:(id)arg1 reason:(id)arg2;
- (void)takeScreenForConnection;
- (void)sendCommand:(id)arg1 withParameters:(id)arg2;
- (void)_triggerFakeNotificationNamed:(id)arg1 withPayload:(id)arg2;

@end
