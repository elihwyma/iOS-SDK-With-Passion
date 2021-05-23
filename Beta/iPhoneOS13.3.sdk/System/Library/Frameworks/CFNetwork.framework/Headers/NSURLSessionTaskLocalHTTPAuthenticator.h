/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/NSURLSessionTaskHTTPAuthenticator.h>

@protocol NSURLSessionAppleIDContext;

@interface NSURLSessionTaskLocalHTTPAuthenticator : NSURLSessionTaskHTTPAuthenticator

{
    id <NSURLSessionAppleIDContext> _externalAuthenticator;
}

@property (copy) id <NSURLSessionAppleIDContext> externalAuthenticator;

- (void)dealloc;
- (void)getAuthenticationHeadersForTask:(id)arg1 task:(id)arg2 response:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithSessionAuthenticator:(id)arg1 statusCodes:(id)arg2;

@end
