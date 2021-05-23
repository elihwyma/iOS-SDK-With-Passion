/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSLock, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSUUID, NSXPCConnection;

@interface NTKComplicationCollection : NSObject

{
    NSXPCConnection *_connection;
    _Bool _registrationNeeded;
    NSNumber *_seqId;
    NSMutableDictionary *_localizeableSampleDataTemplates;
    NSLock *_templatesLock;
    NSHashTable *_observers;
    NSMutableArray *_loadCallbacks;
    NSLock *_observersLock;
    _Bool _updatesSuspended;
    NSMutableArray *_updatesEnqueuedWhileSuspended;
    _Bool _hasLoaded;
    NSString *_collectionIdentifier;
    NSUUID *_deviceUUID;
}

@property (nonatomic, readonly) NSString *collectionIdentifier;
@property (nonatomic, readonly) NSUUID *deviceUUID;
@property (nonatomic, readonly) _Bool hasLoaded;

+ (id)sharedRemoteCollection;

- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)clients;
- (void)_handleConnectionInterrupted;
- (void)_performOrEnqueueUpdate:(CDUnknownBlockType)arg1;
- (id)supportedTemplateFamiliesForClientIdentifier:(id)arg1;
- (id)initWithCollectionIdentifier:(id)arg1 deviceUUID:(id)arg2;
- (id)sampleTemplateForClientIdentifier:(id)arg1 applicationID:(id)arg2 family:(long long)arg3;
- (void)_throwIfNotLoaded:(SEL)arg1;
- (void)_registerIfNeeded;
- (void)_notifyLoaded;
- (void)suspendUpdatesFromDaemon;
- (void)resumeUpdatesFromDaemon;
- (void)_setLocalizedSampleTemplate:(id)arg1 forClientIdentifier:(id)arg2 family:(long long)arg3;
- (void)_sendToDaemonUpdatedSampleDataTemplate:(id)arg1 forClientIdentifier:(id)arg2 family:(long long)arg3;
- (void)_notifyUpdateComplicationSampleTemplateForClientIdentifier:(id)arg1;
- (void)_removeComplicationForClientIdentifier:(id)arg1;
- (void)_sendToDaemonRemoveComplicationforClientIdentifier:(id)arg1;
- (void)_notifyRemovedComplicationForClientIdentifier:(id)arg1;
- (void)removeComplicationForClientIdentifier:(id)arg1;
- (void)performAfterLoad:(CDUnknownBlockType)arg1;
- (id)clientsSupportingFamily:(long long)arg1;
- (id)_bundleForWatchKitAppID:(id)arg1;
- (void)setLocalizableSampleTemplate:(id)arg1 forClientIdentifier:(id)arg2 family:(long long)arg3;
- (void)removeAllComplicationsExceptThoseWithClientIdentifiers:(id)arg1;
- (void)loadFullCollectionWithLocalizableSampleTemplates:(id)arg1 seqId:(id)arg2;
- (void)updateLocalizableSampleTemplate:(id)arg1 forClientIdentifier:(id)arg2 family:(long long)arg3 seqId:(id)arg4;
- (void)removeComplicationForClientIdentifier:(id)arg1 seqId:(id)arg2;

@end
