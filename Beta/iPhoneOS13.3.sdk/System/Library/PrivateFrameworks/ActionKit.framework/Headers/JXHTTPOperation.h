/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/JXURLConnectionOperation.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSObject, NSString, NSURL, NSURLAuthenticationChallenge, NSURLCredential;

@protocol JXHTTPOperationDelegate, JXHTTPRequestBody, OS_dispatch_queue;

@interface JXHTTPOperation : JXURLConnectionOperation

{
    _Bool _useCredentialStorage;
    _Bool _trustAllHosts;
    _Bool _updatesNetworkActivityIndicator;
    _Bool _performsBlocksOnMainQueue;
    NSObject<JXHTTPOperationDelegate> *_delegate;
    NSObject<JXHTTPRequestBody> *_requestBody;
    NSString *_uniqueString;
    NSString *_responseDataFilePath;
    id _userObject;
    NSURLAuthenticationChallenge *_authenticationChallenge;
    NSURLCredential *_credential;
    NSArray *_trustedHosts;
    NSString *_username;
    NSString *_password;
    NSNumber *_downloadProgress;
    NSNumber *_uploadProgress;
    NSDate *_startDate;
    NSDate *_finishDate;
    CDUnknownBlockType _willStartBlock;
    CDUnknownBlockType _willNeedNewBodyStreamBlock;
    CDUnknownBlockType _willSendRequestForAuthenticationChallengeBlock;
    CDUnknownBlockType _didStartBlock;
    CDUnknownBlockType _didReceiveResponseBlock;
    CDUnknownBlockType _didReceiveDataBlock;
    CDUnknownBlockType _didSendDataBlock;
    CDUnknownBlockType _didFinishLoadingBlock;
    CDUnknownBlockType _didFailBlock;
    CDUnknownBlockType _willCacheResponseBlock;
    CDUnknownBlockType _willSendRequestRedirectBlock;
    NSObject<OS_dispatch_queue> *_blockQueue;
}

@property (nonatomic) unsigned long long requestCachePolicy;
@property (nonatomic) _Bool requestShouldUsePipelining;
@property (retain, nonatomic) NSURL *requestMainDocumentURL;
@property (nonatomic) double requestTimeoutInterval;
@property (nonatomic) unsigned long long requestNetworkServiceType;
@property (retain, nonatomic) NSURL *requestURL;
@property (retain, nonatomic) NSDictionary *requestHeaders;
@property (retain, nonatomic) NSString *requestMethod;
@property (nonatomic) _Bool requestShouldHandleCookies;
@property (retain) NSURLAuthenticationChallenge *authenticationChallenge;
@property (retain) NSNumber *downloadProgress;
@property (retain) NSNumber *uploadProgress;
@property (retain) NSString *uniqueString;
@property (retain) NSDate *startDate;
@property (retain) NSDate *finishDate;
@property (retain) NSObject<OS_dispatch_queue> *blockQueue;
@property (weak) NSObject<JXHTTPOperationDelegate> *delegate;
@property (retain) NSObject<JXHTTPRequestBody> *requestBody;
@property (copy, nonatomic) NSString *responseDataFilePath;
@property (retain) id userObject;
@property (retain) NSURLCredential *credential;
@property _Bool useCredentialStorage;
@property _Bool trustAllHosts;
@property (copy) NSArray *trustedHosts;
@property (copy) NSString *username;
@property (copy) NSString *password;
@property _Bool updatesNetworkActivityIndicator;
@property (readonly) double elapsedSeconds;
@property _Bool performsBlocksOnMainQueue;
@property (copy) CDUnknownBlockType willStartBlock;
@property (copy) CDUnknownBlockType willNeedNewBodyStreamBlock;
@property (copy) CDUnknownBlockType willSendRequestForAuthenticationChallengeBlock;
@property (copy) CDUnknownBlockType didStartBlock;
@property (copy) CDUnknownBlockType didReceiveResponseBlock;
@property (copy) CDUnknownBlockType didReceiveDataBlock;
@property (copy) CDUnknownBlockType didSendDataBlock;
@property (copy) CDUnknownBlockType didFinishLoadingBlock;
@property (copy) CDUnknownBlockType didFailBlock;
@property (copy) CDUnknownBlockType willCacheResponseBlock;
@property (copy) CDUnknownBlockType willSendRequestRedirectBlock;

+ (id)withURLString:(id)arg1;
+ (id)withURLString:(id)arg1 queryParameters:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)main;
- (id)responseData;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (_Bool)connectionShouldUseCredentialStorage:(id)arg1;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (id)connection:(id)arg1 needNewBodyStream:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (long long)responseStatusCode;
- (id)responseHeaders;
- (id)responseJSON;
- (id)responseMIMEType;
- (void)willFinish;
- (id)responseString;
- (void)performDelegateMethod:(SEL)arg1;
- (CDUnknownBlockType)blockForSelector:(SEL)arg1;
- (void)addValue:(id)arg1 forRequestHeader:(id)arg2;
- (void)setValue:(id)arg1 forRequestHeader:(id)arg2;
- (id)responseStatusString;
- (long long)responseExpectedContentLength;
- (id)responseExpectedFileName;
- (id)responseTextEncodingName;
- (id)responseURL;
- (void)finalizeRequestBody;

@end
