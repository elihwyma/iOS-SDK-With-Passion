/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class BKSProcessAssertion, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface MPRadioController : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSXPCConnection *_connection;
    _Bool _hasLaunchedService;
    _Bool _isRadioAvailable;
    BKSProcessAssertion *_remoteProcessAssertion;
    CDUnknownBlockType _remoteProcessAssertionCompletionHandler;
    long long _remoteProcessAssertionCount;
}

@property (nonatomic, readonly, getter=isRadioAvailable) _Bool radioAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)clientRadioControllerRadioAvailabilityDidChange:(_Bool)arg1;
- (void)clientRadioControllerRecentStationsDidChange;
- (void)getRecentStationGroupsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_beginRemoteProcessAssertionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_endRemoteProcessAssertion;
- (void)_setRadioAvailable:(_Bool)arg1;
- (void)_getConnectionWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
