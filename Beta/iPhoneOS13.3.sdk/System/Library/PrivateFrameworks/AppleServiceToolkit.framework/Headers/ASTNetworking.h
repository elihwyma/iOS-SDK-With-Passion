/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <Foundation/NSObject.h>

#import <AppleServiceToolkit/Swift-Protocol.h>

@class NSMutableDictionary, NSString, NSURLSession;

@interface ASTNetworking : NSObject <Swift>

{
    NSURLSession *_session;
    NSMutableDictionary *_networkStorage;
}

@property (retain, nonatomic) NSURLSession *session;
@property (retain) NSMutableDictionary *networkStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)addConnection:(id)arg1;
- (id)_sessionConfigurationWithSOCKSProxyServer:(id)arg1 port:(id)arg2;
- (id)initWithSOCKSProxyServer:(id)arg1 port:(id)arg2;
- (int)_requestTimeInterval;
- (id)_taskWithConnection:(id)arg1 error:(id *)arg2;
- (void)updateConnectionState:(id)arg1 newState:(long long)arg2;
- (int)networkDisconnectRetryCount;
- (_Bool)_verifyResultOfTask:(id)arg1 connection:(id)arg2;
- (_Bool)_isValidEasyRider;
- (_Bool)_didRefetchProxyServer;
- (void)_resetSessionToNewProxyServer;
- (id)_downloadTaskWithDownloadConnection:(id)arg1 error:(id *)arg2;
- (_Bool)_verifyMD5ForFileHandle:(id)arg1 task:(id)arg2;
- (void)cancelConnectionsOfClass:(Class)arg1;

@end
