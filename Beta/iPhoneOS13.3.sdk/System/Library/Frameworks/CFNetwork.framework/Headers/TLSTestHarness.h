/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSMutableDictionary, NSString, NSURLCredential, NSURLSession, NSURLSessionConfiguration;

@interface TLSTestHarness : NSObject <Swift>

{
    NSURLSessionConfiguration *_sessionConfig;
    NSMutableDictionary *_socketStreamProperties;
    NSURLSession *_session;
    NSMutableDictionary *_tasks;
    shared_ptr_a7890e8d _server;
    _Bool _enableTLSTrustChecks;
    _Bool _enableTLSClientCert;
    _Bool _enableTLSPSK;
    shared_ptr_3ed6bb45 _receivedServerTrust;
    _Bool _clientCertificateRequested;
    NSURLCredential *_clientCertificateSent;
}

@property (retain) NSURLSessionConfiguration *sessionConfig;
@property (retain) NSMutableDictionary *socketStreamProperties;
@property (retain) NSURLSession *session;
@property (retain) NSMutableDictionary *tasks;
@property shared_ptr_a7890e8d server;
@property _Bool enableTLSTrustChecks;
@property _Bool enableTLSClientCert;
@property _Bool enableTLSPSK;
@property shared_ptr_3ed6bb45 receivedServerTrust;
@property _Bool clientCertificateRequested;
@property (retain) NSURLCredential *clientCertificateSent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithServer:(shared_ptr_a7890e8d)arg1;
- (id)fetchRequest:(id)arg1;
- (void)_createSession;

@end
