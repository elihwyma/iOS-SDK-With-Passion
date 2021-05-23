/*
 Image: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
 */

@class NSString, RTIDataPayload;

@protocol RTIInputSystemPayloadDelegate;

@interface RTIInputSystemSourceSession

{
    id <RTIInputSystemPayloadDelegate> _forwardingPayloadDelegate;
    id <RTIInputSystemPayloadDelegate> _payloadDelegate;
}

@property (weak, nonatomic) id <RTIInputSystemPayloadDelegate> payloadDelegate;
@property (weak, nonatomic) id <RTIInputSystemPayloadDelegate> forwardingPayloadDelegate;
@property (copy, nonatomic, readonly) RTIDataPayload *currentForwardingDataPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setSessionDelegate:(id)arg1;
- (void)flushOperations;
- (void)handleTextActionPayload:(id)arg1;
- (void)addSessionDelegate:(id)arg1;
- (void)handleForwardingResponseActionPayload:(id)arg1;

@end
