/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Photos/PHPhotoLibrary.h>

@interface PHPhotoLibrary (MediaAnalysis)

+ (id)vcp_defaultURL;
+ (id)vcp_defaultPhotoLibrary;
+ (id)vcp_defaultMediaAnalysisDatabaseFilepath;

- (id)vcp_mediaAnalysisDatabaseFilepath;
- (id)vcp_url;
- (id)vcp_mediaAnalysisDirectory;
- (unsigned long long)vcp_assetCountForTaskID:(unsigned long long)arg1;
- (unsigned long long)vcp_assetCountWithMediaType:(long long)arg1 forTaskID:(unsigned long long)arg2;
- (unsigned long long)vcp_assetCountWithInternalPredicate:(id)arg1 forTaskID:(unsigned long long)arg2;
- (long long)vcp_isCPLEnabled;
- (long long)vcp_isCPLSyncComplete;
- (long long)vcp_isCPLDownloadComplete;

@end
