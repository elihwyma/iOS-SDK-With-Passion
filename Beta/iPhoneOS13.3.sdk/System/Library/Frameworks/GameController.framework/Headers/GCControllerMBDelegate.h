/*
 Image: /System/Library/Frameworks/GameController.framework/GameController
 */

#import <Foundation/NSObject.h>

@class NSTimer;

@interface GCControllerMBDelegate : NSObject

{
    struct BTSessionImpl *_session;
    struct BTPairingAgentImpl *_pairingAgent;
    struct BTDiscoveryAgentImpl *_discoveryAgent;
    NSTimer *_timer;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;

- (void)dealloc;
- (void)stopScan;
- (void)startScan;
- (void)fireCompletionHandler;
- (void)scanTimeout:(id)arg1;

@end
