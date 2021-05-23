/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAResponse.h>

@class NSArray, NSNumber;

@interface AATrustedDeviceListResponse : AAResponse

{
    NSArray *_devices;
    NSNumber *_defaultNumberOfDevicesToShow;
}

@property (nonatomic, readonly) NSArray *devices;
@property (nonatomic, readonly) NSNumber *defaultNumberOfDevicesToShow;

- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
