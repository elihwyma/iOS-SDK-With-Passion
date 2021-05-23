/*
 Image: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString, NSUUID, NSXPCConnection, NSXPCListener, NSXPCListenerEndpoint;

@protocol PBItemCollectionDataTransferDelegate;

@interface PBItemCollection : NSObject

{
    _Bool _itemQueue_isDataProvider;
    _Bool _itemQueue_deviceLockedPasteboard;
    NSDate *_creationDate;
    NSXPCListener *_itemQueue_dataConsumersListener;
    NSXPCListenerEndpoint *_itemQueue_remoteDataProviderEndpoint;
    NSXPCConnection *_itemQueue_remoteDataProviderConnection;
    NSArray *_itemQueue_items;
    NSDictionary *_itemQueue_metadata;
    NSDictionary *_itemQueue_privateMetadata;
    NSUUID *_itemQueue_UUID;
    NSString *_itemQueue_originatorBundleID;
    NSString *_itemQueue_originatorTeamID;
    long long _itemQueue_originatorDataOwner;
    long long _itemQueue_remotePasteboardState;
    id <PBItemCollectionDataTransferDelegate> _itemQueue_dataTransferDelegate;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly, getter=isSystemPasteboard) _Bool systemPasteboard;
@property (nonatomic) long long changeCount;
@property (nonatomic, readonly) _Bool isGeneralPasteboard;
@property (nonatomic, getter=isPersistent) _Bool persistent;
@property (retain, nonatomic) NSDate *expirationDate;
@property (nonatomic, getter=isLocalOnly) _Bool localOnly;
@property (retain, nonatomic) NSXPCListener *itemQueue_dataConsumersListener;
@property (retain, nonatomic) NSXPCListenerEndpoint *itemQueue_remoteDataProviderEndpoint;
@property (retain, nonatomic) NSXPCConnection *itemQueue_remoteDataProviderConnection;
@property (copy, nonatomic) NSArray *itemQueue_items;
@property (copy, nonatomic) NSDictionary *itemQueue_metadata;
@property (retain, nonatomic) NSDictionary *itemQueue_privateMetadata;
@property (retain, nonatomic) NSUUID *itemQueue_UUID;
@property (nonatomic) _Bool itemQueue_isDataProvider;
@property (copy, nonatomic) NSString *itemQueue_originatorBundleID;
@property (copy, nonatomic) NSString *itemQueue_originatorTeamID;
@property (nonatomic) long long itemQueue_originatorDataOwner;
@property (nonatomic, getter=itemQueue_isDeviceLockedPasteboard) _Bool itemQueue_deviceLockedPasteboard;
@property (nonatomic) long long itemQueue_remotePasteboardState;
@property (weak, nonatomic) id <PBItemCollectionDataTransferDelegate> itemQueue_dataTransferDelegate;
@property (nonatomic, getter=isDeviceLockedPasteboard) _Bool deviceLockedPasteboard;
@property (copy, nonatomic, readonly) NSString *persistenceName;
@property (nonatomic) _Bool isRemote;
@property (nonatomic, readonly, getter=isRemoteMetadataLoaded) _Bool remoteMetadataLoaded;
@property (nonatomic, readonly, getter=isRemoteDataLoaded) _Bool remoteDataLoaded;
@property (retain, nonatomic) NSDictionary *privateMetadata;
@property (nonatomic, readonly) _Bool isDataProvider;
@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) NSXPCListenerEndpoint *dataConsumersEndpoint;
@property (copy, nonatomic, readonly) NSString *originatorBundleID;
@property (copy, nonatomic, readonly) NSString *originatorTeamID;
@property (nonatomic) long long originatorDataOwner;
@property (copy, nonatomic, readonly) NSArray *items;
@property (copy, nonatomic) NSDictionary *metadata;
@property (nonatomic, readonly) NSDate *creationDate;
@property (weak, nonatomic) id <PBItemCollectionDataTransferDelegate> dataTransferDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)allowedClassesForSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setUUID:(id)arg1;
- (void)_setMetadataValue:(id)arg1 forKey:(id)arg2;
- (void)setItems:(id)arg1;
- (id)initWithItems:(id)arg1;
- (void)setDataProviderEndpoint:(id)arg1;
- (void)waitForItemRequestsDeliveryCompletion:(CDUnknownBlockType)arg1;
- (_Bool)canInstantiateObjectOfClass:(Class)arg1;
- (void)addItems:(id)arg1;
- (id)copyWithItems:(id)arg1;
- (id)availableRepresentationTypes;
- (void)shutdown;
- (void)setUsesServerConnectionToLoadData;
- (void)item:(id)arg1 representation:(id)arg2 beganDataTransferWithProgress:(id)arg3;
- (void)item:(id)arg1 representationFinishedDataTransfer:(id)arg2;
- (id)dataConsumersListener;
- (id)_remoteDataProviderConnection;
- (void)setOriginatorBundleID:(id)arg1;
- (void)setOriginatorTeamID:(id)arg1;
- (CDStruct_6ad76789)establishConnectionToDataProviderCompletionBlock:(CDUnknownBlockType)arg1;
- (id)copyWithDoNothingLoaders;
- (_Bool)hasItemWithRepresentationOfType:(id)arg1;
- (_Bool)hasItemWithRepresentationConformingToType:(id)arg1;
- (void)setRemoteMetadataLoaded;
- (void)setRemoteDataLoaded;

@end
