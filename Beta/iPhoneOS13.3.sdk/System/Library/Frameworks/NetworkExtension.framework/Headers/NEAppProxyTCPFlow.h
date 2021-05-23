/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEAppProxyFlow.h>

@class NWEndpoint;

@interface NEAppProxyTCPFlow : NEAppProxyFlow

{
    NWEndpoint *_remoteEndpoint;
}

@property (readonly) NWEndpoint *remoteEndpoint;

- (id)description;
- (id)initWithNEFlow:(struct _NEFlow *)arg1 queue:(id)arg2;
- (void)readDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)writeData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
