/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <HearingUtilities/AXHearingAidDevice.h>

@interface AXPSAPDevice : AXHearingAidDevice

+ (id)characteristicsUUIDs;

- (unsigned long long)deviceType;
- (id)serviceUUID;
- (unsigned long long)requiredProperties;
- (id)persistentRepresentation;

@end
