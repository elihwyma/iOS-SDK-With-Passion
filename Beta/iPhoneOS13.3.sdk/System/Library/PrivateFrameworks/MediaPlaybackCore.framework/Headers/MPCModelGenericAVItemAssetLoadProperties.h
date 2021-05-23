/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPIdentifierSet, MPModelFileAsset, MPModelGenericObject, MPModelHomeSharingAsset, MPModelStoreAsset, NSString;

@protocol MPCModelPlaybackAssetCacheProviding;

@interface MPCModelGenericAVItemAssetLoadProperties : NSObject

{
    _Bool _allowsHLSContent;
    _Bool _prefersVideoContent;
    _Bool _prefersHighQualityContent;
    _Bool _radioPlayback;
    NSString *_assetSourceStorefrontID;
    id <MPCModelPlaybackAssetCacheProviding> _assetCacheProvider;
    MPModelFileAsset *_fileAsset;
    MPModelGenericObject *_genericObject;
    MPModelHomeSharingAsset *_homeSharingAsset;
    MPIdentifierSet *_itemIdentifiers;
    MPModelStoreAsset *_storeAsset;
    unsigned long long _accountID;
    unsigned long long _delegatedAccountID;
    NSString *_householdID;
    NSString *_storefrontID;
}

@property (nonatomic) _Bool allowsHLSContent;
@property (copy, nonatomic) NSString *assetSourceStorefrontID;
@property (nonatomic) _Bool prefersVideoContent;
@property (retain, nonatomic) id <MPCModelPlaybackAssetCacheProviding> assetCacheProvider;
@property (retain, nonatomic) MPModelFileAsset *fileAsset;
@property (retain, nonatomic) MPModelGenericObject *genericObject;
@property (retain, nonatomic) MPModelHomeSharingAsset *homeSharingAsset;
@property (retain, nonatomic) MPIdentifierSet *itemIdentifiers;
@property (nonatomic) _Bool prefersHighQualityContent;
@property (nonatomic, getter=isRadioPlayback) _Bool radioPlayback;
@property (retain, nonatomic) MPModelStoreAsset *storeAsset;
@property (nonatomic) unsigned long long accountID;
@property (nonatomic) unsigned long long delegatedAccountID;
@property (copy, nonatomic) NSString *householdID;
@property (copy, nonatomic) NSString *storefrontID;

@end
