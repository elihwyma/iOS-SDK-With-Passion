/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVConferenceXPCClient, CALayer, NSDictionary, NSString, VideoAttributes;

@protocol AVCRemoteVideoClientDelegate, OS_dispatch_queue;

@interface AVCRemoteVideoClient : NSObject

{
    id _delegate;
    long long _streamToken;
    CALayer *_primaryCameraLayer;
    CALayer *_secondaryCameraLayer;
    CALayer *_screenLayer;
    CALayer *_primaryCameraSubLayer;
    CALayer *_secondaryCameraSubLayer;
    CALayer *_screenSubLayer;
    AVConferenceXPCClient *_connection;
    int _activeVideoMode;
    _Bool _hasReceivedFirstFrame;
    _Bool _isVideoPaused;
    _Bool _isMediaStalled;
    _Bool _isVideoDegraded;
    _Bool _isVideoSuspended;
    _Bool _hasReceivedLastFrame;
    _Bool _shouldDisplayVideoInfoLayer;
    VideoAttributes *_remoteScreenAttributes;
    VideoAttributes *_remoteVideoAttributes;
    NSDictionary *_slotsForModes;
    NSString *_connectionTypeString;
    NSObject<OS_dispatch_queue> *_avcRemoteVideoQueue;
}

@property (retain, nonatomic) VideoAttributes *remoteScreenAttributes;
@property (retain, nonatomic) VideoAttributes *remoteVideoAttributes;
@property (nonatomic) _Bool hasReceivedFirstFrame;
@property (nonatomic) _Bool isVideoPaused;
@property (nonatomic) _Bool isMediaStalled;
@property (nonatomic) _Bool isVideoDegraded;
@property (nonatomic) _Bool isVideoSuspended;
@property (nonatomic) _Bool hasReceivedLastFrame;
@property (nonatomic) _Bool shouldDisplayVideoInfoLayer;
@property (copy, nonatomic) NSString *connectionTypeString;
@property (nonatomic, readonly) id <AVCRemoteVideoClientDelegate> delegate;
@property (nonatomic, readonly) long long streamToken;

- (void)dealloc;
- (void)setVideoLayer:(id)arg1 forMode:(int)arg2;
- (id)initWithStreamToken:(long long)arg1 delegate:(id)arg2;
- (void)registerBlocksForNotifications;
- (void)deregisterBlocksForNotifications;
- (void)terminateConnection;
- (void)cleanupSubLayerForMode:(int)arg1;
- (void)insertSubLayerInLayer:(id)arg1 videoMode:(int)arg2 videoSlot:(id)arg3;
- (void)setActiveVideoLayerForMode:(int)arg1;
- (void)insertInfoSubLayerIntoLayer:(id)arg1 videoMode:(int)arg2;
- (id *)subLayerRefForMode:(int)arg1;
- (void)setActiveVideoModeFromRemoteVideoAttribute:(id)arg1;
- (void)updateConnectionInfoWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2;
- (id)subLayerForMode:(int)arg1;
- (void)drawText:(id)arg1 inSubLayer:(id)arg2;
- (id)slotForMode:(int)arg1;

@end
