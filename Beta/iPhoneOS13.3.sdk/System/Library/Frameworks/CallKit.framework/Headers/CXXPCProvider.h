/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/CXProvider.h>

@class NSXPCConnection;

@interface CXXPCProvider : CXProvider

{
    int _notifyToken;
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) int notifyToken;

- (void)dealloc;
- (void)invalidate;
- (id)initWithConfiguration:(id)arg1;
- (id)hostProtocolDelegate;
- (_Bool)requiresProxyingAVAudioSessionState;

@end
