/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PXAssetCollectionActionManager;

@protocol PXDisplayAsset, PXPeopleFetchResult, PXUIImageProvider;

@interface _PXCMMSizingSuggestion : NSObject

{
    NSString *_identifier;
    NSString *_title;
    NSString *_subtitle;
    long long _count;
    id <PXDisplayAsset> _posterAsset;
    id <PXUIImageProvider> _posterMediaProvider;
    id <PXPeopleFetchResult> _peopleFetchResult;
    PXAssetCollectionActionManager *_assetCollectionActionManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long aggregateMediaType;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) id <PXDisplayAsset> posterAsset;
@property (nonatomic, readonly) id <PXUIImageProvider> posterMediaProvider;
@property (nonatomic, readonly) id <PXPeopleFetchResult> peopleFetchResult;
@property (nonatomic, readonly) PXAssetCollectionActionManager *assetCollectionActionManager;
@property (nonatomic, readonly) _Bool containsUnverifiedPersons;

- (id)init;
- (double)scoreForSuggestionMatchingType:(long long)arg1;
- (id)contextForActivityType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2;
- (void)markAsActiveIfNeeded;
- (void)decline;
- (id)diagnosticsItem;
- (void)registerMatchingType:(long long)arg1;

@end
