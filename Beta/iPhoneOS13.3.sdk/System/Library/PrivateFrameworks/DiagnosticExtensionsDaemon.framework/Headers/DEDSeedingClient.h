/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

#import <DiagnosticExtensionsDaemon/Swift-Protocol.h>

@class DEDBugSessionConfiguration, NSString, NSURLSession;

@protocol DEDSeedingClientDelegate, OS_os_log;

@interface DEDSeedingClient : NSObject <Swift>

{
    NSObject<OS_os_log> *_log;
    DEDBugSessionConfiguration *_config;
    id <DEDSeedingClientDelegate> _uploadDelegate;
    NSURLSession *_foregroundSession;
    NSString *_bugSessionIdentifier;
    NSURLSession *_backgroundSession;
}

@property (retain) NSObject<OS_os_log> *log;
@property (retain) DEDBugSessionConfiguration *config;
@property (weak) id <DEDSeedingClientDelegate> uploadDelegate;
@property (retain) NSURLSession *foregroundSession;
@property (retain) NSString *bugSessionIdentifier;
@property (retain) NSURLSession *backgroundSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cleanup;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (_Bool)isLoggedIn;
- (void)updatePromise:(id)arg1 withFilename:(id)arg2 size:(long long)arg3 status:(long long)arg4 success:(CDUnknownBlockType)arg5 error:(CDUnknownBlockType)arg6;
- (void)sendFile:(id)arg1 promise:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)initWithConfiguration:(id)arg1 sessionID:(id)arg2 delegate:(id)arg3;
- (void)makePromiseWithUUID:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)updatePromise:(id)arg1 withAttachmentGroup:(id)arg2 status:(long long)arg3 success:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)cancelPromise:(id)arg1 withSuccess:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (id)loginWithTokenURL;
- (void)postToURL:(id)arg1 parameters:(id)arg2 encoding:(unsigned long long)arg3 success:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (id)filerURL;
- (id)beginUploadWithRequest:(id)arg1 fromFileURL:(id)arg2;
- (void)getFilerTokenForPromise:(id)arg1 withSuccess:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)seedingLoginWithSuccess:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;
- (id)newFilerTokenURL;
- (id)HTTPErrorWithResponse:(id)arg1 withData:(id)arg2;
- (void)dataForURLRequest:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)jsonForURLRequest:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)performHTTPMethod:(id)arg1 toURL:(id)arg2 parameters:(id)arg3 encoding:(unsigned long long)arg4 success:(CDUnknownBlockType)arg5 error:(CDUnknownBlockType)arg6;
- (id)bodyDataForParameters:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;
- (id)contentTypeForParameterEncoding:(unsigned long long)arg1;
- (id)promiseConfiguration;
- (id)newFilePromiseURL;
- (id)filePromiseURLForPromise:(id)arg1;
- (void)jsonForURL:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)putToURL:(id)arg1 parameters:(id)arg2 encoding:(unsigned long long)arg3 success:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (id)seedingURL;
- (id)_serverErrorFromTask:(id)arg1;
- (id)_formEncodedBodyForDictionary:(id)arg1;
- (id)_keyValuePairsForKey:(id)arg1 value:(id)arg2;
- (void)dataForURL:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)deleteResourceAtURL:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)getPromise:(id)arg1 withSuccess:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;

@end
