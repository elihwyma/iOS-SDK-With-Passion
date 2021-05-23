/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface SFCompanionXPCManager : NSObject

{
    _Bool _invalid;
    _Bool _interrupted;
    int _listenerResumedToken;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_xpcSetupQueue;
    NSMutableArray *_observers;
}

@property (retain) NSObject<OS_dispatch_queue> *xpcSetupQueue;
@property int listenerResumedToken;
@property _Bool interrupted;
@property (retain) NSXPCConnection *connection;
@property (retain) NSMutableArray *observers;
@property (getter=isInvalid) _Bool invalid;

+ (void)initialize;
+ (id)sharedManager;
+ (id)xpcManagerInterface;
+ (id)serviceManagerClientInterface;
+ (id)serviceManagerInterface;
+ (id)unlockInterface;
+ (id)hotspotClientInterface;
+ (id)hotspotInterface;

- (id)init;
- (void)dealloc;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)unlockManagerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)remoteHotspotSessionForClient:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)appleAccountSignedIn;
- (void)appleAccountSignedOut;
- (void)setupConnection;
- (void)notifyOfInterruption;
- (void)notifyOfInvalidation;
- (void)notifyOfResume;
- (void)serviceManagerProxyForIdentifier:(id)arg1 client:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)streamsForMessage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
