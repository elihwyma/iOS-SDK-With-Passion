/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <NSObject.h>

@class NSDictionary;

@protocol OS_dispatch_queue;

@interface HUUtilities : NSObject

{
    NSDictionary *_pickableRoutes;
    int _wirelessSplitterNotifyToken;
    _Bool _wirelessSplitterEnabled;
    _Bool _takingConnection;
    NSObject<OS_dispatch_queue> *_routingQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *routingQueue;
@property (nonatomic) _Bool takingConnection;

+ (id)sharedUtilities;
+ (id)XDCObjectFromObject:(id)arg1;
+ (id)objectFromXDCObject:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)registerNotifications;
- (void)mediaServerDied;
- (void)clearAudioRoutes;
- (id)currentPickableAudioRoutes;
- (void)pauseNowPlaying:(_Bool)arg1 withQueue:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;
- (void)checkAudioPlayingWithQueue:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (_Bool)liveListenRouteSelected;
- (_Bool)hearingAidRouteAvailable;
- (_Bool)hearingAidStreamSelected;
- (void)updateWirelessSplitterState;
- (void)pickableAudioRoutesDidChange:(id)arg1;
- (_Bool)oldRoutes:(id)arg1 equalToNewRoutes:(id)arg2;

@end
