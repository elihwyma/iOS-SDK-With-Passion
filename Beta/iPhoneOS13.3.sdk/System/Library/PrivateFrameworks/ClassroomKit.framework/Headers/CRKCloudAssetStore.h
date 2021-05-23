/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class CRKFileBasedKeyedDataStore, NSCache;

@interface CRKCloudAssetStore : NSObject

{
    NSCache *_cache;
    CRKFileBasedKeyedDataStore *_store;
}

@property (retain, nonatomic) NSCache *cache;
@property (retain, nonatomic) CRKFileBasedKeyedDataStore *store;

+ (id)new;

- (id)init;
- (_Bool)removeAllAssets;
- (id)storeAssetData:(id)arg1;
- (id)assetUrlForIdentifier:(id)arg1;
- (id)initWithFileBasedKeyedDataStore:(id)arg1;
- (_Bool)storeAssetData:(id)arg1 forIdentifier:(id)arg2;
- (id)initWithDirectoryUrl:(id)arg1;
- (_Bool)removeAssetDataForIdentifier:(id)arg1;
- (id)assetDataForIdentifier:(id)arg1;

@end
