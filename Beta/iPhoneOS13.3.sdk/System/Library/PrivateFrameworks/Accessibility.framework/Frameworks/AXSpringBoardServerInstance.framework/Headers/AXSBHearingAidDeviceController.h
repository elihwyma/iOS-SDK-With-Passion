/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSTimer;

@protocol OS_dispatch_queue;

@interface AXSBHearingAidDeviceController : NSObject

{
    double _routeChangedTime;
    _Bool isShowingHearingAidControl;
    _Bool _shouldIgnoreRouteChanges;
    _Bool _hearingAidIsConnected;
    _Bool _holdingMediaForConnection;
    _Bool _holdingPhoneForConnection;
    NSDictionary *_preferredRoute;
    NSTimer *_preferredRouteTimer;
    NSObject<OS_dispatch_queue> *_mediaUpdateQueue;
}

@property (nonatomic) _Bool shouldIgnoreRouteChanges;
@property (nonatomic) _Bool isShowingHearingAidControl;
@property (nonatomic) _Bool hearingAidIsConnected;
@property (nonatomic) _Bool holdingMediaForConnection;
@property (nonatomic) _Bool holdingPhoneForConnection;
@property (retain, nonatomic) NSDictionary *preferredRoute;
@property (retain, nonatomic) NSTimer *preferredRouteTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mediaUpdateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedController;

- (id)init;
- (void)dealloc;
- (_Bool)isScreenLocked;
- (id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id *)arg4;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (void)hearingServerDidDie:(id)arg1;
- (void)startServer;
- (id)hearingUIClient;
- (void)liveListenStatusBarActivated:(id)arg1;
- (void)showHearingAidControl:(_Bool)arg1;
- (void)_lockStateChanged;

@end
