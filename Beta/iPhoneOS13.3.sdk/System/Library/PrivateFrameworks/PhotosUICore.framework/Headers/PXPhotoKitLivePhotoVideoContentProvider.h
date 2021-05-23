/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXPhotoKitVideoContentProvider.h>

@class NSString;

@interface PXPhotoKitLivePhotoVideoContentProvider : PXPhotoKitVideoContentProvider

{
    NSString *_contentIdentifier;
    double _loopCrossFadeDuration;
    CDStruct_e83c9415 _loopTimeRange;
}

@property (nonatomic, readonly) double loopCrossFadeDuration;
@property (nonatomic, readonly) CDStruct_e83c9415 loopTimeRange;

- (id)contentIdentifier;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;
- (_Bool)needsPostprocessing;
- (id)postprocessPlayerItem:(id)arg1;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 loopCrossFadeDuration:(double)arg3 loopTimeRange:(CDStruct_e83c9415)arg4;

@end
