/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

#import <Navigation/Swift-Protocol.h>

@class MNSettings, NSHashTable, NSMutableArray, NSString, NSXPCConnection;

@protocol MNNavigationServiceClientInterface, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MNNavigationServiceRemoteProxy : NSObject <Swift>

{
    _Bool _applicationActive;
    NSXPCConnection *_connection;
    MNSettings *_settings;
    NSHashTable *_clients;
    NSMutableArray *_interruptionDates;
    _Bool _isReconnecting;
    CDUnknownBlockType _predictionHandler;
    NSObject<OS_dispatch_queue> *_serialQueue;
    long long _sandboxHandle;
    id <MNNavigationServiceClientInterface> _delegate;
}

@property (weak, nonatomic) id <MNNavigationServiceClientInterface> delegate;
@property (nonatomic, readonly) unsigned long long interruptionCount;
@property (nonatomic, readonly) unsigned long long clientCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)_closeConnection;
- (void)setHeadingOrientation:(int)arg1;
- (void)openForClient:(id)arg1;
- (void)closeForClient:(id)arg1;
- (void)setGuidancePromptsEnabled:(_Bool)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setIsConnectedToCarplay:(_Bool)arg1;
- (id)_remoteObjectProxy;
- (void)_handleInterruption;
- (void)_openConnection;
- (void)stopNavigation;
- (void)navigationServiceProxy:(id)arg1 didUpdateNavigationDetails:(id)arg2;
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;
- (void)startNavigationWithDetails:(id)arg1 activeBlock:(CDUnknownBlockType)arg2;
- (void)startPredictingDestinationsWithHandler:(CDUnknownBlockType)arg1;
- (void)stopPredictingDestinations;
- (void)updateDestination:(id)arg1;
- (void)resumeOriginalDestination;
- (void)switchToRoute:(id)arg1;
- (void)setFullGuidanceMode:(_Bool)arg1;
- (void)changeSettings:(id)arg1;
- (void)repeatCurrentGuidanceWithReply:(CDUnknownBlockType)arg1;
- (void)repeatCurrentTrafficAlertWithReply:(CDUnknownBlockType)arg1;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)stopCurrentGuidancePrompt;
- (void)setHFPPreference:(_Bool)arg1 forSetting:(id)arg2;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2;
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;
- (void)acceptReroute:(_Bool)arg1 forTrafficIncidentAlert:(id)arg2;
- (void)setTraceIsPlaying:(_Bool)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTracePosition:(double)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)recordPedestrianTracePath:(id)arg1;
- (void)interfaceHashesWithHandler:(CDUnknownBlockType)arg1;
- (void)updateGuidanceWithData:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;
- (void)checkinForNavigationService:(CDUnknownBlockType)arg1;
- (void)navigationServiceProxy:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (_Bool)isOpenForClient:(id)arg1;
- (void)_updateConnection;
- (_Bool)_shouldReconnectWithInterruptionOnDate:(id)arg1;
- (void)_restoreNavigationSession;
- (void)_restorePredictionSession;
- (void)_restoreIdleConnection;
- (void)_releaseSandboxExtension;
- (void)_consumeSandboxExtension:(char *)arg1;

@end
