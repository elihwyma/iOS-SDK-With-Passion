/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Catalyst/CATOperation.h>

@class CATMessage, CATRemoteTransport;

__attribute__((visibility("hidden")))
@interface _CATRemoteTransportSendMessageOperation : CATOperation

{
    CATRemoteTransport *_transport;
    CATMessage *_message;
}

@property (weak, nonatomic) CATRemoteTransport *transport;
@property (retain, nonatomic) CATMessage *message;

- (void)main;
- (_Bool)isAsynchronous;
- (void)didFailWithError:(id)arg1;
- (void)didSendData;
- (void)didEncodeData:(id)arg1;

@end
