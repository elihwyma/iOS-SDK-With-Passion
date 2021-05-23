/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <WelcomeKitCore/WLSocketHandler.h>

@class NSArray, NSObject, NSString, WLSourceDevice;

@protocol OS_dispatch_queue, OS_dispatch_source, WLDeviceDiscoverySocketHandlerDelegate;

@interface WLDeviceDiscoverySocketHandler : WLSocketHandler

{
    NSString *_srpPassword;
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_queue> *_writeQueue;
    WLSourceDevice *_sourceDevice;
    NSArray *_priorConnectionFailureReasons;
    int _sockfd;
    id <WLDeviceDiscoverySocketHandlerDelegate> _delegate;
}

@property (nonatomic, readonly) int sockfd;
@property (weak, nonatomic) id <WLDeviceDiscoverySocketHandlerDelegate> delegate;

- (void)close;
- (void)resume;
- (void)suspend;
- (void)invalidateWithError:(id)arg1;
- (void)sendData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_commandStringWithData:(id)arg1;
- (void)_performSRPAuthenticationAndHandshake;
- (_Bool)_didReceiveHandshakeData:(id)arg1;
- (id)_handshakeResponseData;
- (id)initWithSocket:(int)arg1 srpPassword:(id)arg2 delegate:(id)arg3;
- (id)_okResponseData;
- (id)_handshakeCommandData;

@end
