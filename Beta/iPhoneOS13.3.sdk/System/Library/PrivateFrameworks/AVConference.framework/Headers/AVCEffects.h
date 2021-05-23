/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVConferenceXPCClient;

@protocol AVCEffectsDelegate, OS_dispatch_queue;

@interface AVCEffects : NSObject

{
    id _delegate;
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_avConferenceEffectsQueue;
    int _mode;
    _Bool _isEffectsApplied;
    _Bool _isFaceMeshTrackingEnabled;
    int _effectType;
}

@property (nonatomic) id <AVCEffectsDelegate> delegate;
@property (nonatomic) int mode;
@property (nonatomic) int effectType;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)registerBlocksForNotifications;
- (void)deregisterBlocksForNotifications;
- (void)avcVideoFrameDidRelease:(id)arg1;
- (void)encodeProcessedVideoFrame:(id)arg1;

@end
