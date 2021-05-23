/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol BBRemoteDataProviderStoreDelegate, OS_dispatch_queue;

@interface BBRemoteDataProviderConnection : NSObject

{
    _Bool _connected;
    id <BBRemoteDataProviderStoreDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_dataProvidersBySectionID;
    NSMutableDictionary *_dataProvidersByUniversalSectionID;
    _Bool _clientReady;
    NSString *_serviceName;
    NSString *_bundleID;
}

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic, readonly) _Bool isConnected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addDataProviderWithSectionID:(id)arg1 clientProxy:(id)arg2 identity:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeDataProviderWithSectionID:(id)arg1;
- (void)addParentSectionFactory:(id)arg1;
- (void)clientIsReady:(CDUnknownBlockType)arg1;
- (id)dataProviderForSectionID:(id)arg1;
- (void)performBlockOnDataProviders:(CDUnknownBlockType)arg1;
- (id)debugDescriptionWithChildren:(unsigned long long)arg1;
- (id)initWithServiceName:(id)arg1 bundleID:(id)arg2 delegate:(id)arg3;
- (void)setConnected:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)dataProviderForUniversalSectionID:(id)arg1;
- (void)removeDataProvider:(id)arg1;
- (void)remoteDataProviderNeedsToWakeClient:(id)arg1;
- (void)loadAllDataProviders;
- (void)_queue_removeDataProvider:(id)arg1;

@end
