/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Catalyst/CATOperation.h>

@class CATMessage, CATXPCTransport;

__attribute__((visibility("hidden")))
@interface _CATXPCTransportSendMessageOperation : CATOperation

{
    CATXPCTransport *_transport;
    CATMessage *_message;
}

@property (weak, nonatomic) CATXPCTransport *transport;
@property (retain, nonatomic) CATMessage *message;

- (void)main;
- (_Bool)isAsynchronous;
- (void)didFailWithError:(id)arg1;
- (void)didProcessMessage;

@end
