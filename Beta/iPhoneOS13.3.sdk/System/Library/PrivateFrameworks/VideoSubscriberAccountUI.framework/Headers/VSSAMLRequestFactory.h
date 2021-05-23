/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VSSAMLRequestFactory : NSObject

+ (id)authNRequestWithResponse:(id)arg1 forced:(_Bool)arg2 error:(id *)arg3;
+ (id)attributeQueryWithAttributeNames:(id)arg1 channelID:(id)arg2 authNResponse:(id)arg3 error:(id *)arg4;
+ (id)logoutRequestWithError:(id *)arg1;

@end
