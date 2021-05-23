/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VSApplicationControllerResponseHandler : NSObject

- (void)handleJavascriptResponse:(id)arg1 requestType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_accountAuthenticationWithJavascriptResponse:(id)arg1 error:(id *)arg2;
- (void)_handleJavascriptResponseInternal:(id)arg1 requestType:(long long)arg2 accountAuthentication:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_parseSAMLResponseString:(id)arg1 error:(id *)arg2;
- (void)_setSubscriptionDataWithResponse:(id)arg1 forJavascriptResponse:(id)arg2;

@end
