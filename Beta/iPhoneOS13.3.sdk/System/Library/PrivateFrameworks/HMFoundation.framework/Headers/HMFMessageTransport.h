/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@protocol HMFMessageTransportDelegate;

@interface HMFMessageTransport

{
    id <HMFMessageTransportDelegate> _delegate;
}

@property (weak) id <HMFMessageTransportDelegate> delegate;

- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
