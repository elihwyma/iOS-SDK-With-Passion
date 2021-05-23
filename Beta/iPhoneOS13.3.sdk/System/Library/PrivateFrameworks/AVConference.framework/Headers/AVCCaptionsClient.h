/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVConferenceXPCClient;

@protocol AVCCaptionsClientDelegate, OS_dispatch_queue;

@interface AVCCaptionsClient : NSObject

{
    long long _streamToken;
    id _delegate;
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly) id <AVCCaptionsClientDelegate> delegate;
@property (readonly) _Bool captionsSupported;
@property (readonly) _Bool captionsEnabled;
@property (readonly) long long streamToken;

- (void)dealloc;
- (void)disconnect;
- (_Bool)connect;
- (void)registerBlocksForNotifications;
- (void)deregisterBlocksForNotifications;
- (id)initWithDelegate:(id)arg1 streamToken:(long long)arg2;
- (void)enableCaptions:(_Bool)arg1;
- (void)configureCaptions:(id)arg1;

@end
