/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MiroBurstHelpers : NSObject

+ (_Bool)isRealBurstClip:(id)arg1;
+ (_Bool)isDateBasedBurstClip:(id)arg1 memory:(id)arg2;
+ (id)photoAssetsForRealBurstAsset:(id)arg1;
+ (id)photoAssetsForDateBasedBurstAsset:(id)arg1 memory:(id)arg2;
+ (_Bool)isBurstClip:(id)arg1 memory:(id)arg2;
+ (id)photoAssetsForBurstAsset:(id)arg1 memory:(id)arg2;
+ (id)thinOutAssets:(id)arg1 byKeepingOnlyOneAssetFromEachBurst:(id)arg2;

@end
