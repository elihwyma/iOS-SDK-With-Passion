/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDServerConfiguration;

__attribute__((visibility("hidden")))
@interface CKDGlobalConfigurationURLRequest : CKDURLRequest

{
    CKDServerConfiguration *_configuration;
}

@property (retain, nonatomic) CKDServerConfiguration *configuration;

- (id)url;
- (long long)partitionType;
- (id)httpMethod;
- (id)additionalHeaderValues;
- (void)requestDidParsePlistObject:(id)arg1;
- (long long)serverType;
- (_Bool)allowsAnonymousAccount;
- (_Bool)requiresConfiguration;
- (_Bool)requiresDeviceID;
- (_Bool)hasRequestBody;

@end
