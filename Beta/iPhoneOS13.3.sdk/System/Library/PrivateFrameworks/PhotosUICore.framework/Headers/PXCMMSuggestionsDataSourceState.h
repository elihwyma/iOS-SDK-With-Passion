/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSDictionary, PHAssetCollection, PHFetchResult, PXCMMSuggestionsDataSourceContext;

@interface PXCMMSuggestionsDataSourceState : NSObject <Swift>

{
    PHFetchResult *_assetCollections;
    NSDictionary *_suggestionsByAssetCollectionObjectID;
    PXCMMSuggestionsDataSourceContext *_context;
    PHAssetCollection *_confidentMatch;
}

@property (nonatomic, readonly) PHFetchResult *assetCollections;
@property (nonatomic, readonly) NSDictionary *suggestionsByAssetCollectionObjectID;
@property (nonatomic, readonly) PXCMMSuggestionsDataSourceContext *context;
@property (nonatomic, readonly) PHAssetCollection *confidentMatch;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stateUpdatedWithChange:(id)arg1 changeDetails:(id *)arg2;
- (id)initWithAssetCollections:(id)arg1 suggestionsByAssetCollectionObjectID:(id)arg2 context:(id)arg3;
- (id)_confidentMatch;
- (void)_compareSuggestionsUsingContext;
- (id)_confidentMatchUsingStrategy:(unsigned long long)arg1;

@end
