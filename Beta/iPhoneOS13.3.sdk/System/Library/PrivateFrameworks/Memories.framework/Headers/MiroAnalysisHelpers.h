/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/VEiOSSharedObject.h>

__attribute__((visibility("hidden")))
@interface MiroAnalysisHelpers : VEiOSSharedObject

+ (int)timeInFramesWithDictionaryRepresentation:(id)arg1 naturalFrameRate:(long long)arg2;
+ (id)buildTransientAggregateRangeTreeWithPersistentRanges:(id)arg1 masterSceneType:(unsigned long long)arg2;

- (id)init;
- (id)description;
- (void)cancelAllAnalysisRequests;
- (void)dispatchFullOutOfProcessAnalysisForAssets:(id)arg1;
- (void)analyzeUsingClientSideAnalyzerWithAsset:(id)arg1 performedAnalysisTypes:(unsigned long long)arg2 ranges:(id)arg3 options:(unsigned long long)arg4 relatedSortedAssets:(id)arg5 cancelGroup:(id)arg6 progressHandler:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;

@end
