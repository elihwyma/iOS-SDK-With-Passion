/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSDownloadSession.h>

@class NSURLAuthenticationChallenge;

@interface SSDownloadAuthenticationSession : SSDownloadSession

@property (readonly) NSURLAuthenticationChallenge *authenticationChallenge;

- (void)_finishWithType:(int)arg1 credential:(id)arg2;

@end
