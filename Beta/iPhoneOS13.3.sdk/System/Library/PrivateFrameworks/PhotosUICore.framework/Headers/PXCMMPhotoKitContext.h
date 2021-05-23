/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCMMContext.h>

@class PHMomentShare, PHSuggestion, PXCMMPhotoKitActionManager;

@interface PXCMMPhotoKitContext : PXCMMContext

{
    PXCMMPhotoKitActionManager *_photoKitActionManager;
    PHMomentShare *_momentShare;
    PHSuggestion *_suggestion;
    PHMomentShare *_originatingMomentShare;
}

@property (nonatomic, readonly) PHMomentShare *momentShare;
@property (nonatomic, readonly) PHSuggestion *suggestion;
@property (retain, nonatomic) PHMomentShare *originatingMomentShare;

- (id)actionManager;
- (id)initWithAssetsDataSourceManager:(id)arg1 mediaProvider:(id)arg2 activityType:(unsigned long long)arg3;
- (id)initWithAssets:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3;
- (id)initWithAssetCollection:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3;
- (id)initWithAssetCollection:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3 optionalPeopleFetchResult:(id)arg4;
- (id)initWithFetchResult:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3;
- (id)initWithFetchResult:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3 optionalPeopleFetchResult:(id)arg4;
- (id)initWithFetchResult:(id)arg1 library:(id)arg2 activityType:(unsigned long long)arg3 sourceType:(unsigned long long)arg4 optionalPeopleFetchResult:(id)arg5;
- (id)initWithMomentShare:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3;
- (id)initWithSuggestion:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3 optionalPeopleFetchResult:(id)arg4;
- (id)createSession;

@end
