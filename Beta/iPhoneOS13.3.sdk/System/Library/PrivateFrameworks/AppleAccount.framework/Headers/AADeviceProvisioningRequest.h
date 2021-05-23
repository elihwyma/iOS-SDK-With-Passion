/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AARequest.h>

@class NSData, NSString;

@interface AADeviceProvisioningRequest : AARequest

{
    NSString *_dsid;
    NSString *_url;
    NSData *_data;
}

- (id)urlRequest;
- (id)initWithDSID:(id)arg1 URLString:(id)arg2 requestData:(id)arg3;
- (id)urlString;

@end
