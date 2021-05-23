/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAResponse.h>

@class NSArray;

@interface AADeviceListResponse : AAResponse

{
    NSArray *_devices;
}

@property (nonatomic, readonly) NSArray *devices;

- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
