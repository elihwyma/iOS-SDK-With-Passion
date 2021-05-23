/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEAppProxyFlow.h>

@class NWEndpoint;

@interface NEAppProxyUDPFlow : NEAppProxyFlow

{
    NWEndpoint *_localEndpoint;
}

@property (readonly) NWEndpoint *localEndpoint;

- (id)description;
- (void)readDatagramsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithNEFlow:(struct _NEFlow *)arg1 queue:(id)arg2;
- (void)openWithLocalEndpoint:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)writeDatagrams:(id)arg1 sentByEndpoints:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
