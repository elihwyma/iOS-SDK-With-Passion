/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <Foundation/NSObject.h>

@class NMSMutableMediaSyncInfo, NSData, NSOrderedSet;

__attribute__((visibility("hidden")))
@interface NMSMusicRecommendationsResponse : NSObject

{
    NSData *_cachedData;
    NMSMutableMediaSyncInfo *_importedStoreContainerItemMappings;
    NSOrderedSet *_recommendations;
}

@property (nonatomic, readonly) NSData *cachedData;
@property (nonatomic, readonly) NMSMutableMediaSyncInfo *importedStoreContainerItemMappings;
@property (nonatomic, readonly) NSOrderedSet *recommendations;

- (id)initWithCachedData:(id)arg1 importedStoreContainerItemMappings:(id)arg2 recommendations:(id)arg3;

@end
