/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEFlowMetaData, NSData;

@protocol OS_dispatch_queue;

@interface NEAppProxyFlow : NSObject

{
    NEFlowMetaData *_metaData;
    struct _NEFlow *_flow;
    NSObject<OS_dispatch_queue> *_queue;
}

@property struct _NEFlow *flow;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSData *applicationData;
@property (readonly) NEFlowMetaData *metaData;

+ (id)flowErrorForVPNFlowError:(long long)arg1;
+ (struct __CFError *)copyVPNFlowErrorFromFlowError:(id)arg1;
+ (id)copyRemoteEndpointFromFlow:(struct _NEFlow *)arg1;

- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (id)initWithNEFlow:(struct _NEFlow *)arg1 queue:(id)arg2;
- (void)clearEventHandlers;
- (void)openWithLocalEndpoint:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)closeReadWithError:(id)arg1;
- (void)closeWriteWithError:(id)arg1;

@end
