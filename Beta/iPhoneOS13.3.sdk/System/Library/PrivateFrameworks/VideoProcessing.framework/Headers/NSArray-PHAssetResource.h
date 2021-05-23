/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSArray.h>

@interface NSArray (PHAssetResource)

- (_Bool)vcp_hasLocalMovie:(_Bool)arg1;
- (id)vcp_thumbnailResource;
- (id)vcp_avAsset:(_Bool)arg1;
- (id)vcp_localPhotoResourcesSorted:(_Bool)arg1;
- (_Bool)vcp_hasLocalPhoto:(_Bool)arg1;
- (_Bool)vcp_isOriginalLocal;
- (_Bool)vcp_hasLocalAdjustments;
- (id)vcp_resourceWithType:(unsigned long long)arg1;
- (id)vcp_smallResourceMeetingCriteria:(CDUnknownBlockType)arg1;
- (id)vcp_localMovieResourcesSorted:(_Bool)arg1;
- (id)vcp_originalResource;
- (id)vcp_originalVideoResource;
- (float)vcp_getFpsRate;
- (_Bool)vcp_hasLocalSlowmo;
- (id)vcp_adjustmentsResource;
- (id)vcp_smallMovieDerivativeResource;

@end
