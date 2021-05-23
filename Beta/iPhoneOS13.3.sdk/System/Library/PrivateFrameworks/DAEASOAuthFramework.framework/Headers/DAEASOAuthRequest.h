/*
 Image: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
 */

#import <Foundation/NSObject.h>

@interface DAEASOAuthRequest : NSObject

+ (id)requestForURL:(id)arg1;
+ (_Bool)urlPageWillContainAuthorizationCode:(id)arg1;
+ (id)authCodeFromURLRequest:(id)arg1;
+ (id)urlForOAuthURI:(id)arg1 clientID:(id)arg2 redirectURI:(id)arg3 scope:(id)arg4 username:(id)arg5 resource:(id)arg6;

@end
