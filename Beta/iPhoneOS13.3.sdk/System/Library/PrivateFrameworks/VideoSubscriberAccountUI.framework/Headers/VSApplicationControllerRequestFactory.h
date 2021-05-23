/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VSApplicationControllerRequestFactory : NSObject

+ (id)_authNRequestSAMLStringWithAuthenticationToken:(id)arg1 forced:(_Bool)arg2 error:(id *)arg3;
+ (id)_attributeQuerySAMLRequestStringWithAttributeNames:(id)arg1 channelID:(id)arg2 authenticationToken:(id)arg3 error:(id *)arg4;
+ (id)_logoutSAMLRequestStringWithError:(id *)arg1;

- (id)authenticationApplicationControllerRequestWithAuthenticationToken:(id)arg1 forcedAuthentication:(_Bool)arg2;
- (id)silentAuthenticationApplicationControllerRequestWithAuthenticationToken:(id)arg1 forcedAuthentication:(_Bool)arg2;
- (id)silentAuthenticationApplicationControllerRequest;
- (id)accountMetadataApplicationControllerRequestWithAccountMetadataRequest:(id)arg1 authenticationToken:(id)arg2;
- (id)logoutApplicationControllerRequestWithAuthenticationToken:(id)arg1;
- (id)STBOptOutApplicationControllerRequest;

@end
