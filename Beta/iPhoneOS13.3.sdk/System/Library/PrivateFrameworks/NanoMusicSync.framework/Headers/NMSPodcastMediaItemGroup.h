/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <NanoMusicSync/NMSMediaItemGroup.h>

__attribute__((visibility("hidden")))
@interface NMSPodcastMediaItemGroup : NMSMediaItemGroup

+ (id)_sharedPodcastSizeCache;

- (id)itemList;
- (id)identifiersForContainerType:(unsigned long long)arg1;

@end
