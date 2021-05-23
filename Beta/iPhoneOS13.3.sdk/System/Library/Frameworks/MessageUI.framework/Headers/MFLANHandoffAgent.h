/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class MFLANHandoffContext;

@interface MFLANHandoffAgent : NSObject

{
    _Bool _serverRunning;
    struct __CFSocket *_socket;
    struct __CFRunLoopSource *_serverRunLoopSource;
    CDUnknownBlockType _connectCallbackBlock;
    MFLANHandoffContext *_handoffContext;
}

@property (nonatomic, readonly) _Bool serverRunning;
@property (nonatomic, readonly) MFLANHandoffContext *handoffContext;

- (id)init;
- (void)dealloc;
- (void)stopServer;
- (void)_cleanupRunLoopSource;
- (void)_cleanupSocket;
- (id)_getDeviceHostname;
- (void)_socketListenerRunLoop;
- (id)startServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)connectToServerWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
