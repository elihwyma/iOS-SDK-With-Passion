/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <NetworkServiceProxy/NPTunnelFlow.h>

@class NSMutableData, NSNumber, NSURL;

@interface NPTunnelFlowHTTP : NPTunnelFlow

{
    _Bool _receivedHeaders;
    _Bool _responseSuccess;
    NSMutableData *_responseData;
    NSURL *_url;
    CDUnknownBlockType _postCompletionHandler;
    NSNumber *_responseContentLength;
}

@property (copy) CDUnknownBlockType postCompletionHandler;
@property _Bool receivedHeaders;
@property (retain) NSNumber *responseContentLength;
@property _Bool responseSuccess;
@property (retain) NSMutableData *responseData;
@property (retain) NSURL *url;

- (void)sendDataToClient:(id)arg1 fromTunnel:(_Bool)arg2;
- (id)initWithTunnel:(id)arg1 URL:(id)arg2 extraFlowProperties:(id)arg3;
- (void)postData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)closeClientFlowWithError:(int)arg1;
- (_Bool)isClientFlowClosed;

@end
