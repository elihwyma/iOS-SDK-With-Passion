/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AADeviceProvisioningSession : NSObject

{
    NSString *_dsid;
    unsigned long long _dsidNumber;
    struct OpaqueCFHTTPCookieStorage *_cookieStorageRef;
}

- (id)init;
- (id)initWithAccount:(id)arg1;
- (void)addProvisioningInfoToAARequest:(id)arg1;
- (id)initWithDSID:(id)arg1;
- (void)setCookieStorageRef:(struct OpaqueCFHTTPCookieStorage *)arg1;
- (int)provisionDeviceWithData:(id)arg1;
- (int)synchronizeProvisioningWithData:(id)arg1;
- (int)eraseProvisioning;
- (void)addProvisioningInfoToAARequest:(id)arg1 withFallback:(_Bool)arg2;
- (id)deviceProvisioningInfo;
- (void)addProvisioningInfoToURLRequest:(id)arg1 sendEmptyValues:(_Bool)arg2;

@end
