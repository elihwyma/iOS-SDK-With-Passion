/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSOperation.h>

#import <ActionKit/Swift-Protocol.h>

@class NSData, NSError, NSInputStream, NSOutputStream, NSRecursiveLock, NSSet, NSString, NSURLConnection, NSURLRequest, NSURLResponse;

@interface ENAFURLConnectionOperation : NSOperation <Swift>

{
    _Bool _cancelled;
    short _state;
    NSURLConnection *_connection;
    NSSet *_runLoopModes;
    NSURLRequest *_request;
    NSURLResponse *_response;
    NSError *_error;
    NSData *_responseData;
    NSString *_responseString;
    long long _totalBytesRead;
    NSOutputStream *_outputStream;
    CDUnknownBlockType _uploadProgress;
    CDUnknownBlockType _downloadProgress;
    CDUnknownBlockType _authenticationAgainstProtectionSpace;
    CDUnknownBlockType _authenticationChallenge;
    CDUnknownBlockType _cacheResponse;
    CDUnknownBlockType _redirectResponse;
    NSRecursiveLock *_lock;
}

@property (nonatomic) short state;
@property (nonatomic, getter=isCancelled) _Bool cancelled;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSURLConnection *connection;
@property (retain, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) NSURLResponse *response;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSData *responseData;
@property (copy, nonatomic) NSString *responseString;
@property (nonatomic) long long totalBytesRead;
@property (copy, nonatomic) CDUnknownBlockType uploadProgress;
@property (copy, nonatomic) CDUnknownBlockType downloadProgress;
@property (copy, nonatomic) CDUnknownBlockType authenticationAgainstProtectionSpace;
@property (copy, nonatomic) CDUnknownBlockType authenticationChallenge;
@property (copy, nonatomic) CDUnknownBlockType cacheResponse;
@property (copy, nonatomic) CDUnknownBlockType redirectResponse;
@property (retain, nonatomic) NSSet *runLoopModes;
@property (retain, nonatomic) NSInputStream *inputStream;
@property (retain, nonatomic) NSOutputStream *outputStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)networkRequestThread;
+ (void)networkRequestThreadEntryPoint:(id)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)cancel;
- (void)pause;
- (void)resume;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isReady;
- (_Bool)isConcurrent;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (void)finish;
- (_Bool)isPaused;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (void)setDownloadProgressBlock:(CDUnknownBlockType)arg1;
- (void)setUploadProgressBlock:(CDUnknownBlockType)arg1;
- (void)cancelConnection;
- (void)setAuthenticationAgainstProtectionSpaceBlock:(CDUnknownBlockType)arg1;
- (void)setAuthenticationChallengeBlock:(CDUnknownBlockType)arg1;
- (void)setCacheResponseBlock:(CDUnknownBlockType)arg1;
- (void)setRedirectResponseBlock:(CDUnknownBlockType)arg1;
- (void)operationDidStart;

@end
