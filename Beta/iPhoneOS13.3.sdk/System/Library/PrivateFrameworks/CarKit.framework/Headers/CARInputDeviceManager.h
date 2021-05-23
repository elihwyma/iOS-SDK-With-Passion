/*
 Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

#import <NSObject.h>

@class CARSession, NSArray, NSString;

@interface CARInputDeviceManager : NSObject

{
    NSArray *_inputDevices;
    CARSession *_session;
}

@property (weak, nonatomic, readonly) CARSession *session;
@property (nonatomic, readonly) NSArray *inputDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)touchpadWithSenderID:(unsigned long long)arg1;
- (id)initWithEndpointInputDevices:(id)arg1 screenIDs:(id)arg2 vehicleInformation:(id)arg3 session:(id)arg4;
- (void)vehicleInformationChanged:(id)arg1;
- (void)performHapticType:(unsigned long long)arg1 deviceUUID:(id)arg2;
- (id)_generateInputDevicesWithEndpointInputDevices:(id)arg1 screenIDs:(id)arg2 vehicleInformation:(id)arg3;
- (id)_touchpadSettingsFromVehicleInformation:(id)arg1;
- (void)_updateTouchpadSettings:(id)arg1;
- (void)_enumerateTouchpadsUsingBlock:(CDUnknownBlockType)arg1;
- (id)_inputDeviceWithSenderID:(unsigned long long)arg1;
- (_Bool)touchpadCharacterRecognitionSupported;
- (id)_initWithInputDevices:(id)arg1 session:(id)arg2;

@end
