/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/VEiOSSharedObject.h>

@class NSCache, NSSet;

__attribute__((visibility("hidden")))
@interface MiroMetadataManager : VEiOSSharedObject

{
    NSCache *_assetMetadataCache;
    NSSet *_suggestions;
}

@property (weak, nonatomic) NSSet *suggestions;

+ (id)sharedManager;

- (id)init;
- (void)clearCaches;
- (void)analyzeLoudnessForRanges:(id)arg1 ofAssets:(id)arg2;
- (id)metadataForAssetID:(id)arg1;
- (void)setMetadata:(id)arg1 forAssetID:(id)arg2;
- (void)analyzeLoudnessForRanges:(id)arg1 ofAssets:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)analyzeAssets:(id)arg1 ranges:(id)arg2 types:(unsigned long long)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)analyzeAsset:(id)arg1 ranges:(id)arg2 types:(unsigned long long)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)analyzeColorForAsset:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)clipSuggestionRangesForAsset:(id)arg1;
- (id)analyzeColorForAsset:(id)arg1;

@end
