/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate;

@interface WBSDeviceEligibilityInformation : NSObject

{
    _Bool _hasWindowsDevices;
    NSDate *_dateOfLatestDAVAccessByIneligibleWindowsDevice;
    NSArray *_devices;
}

@property (nonatomic, readonly) NSDate *dateOfLatestDAVAccessByIneligibleWindowsDevice;
@property (nonatomic, readonly) NSArray *devices;
@property (nonatomic, readonly) _Bool hasWindowsDevices;

- (id)description;
- (id)initWithDateOfLatestDAVAccessByIneligibleWindowsDevice:(id)arg1 devices:(id)arg2 hasWindowsDevices:(_Bool)arg3;
- (id)initWithDeviceListResponseDictionary:(id)arg1;
- (CDStruct_4bcfbbae)potentiallyEligibleDevicesWithEligibleOperatingSystemVersionRanges:(id)arg1;

@end
