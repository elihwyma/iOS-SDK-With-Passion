/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMediaControlsConfiguration, NSString, NSXPCConnection, NSXPCListener;

@interface MPMediaControls : NSObject

{
    _Bool _shouldObserveRoutingContextUIDChanges;
    unsigned long long _dismissalReason;
    CDUnknownBlockType _dismissHandler;
    NSXPCListener *_listener;
    NSXPCConnection *_connection;
    MPMediaControlsConfiguration *_configuration;
    CDUnknownBlockType _dismissHandlerWithReason;
}

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic, readonly) MPMediaControlsConfiguration *configuration;
@property (copy, nonatomic) CDUnknownBlockType dismissHandlerWithReason;
@property (copy, nonatomic) CDUnknownBlockType dismissHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_reset;
- (id)initWithConfiguration:(id)arg1;
- (void)dismiss;
- (void)present;
- (void)openConnection;
- (void)startPrewarming;
- (void)stopPrewarming;
- (void)setDismissalReason:(unsigned long long)arg1;
- (id)initWithRouteSharingPolicy:(unsigned long long)arg1 routingContextUID:(id)arg2;
- (id)initWithConfiguration:(id)arg1 shouldObserveRoutingContextUIDChanges:(_Bool)arg2;
- (void)_updateAudioSessionRoutingContext;
- (void)_audioSessionRoutingContextDidChangeNotification;
- (long long)_mediaControlsStyleForRouteSharingPolicy:(unsigned long long)arg1;
- (unsigned long long)_MPRouteSharingPolicyToAVRouteSharingPolicy:(unsigned long long)arg1;
- (id)_dismissalReasonString:(unsigned long long)arg1;
- (_Bool)_shouldUpdateStyleForCurrentConfigurationStyle:(long long)arg1;

@end
