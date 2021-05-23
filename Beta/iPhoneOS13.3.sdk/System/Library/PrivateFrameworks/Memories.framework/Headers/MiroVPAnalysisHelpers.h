/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/VEiOSSharedObject.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface MiroVPAnalysisHelpers : VEiOSSharedObject

{
    NSCache *_analysisInfos;
}

+ (id)sharedHelpers;
+ (unsigned long long)_extendedFlagsWithFlags:(unsigned long long)arg1;
+ (int)_timeInFramesWithDictionaryRepresentation:(id)arg1 naturalFrameRate:(long long)arg2;
+ (id)_createAnalysisInfoWithVPResultDictionary:(id)arg1 asset:(id)arg2;

- (id)init;
- (void)clearCaches;
- (int)fetchAnalysisInfoWithAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)processResults:(id)arg1 forAssets:(id)arg2 intoInfos:(id)arg3;
- (int)fetchAnalysisInfoWithAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
