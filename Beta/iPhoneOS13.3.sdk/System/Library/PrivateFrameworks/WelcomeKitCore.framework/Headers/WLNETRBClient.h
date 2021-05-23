/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@interface WLNETRBClient : NSObject

{
    struct NETRBClient *_netrbClientRef;
    CDUnknownBlockType _dhcpStartCompletionBlock;
    CDUnknownBlockType _dhcpStopCompletionBlock;
}

- (id)init;
- (void)startDHCPWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopDHCPWithCompletion:(CDUnknownBlockType)arg1;
- (struct NETRBClient *)_netrbClient;
- (_Bool)_startDHCPWithInterface:(id)arg1;
- (_Bool)_stopDHCP;
- (void)_didStartDHCPWithSuccess:(_Bool)arg1;
- (void)_didStopDHCPWithSuccess:(_Bool)arg1;
- (_Bool)_completionsAreNil;

@end
