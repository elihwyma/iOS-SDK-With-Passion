/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSDictionary.h>

@interface NSDictionary (Exif)

+ (id)vcp_exifFromImageURL:(id)arg1;

- (id)vcp_dateModified;
- (int)vcp_version;
- (double)vcp_quality;
- (unsigned long long)vcp_types;
- (_Bool)vcp_degraded;
- (unsigned long long)vcp_flags;
- (id)vcp_results;
- (unsigned long long)vcp_statsFlags;
- (CDStruct_1b6d18a9)vcp_syncPoint;
- (id)vcp_dateAnalyzed;
- (id)vcp_fingerprint;
- (_Bool)vcp_streamedVideo;
- (CDStruct_1b6d18a9)vcp_time;
- (CDStruct_e83c9415)vcp_timerange;
- (_Bool)vcp_flashFired;
- (float)vcp_scaledExposureTime;

@end
