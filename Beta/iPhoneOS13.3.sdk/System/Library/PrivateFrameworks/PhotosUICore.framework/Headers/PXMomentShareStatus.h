/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSString;

@protocol PXDisplayAssetFetchResult, PXDisplayMomentShare, PXSectionedFetchResult;

@interface PXMomentShareStatus : PXObservable

{
    id <PXDisplayMomentShare> _momentShare;
    id <PXDisplayAssetFetchResult> _downloadingAssetsFetchResult;
    id <PXDisplayAssetFetchResult> _copiedAssetsFetchResult;
    id <PXDisplayAssetFetchResult> _allAssetsFetchResult;
    id <PXSectionedFetchResult> _participantsFetchResult;
}

@property (nonatomic, readonly) id <PXDisplayMomentShare> momentShare;
@property (nonatomic, readonly) id <PXDisplayAssetFetchResult> downloadingAssetsFetchResult;
@property (nonatomic, readonly) id <PXDisplayAssetFetchResult> copiedAssetsFetchResult;
@property (nonatomic, readonly) id <PXDisplayAssetFetchResult> allAssetsFetchResult;
@property (nonatomic, readonly) id <PXSectionedFetchResult> participantsFetchResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)new;

- (id)init;
- (id)owner;
- (void)setMomentShare:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)initWithMomentShare:(id)arg1;
- (void)setDownloadingAssetsFetchResult:(id)arg1;
- (void)setCopiedAssetsFetchResult:(id)arg1;
- (void)setAllAssetsFetchResult:(id)arg1;
- (void)setParticipantsFetchResult:(id)arg1;

@end
