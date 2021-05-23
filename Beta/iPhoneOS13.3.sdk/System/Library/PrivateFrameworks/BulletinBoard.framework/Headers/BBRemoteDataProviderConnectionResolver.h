/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class BKSApplicationStateMonitor, NSMutableDictionary, NSString, NSXPCListener;

@protocol BBDataProviderStoreDelegate, OS_dispatch_queue;

@interface BBRemoteDataProviderConnectionResolver : NSObject

{
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_registerQueue;
    NSMutableDictionary *_dataProviderConnectionsByService;
    NSMutableDictionary *_dataProviderConnectionsBySectionID;
    NSMutableDictionary *_dataProviderConnectionsByUniversalSectionID;
    NSMutableDictionary *_xpcConnectionsByService;
    id <BBDataProviderStoreDelegate> _delegate;
    int _listeningToken;
    BKSApplicationStateMonitor *_appStateMonitor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)xpcInterface;
+ (id)resolverWithDelegate:(id)arg1;

- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)registerServiceName:(id)arg1 appBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)dataProviderForSectionID:(id)arg1;
- (void)performBlockOnDataProviders:(CDUnknownBlockType)arg1;
- (void)_registerForPublicationNotification;
- (id)debugDescriptionWithChildren:(unsigned long long)arg1;
- (void)_registerServiceName:(id)arg1 appBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)wakeService:(id)arg1 bundleID:(id)arg2;
- (id)dataProviderForUniversalSectionID:(id)arg1;
- (void)removeDataProvider:(id)arg1;
- (void)dataProviderStore:(id)arg1 didAddDataProvider:(id)arg2 performMigration:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dataProviderStore:(id)arg1 didRemoveDataProvider:(id)arg2;
- (void)dataProviderStore:(id)arg1 didAddParentSectionFactory:(id)arg2;
- (void)remoteDataProviderNeedsToWakeClient:(id)arg1;
- (void)loadAllDataProviders;

@end
