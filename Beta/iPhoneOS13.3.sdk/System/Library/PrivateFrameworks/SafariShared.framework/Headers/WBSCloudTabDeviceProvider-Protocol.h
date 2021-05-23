/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/Swift-Protocol.h>

@class NSArray, NSDate;

@protocol WBSCloudTabDeviceProvider <Swift>

@property (copy, nonatomic, readonly) NSArray *syncedCloudTabDevices;
@property (copy, nonatomic, readonly) NSDate *dateOfLastCloudTabDevicesUpdate;

- (unsigned short)synchronizeCloudTabDevicesWithCompletionHandler: /* Error: Ran out of types for this method. */;

@end
