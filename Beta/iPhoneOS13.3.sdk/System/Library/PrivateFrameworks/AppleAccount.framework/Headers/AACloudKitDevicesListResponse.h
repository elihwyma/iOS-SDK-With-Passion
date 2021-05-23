/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAResponse.h>

@class NSArray;

@interface AACloudKitDevicesListResponse : AAResponse

{
    NSArray *_incompatibleDevices;
    NSArray *_needUpgradeDevices;
    NSArray *_incompatibleDeviceNames;
    NSArray *_needUpgradeDeviceNames;
}

@property (nonatomic, readonly) NSArray *incompatibleDevices;
@property (nonatomic, readonly) NSArray *needUpgradeDevices;
@property (nonatomic, readonly) NSArray *incompatibleDeviceNames;
@property (nonatomic, readonly) NSArray *needUpgradeDeviceNames;

- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
