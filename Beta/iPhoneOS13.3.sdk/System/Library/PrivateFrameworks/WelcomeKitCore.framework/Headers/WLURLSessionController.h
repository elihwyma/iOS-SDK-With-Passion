/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSString, NSURLSession, WLDeviceAuthentication;

@interface WLURLSessionController : NSObject

{
    WLDeviceAuthentication *_auth;
    NSOperationQueue *_delegateOperationQueue;
    NSURLSession *_urlSession;
}

@property (nonatomic, readonly) NSURLSession *urlSession;
@property (nonatomic, readonly) _Bool isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithAuthentication:(id)arg1;

@end
