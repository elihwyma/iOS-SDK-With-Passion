/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <NanoMusicSync/NMSMediaItemGroup.h>

__attribute__((visibility("hidden")))
@interface NMSRecommendationMediaItemGroup : NMSMediaItemGroup

- (_Bool)isEstimate;
- (id)itemList;
- (id)identifiersForContainerType:(unsigned long long)arg1;
- (id)recommendation;
- (id)_fetchDownloadInfoForItems:(id)arg1;

@end
