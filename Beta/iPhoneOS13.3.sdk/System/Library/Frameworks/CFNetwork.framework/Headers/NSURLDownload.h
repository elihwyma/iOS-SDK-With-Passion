/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSData, NSString, NSURLDownloadInternal, NSURLRequest;

@interface NSURLDownload : NSObject

{
    NSURLDownloadInternal *_internal;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSURLRequest *request;
@property (copy, readonly) NSData *resumeData;
@property _Bool deletesFileUponFailure;

+ (id)_downloadWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5;
+ (id)_downloadWithLoadingCFURLConnection:(struct _CFURLConnection *)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5;
+ (id)_downloadWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3;
+ (_Bool)canResumeDownloadDecodedWithEncodingMIMEType:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_delegate;
- (void)cancel;
- (id)url;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (void)_setDelegateQueue:(id)arg1;
- (void)cleanupChallenges;
- (id)_initWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5;
- (id)_initWithLoadingCFURLConnection:(struct _CFURLConnection *)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5;
- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3;
- (id)_initWithResumeInformation:(id)arg1 delegate:(id)arg2 path:(id)arg3;
- (id)initWithResumeData:(id)arg1 delegate:(id)arg2 path:(id)arg3;
- (id)_resumeInformation;
- (void)setDestination:(id)arg1 allowOverwrite:(_Bool)arg2;
- (id)_directoryPath;
- (void)_setDelegate:(id)arg1;
- (void)_setDirectoryPath:(id)arg1;
- (void)releaseDelegate;
- (_Bool)_downloadActive;
- (void)withDelegate:(CDUnknownBlockType)arg1;
- (void)sendDidStart:(struct _CFURLDownload *)arg1;
- (id)sendWillSendRequest:(id)arg1 redirectResponse:(id)arg2;
- (void)sendDidReceiveChallenge:(struct _CFURLAuthChallenge *)arg1;
- (void)sendDidReceiveResponse:(id)arg1;
- (void)sendWillResumeWithResponse:(id)arg1 startingByte:(unsigned long long)arg2;
- (void)sendDidReceiveData:(long long)arg1;
- (_Bool)sendShouldDecodeDataOfMIMEType:(struct __CFString *)arg1;
- (void)sendDecideDestinationWithSuggestedObjectName:(struct __CFString *)arg1;
- (void)sendDidCreateDestination:(struct __CFURL *)arg1;
- (void)sendDidFinish;
- (void)sendDidFail:(struct __CFError *)arg1;
- (_Bool)sendCanAuthenticateAgainstProtectionSpace:(struct _CFURLProtectionSpace *)arg1;

@end
