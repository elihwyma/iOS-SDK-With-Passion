/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVConferenceXPCClient;

@protocol AVCVirtualTTYDeviceDelegate;

@interface AVCVirtualTTYDevice : NSObject

{
    AVConferenceXPCClient *_connection;
    id _delegate;
    _Bool _isStarted;
}

@property (nonatomic) id <AVCVirtualTTYDeviceDelegate> delegate;

- (void)dealloc;
- (void)stop;
- (void)start;
- (id)initWithStreamToken:(long long)arg1 error:(id *)arg2;
- (id)initWithMode:(long long)arg1 error:(id *)arg2;
- (_Bool)sendText:(struct NSString *)arg1;
- (id)sendCharacter:(unsigned short)arg1;
- (void)registerBlocksForDelegateNotifications;
- (void)deregisterBlocksForDelegateNotifications;
- (void)terminateSession;
- (id)initWithMode:(long long)arg1 error:(id *)arg2 streamToken:(long long)arg3;

@end
