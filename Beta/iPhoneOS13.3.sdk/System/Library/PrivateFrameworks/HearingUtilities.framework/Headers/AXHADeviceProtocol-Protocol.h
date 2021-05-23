/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <HearingUtilities/Swift-Protocol.h>

@class AXHearingAidMode, NSArray, NSDate, NSMutableArray, NSString;

@protocol AXHADeviceProtocol <Swift>

@property (nonatomic, readonly) _Bool isPaired;
@property (nonatomic, readonly) _Bool isConnecting;
@property (nonatomic) _Bool keepInSync;
@property (retain, nonatomic, readonly) NSString *name;
@property (retain, nonatomic, readonly) NSMutableArray *manufacturer;
@property (retain, nonatomic, readonly) NSMutableArray *model;
@property (retain, nonatomic, readonly) NSString *leftFirmwareVersion;
@property (retain, nonatomic, readonly) NSString *rightFirmwareVersion;
@property (retain, nonatomic, readonly) NSString *leftHardwareVersion;
@property (retain, nonatomic, readonly) NSString *rightHardwareVersion;
@property (nonatomic) int availableEars;
@property (retain, nonatomic, readonly) NSString *rightUUID;
@property (retain, nonatomic, readonly) NSString *leftUUID;
@property (retain, nonatomic, readonly) NSString *leftPeripheralUUID;
@property (retain, nonatomic, readonly) NSString *rightPeripheralUUID;
@property (nonatomic) double rightMicrophoneVolume;
@property (nonatomic) double leftMicrophoneVolume;
@property (nonatomic) double rightStreamVolume;
@property (nonatomic) double leftStreamVolume;
@property (nonatomic) double rightSensitivity;
@property (nonatomic) double leftSensitivity;
@property (nonatomic) double rightMixedVolume;
@property (nonatomic) double leftMixedVolume;
@property (nonatomic) BOOL rightTreble;
@property (nonatomic) BOOL leftTreble;
@property (nonatomic) BOOL rightBass;
@property (nonatomic) BOOL leftBass;
@property (nonatomic, readonly) double rightBatteryLevel;
@property (nonatomic, readonly) double leftBatteryLevel;
@property (retain, nonatomic, readonly) NSDate *leftBatteryLowDate;
@property (retain, nonatomic, readonly) NSDate *rightBatteryLowDate;
@property (nonatomic, readonly) short leftMicrophoneVolumeSteps;
@property (nonatomic, readonly) short rightMicrophoneVolumeSteps;
@property (nonatomic, readonly) short leftStreamVolumeSteps;
@property (nonatomic, readonly) short rightStreamVolumeSteps;
@property (nonatomic, readonly) short leftSensitivitySteps;
@property (nonatomic, readonly) short rightSensitivitySteps;
@property (nonatomic, readonly) short leftMixedVolumeSteps;
@property (nonatomic, readonly) short rightMixedVolumeSteps;
@property (nonatomic, readonly) _Bool supportsBinauralStreaming;
@property (nonatomic, readonly) _Bool supportsCombinedPresets;
@property (nonatomic, readonly) _Bool supportsCombinedVolumes;
@property (copy, nonatomic, readonly) NSArray *rightPrograms;
@property (copy, nonatomic, readonly) NSArray *leftPrograms;
@property (retain, nonatomic, readonly) AXHearingAidMode *leftSelectedProgram;
@property (retain, nonatomic, readonly) AXHearingAidMode *rightSelectedProgram;
@property (retain, nonatomic, readonly) AXHearingAidMode *leftSelectedStreamingProgram;
@property (retain, nonatomic, readonly) AXHearingAidMode *rightSelectedStreamingProgram;
@property (nonatomic, readonly) int availableInputEars;
@property (retain, nonatomic, readonly) NSString *deviceUUID;

- (unsigned short)deviceType;
- (unsigned short)connect;
- (unsigned short)valueForProperty: /* Error: Ran out of types for this method. */;
- (unsigned short)setValue:forProperty: /* Error: Ran out of types for this method. */;
- (unsigned short)isConnected;
- (unsigned short)leftAvailable;
- (unsigned short)rightAvailable;
- (unsigned short)programs;
- (unsigned short)selectProgram:forEar: /* Error: Ran out of types for this method. */;
- (unsigned short)hasConnection;
- (unsigned short)didLoadBasicProperties;
- (unsigned short)didLoadRequiredProperties;
- (unsigned short)containsPeripheralWithUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)disconnectAndUnpair: /* Error: Ran out of types for this method. */;
- (unsigned short)loadRequiredProperties;
- (unsigned short)initWithPersistentRepresentation: /* Error: Ran out of types for this method. */;
- (unsigned short)selectedPrograms;
- (unsigned short)selectedProgramIndexes;

@end
