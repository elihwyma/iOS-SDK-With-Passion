/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSMutableData, NSOperationQueue, NSString, NSURLConnection, NSURLResponse;

@interface WBSAsynchronousRequestHelper : NSObject

{
    NSOperationQueue *_queue;
    CDUnknownBlockType _handler;
    NSURLConnection *_connection;
    NSURLResponse *_response;
    NSMutableData *_data;
    id _lifetimeExtender;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)sendRequest;
- (id)initWithRequest:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
