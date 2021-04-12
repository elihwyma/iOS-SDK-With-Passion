//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/HMFLogging-Protocol.h>

@class HMBLocalSQLContext, HMBModelContainer, HMFUnfairLock, NSMapTable, NSOperationQueue;
@protocol HMBLocalDatabaseDelegate;

@interface HMBLocalDatabase : HMFObject <HMFLogging>
{
    HMBModelContainer *_modelContainer;
    id <HMBLocalDatabaseDelegate> _delegate;
    NSOperationQueue *_queue;
    HMBLocalSQLContext *_local;
    HMFUnfairLock *_lock;
    NSMapTable *_openZonesByZoneID;
    id /* CDUnknownBlockType */ _localZoneFactory;
}

+ (id)logCategory;
@property(copy, nonatomic) id /* CDUnknownBlockType */ localZoneFactory; // @synthesize localZoneFactory=_localZoneFactory;
@property(readonly, nonatomic) NSMapTable *openZonesByZoneID; // @synthesize openZonesByZoneID=_openZonesByZoneID;
@property(readonly, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) HMBLocalSQLContext *local; // @synthesize local=_local;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <HMBLocalDatabaseDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HMBModelContainer *modelContainer; // @synthesize modelContainer=_modelContainer;
// - (void).cxx_destruct;
- (id)logIdentifier;
- (void)handleLocalZoneShutdown:(id)arg1;
- (BOOL)removeLocalDataForZone:(id)arg1 error:(id )arg2;
- (id)removeZone:(id)arg1;
- (id)openedZoneWithMirror:(id)arg1;
- (id)openExistingZoneWithMirror:(id)arg1 delegate:(id)arg2 error:(id )arg3;
- (id)openOrCreateZoneWithMirror:(id)arg1 delegate:(id)arg2 error:(id )arg3;
- (id)openedZoneWithZoneID:(id)arg1;
- (id)openExistingZoneWithZoneID:(id)arg1 delegate:(id)arg2 error:(id )arg3;
- (id)openOrCreateZoneWithZoneID:(id)arg1 delegate:(id)arg2 error:(id )arg3;
- (id)fetchZonesWithError:(id )arg1;
- (void)dealloc;
- (id)initWithLocalSQLContext:(id)arg1 modelContainer:(id)arg2;
- (id)initWithDatastorePath:(id)arg1 readOnly:(BOOL)arg2 modelContainer:(id)arg3;
- (void)detectedLocalCorruptionWithInfo:(id)arg1;
- (BOOL)shouldLogPrivateInformation;

@end

