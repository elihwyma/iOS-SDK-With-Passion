/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Photos/PHAsset.h>

@interface PHAsset (FullAnalysis)

+ (unsigned long long)vcp_fullAnalysisTypesForAssetType:(unsigned long long)arg1;
+ (id)vcp_fetchOptionsForLibrary:(id)arg1 forTaskID:(unsigned long long)arg2;
+ (id)vcp_fetchAssetsMatchingFingerprint:(id)arg1 forPhotoLibrary:(id)arg2;
+ (_Bool)vcp_usePHFace;
+ (_Bool)vcp_usePHFaceExpression;

- (_Bool)vcp_isShortMovie;
- (_Bool)vcp_isLivePhoto;
- (unsigned long long)vcp_fullAnalysisTypes;
- (unsigned long long)vcp_fullAnalysisTypesForResources:(id)arg1;
- (id)vcp_modificationDate;
- (_Bool)vcp_isVideoSlowmo;
- (id)vcp_fingerprint:(id)arg1;
- (int)vcp_queryPHFaces:(unsigned long long *)arg1 results:(id *)arg2;
- (struct CGRect)vcp_faceRectFrom:(id)arg1;
- (unsigned long long)vcp_flagsForPHFace:(id)arg1 withFaceRect:(struct CGRect)arg2;
- (id)vcp_typeDescription;
- (_Bool)vcp_isPano;
- (_Bool)vcp_isSdofPhoto;
- (_Bool)vcp_isVideoTimelapse;
- (struct CGSize)vcp_originalSize;

@end
