/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <Foundation/NSObject.h>

#import <BookDataStore/Swift-Protocol.h>

@class BCCloudChangeTokenController, BCCloudDataSource, BDSServiceProxy, NSManagedObjectModel;

@protocol BCCloudCollectionDetailManager, BCCloudCollectionMemberManager;

@interface BCCloudCollectionsManager : NSObject <Swift>

{
    _Bool _proxyMode;
    NSManagedObjectModel *_objectModel;
    BCCloudDataSource *_collectionDataSource;
    NSObject<BCCloudCollectionDetailManager> *_collectionDetailManager;
    NSObject<BCCloudCollectionMemberManager> *_collectionMemberManager;
    BCCloudChangeTokenController *_changeTokenController;
    BDSServiceProxy *_serviceProxy;
}

@property (retain, nonatomic) NSObject<BCCloudCollectionDetailManager> *collectionDetailManager;
@property (retain, nonatomic) NSObject<BCCloudCollectionMemberManager> *collectionMemberManager;
@property (retain, nonatomic) BCCloudChangeTokenController *changeTokenController;
@property (retain, nonatomic) NSManagedObjectModel *objectModel;
@property (retain, nonatomic) BCCloudDataSource *collectionDataSource;
@property (nonatomic) _Bool proxyMode;
@property (retain, nonatomic) BDSServiceProxy *serviceProxy;
@property (nonatomic) _Bool enableCloudSync;

+ (id)sharedManager;
+ (id)sharedClientXPCProxy;

- (void)dissociateCloudDataFromSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteCloudDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)initClientXPCProxy;

@end
