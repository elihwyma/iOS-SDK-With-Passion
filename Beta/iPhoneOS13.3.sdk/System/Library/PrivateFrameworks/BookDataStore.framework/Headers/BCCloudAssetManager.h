/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <Foundation/NSObject.h>

#import <BookDataStore/Swift-Protocol.h>

@class BCCloudAssetAnnotationManager, BCCloudChangeTokenController, BCCloudDataSource, BDSServiceProxy, NSManagedObjectModel;

@protocol BCCloudAssetDetailManager, BCCloudAssetReviewManager, BCCloudReadingNowDetailManager, BCCloudStoreAssetManager;

@interface BCCloudAssetManager : NSObject <Swift>

{
    _Bool _proxyMode;
    NSManagedObjectModel *_objectModel;
    BCCloudDataSource *_assetDataSource;
    BCCloudAssetAnnotationManager *_assetAnnotationManager;
    NSObject<BCCloudAssetDetailManager> *_assetDetailManager;
    NSObject<BCCloudReadingNowDetailManager> *_readingNowDetailManager;
    NSObject<BCCloudAssetReviewManager> *_assetReviewManager;
    NSObject<BCCloudStoreAssetManager> *_storeAssetManager;
    BCCloudChangeTokenController *_changeTokenController;
    BDSServiceProxy *_serviceProxy;
}

@property (retain, nonatomic) BCCloudAssetAnnotationManager *assetAnnotationManager;
@property (retain, nonatomic) NSObject<BCCloudAssetDetailManager> *assetDetailManager;
@property (retain, nonatomic) NSObject<BCCloudReadingNowDetailManager> *readingNowDetailManager;
@property (retain, nonatomic) NSObject<BCCloudAssetReviewManager> *assetReviewManager;
@property (retain, nonatomic) NSObject<BCCloudStoreAssetManager> *storeAssetManager;
@property (retain, nonatomic) BCCloudChangeTokenController *changeTokenController;
@property (retain, nonatomic) NSManagedObjectModel *objectModel;
@property (retain, nonatomic) BDSServiceProxy *serviceProxy;
@property (nonatomic) _Bool proxyMode;
@property (retain, nonatomic) BCCloudDataSource *assetDataSource;

+ (id)sharedManager;
+ (id)sharedClientXPCProxy;

- (void)dealloc;
- (void)dissociateCloudDataFromSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)setEnableCloudSync:(_Bool)arg1 enableReadingNowSync:(_Bool)arg2;
- (void)deleteCloudDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)initClientXPCProxy;

@end
