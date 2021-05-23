/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <AppleAccount/AATrustedDevice.h>

@class NSString;

@interface AATrustedDevice (AppleAccountUI)

@property (copy, nonatomic, readonly) NSString *aaui_localizedDeviceLocatorLabel;

- (id)_deviceLocatorKey;

@end
