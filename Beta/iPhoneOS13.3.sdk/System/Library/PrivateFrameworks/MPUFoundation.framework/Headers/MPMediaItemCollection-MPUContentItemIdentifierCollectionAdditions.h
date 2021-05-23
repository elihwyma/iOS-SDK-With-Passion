/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <MediaPlayer/MPMediaItemCollection.h>

@interface MPMediaItemCollection (MPUContentItemIdentifierCollectionAdditions)

+ (void)_MPU_getContentItemIdentifierCollectionItemType:(unsigned long long *)arg1 storeAdamIDProperty:(id *)arg2 forGroupingType:(long long)arg3;
+ (id)MPU_contentItemIdentifierCollectionPropertiesForGroupingType:(long long)arg1;

- (id)MPU_contentItemIdentifierCollection;

@end
