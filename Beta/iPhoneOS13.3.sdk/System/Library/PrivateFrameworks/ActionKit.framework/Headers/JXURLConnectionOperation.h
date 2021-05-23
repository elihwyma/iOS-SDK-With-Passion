/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/JXOperation.h>

#import <ActionKit/Swift-Protocol.h>

@class NSError, NSMutableURLRequest, NSOutputStream, NSString, NSURLConnection, NSURLResponse;

@interface JXURLConnectionOperation : JXOperation <Swift>

{
    NSMutableURLRequest *_request;
    NSURLResponse *_response;
    NSError *_error;
    NSOutputStream *_outputStream;
    long long _bytesDownloaded;
    long long _bytesUploaded;
    NSURLConnection *_connection;
}

@property (retain) NSURLConnection *connection;
@property (retain) NSMutableURLRequest *request;
@property (retain) NSURLResponse *response;
@property (retain) NSError *error;
@property long long bytesDownloaded;
@property long long bytesUploaded;
@property (retain) NSOutputStream *outputStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)networkThread;
+ (void)runLoopForever;

- (id)init;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (void)main;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)startConnection;
- (void)stopConnection;
- (void)willFinish;

@end
