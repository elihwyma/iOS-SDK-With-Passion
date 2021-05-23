/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Photos/PHAssetResource.h>

@interface PHAssetResource (MediaAnalysis)

+ (id)vcp_allResourcesForAsset:(id)arg1;

- (struct CGSize)vcp_size;
- (_Bool)vcp_isLocallyAvailable;
- (_Bool)vcp_isPhotoResourceUsable:(_Bool)arg1;
- (_Bool)vcp_isMovie;
- (_Bool)vcp_isVideoResourceUsable:(_Bool)arg1;
- (_Bool)vcp_isPhoto;
- (_Bool)vcp_isDecodable;
- (unsigned long long)vcp_fileSize;
- (id)vcp_avAsset;

@end
