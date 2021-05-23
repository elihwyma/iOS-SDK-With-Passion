/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSDictionary, NSOperationQueue, NSString, NSURL, NSURLConnection, NSURLRequest;

@interface NSURLConnectionInternal : NSObject

{
    NSURLConnection *_connection;
    NSOperationQueue *_delegateQueue;
    NSURL *_url;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    id _delegate;
    NSDictionary *_connectionProperties;
    _Bool _connectionActive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_invalidate;
- (id)originalRequest;
- (id)currentRequest;
- (id)_connectionProperties;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)_setDelegateQueue:(id)arg1;
- (id)initWithInfo:(const struct InternalInit *)arg1;
- (id)_timingData;
- (void)invokeForDelegate:(CDUnknownBlockType)arg1;
- (void)_withActiveConnectionAndDelegate:(CDUnknownBlockType)arg1;
- (_Bool)isConnectionActive;
- (void)setConnectionActive:(_Bool)arg1;
- (void)_withConnectionDisconnectFromConnection;
- (void)_withConnectionAndDelegate:(CDUnknownBlockType)arg1;
- (void)_withConnectionAndDelegate:(CDUnknownBlockType)arg1 onlyActive:(_Bool)arg2;

@end
