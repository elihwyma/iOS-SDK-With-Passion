/*
 Image: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
 */

#import <WelcomeKit/WLDaemonConnection.h>

@protocol WLSourceDevicesDelegate;

@interface WLSourceDevicesController : WLDaemonConnection

{
    id <WLSourceDevicesDelegate> _delegate;
}

@property (weak, nonatomic) id <WLSourceDevicesDelegate> delegate;

- (id)init;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)startWiFiAndDeviceDiscoveryWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopDeviceDiscoveryWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopWiFiAndDeviceDiscoveryWithCompletion:(CDUnknownBlockType)arg1;
- (void)attemptDirectConnectionToAddress:(id)arg1;

@end
