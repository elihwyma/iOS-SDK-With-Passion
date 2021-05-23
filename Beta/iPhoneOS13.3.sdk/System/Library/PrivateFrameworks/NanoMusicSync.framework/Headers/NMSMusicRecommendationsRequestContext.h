/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <Foundation/NSObject.h>

@class MPModelForYouRecommendationsResponse, MPModelResponse, NMSMutableMediaSyncInfo, NSArray, NSMapTable, NSMutableOrderedSet, NSOrderedSet, NSSet;

__attribute__((visibility("hidden")))
@interface NMSMusicRecommendationsRequestContext : NSObject

{
    NSMutableOrderedSet *_heavyRotationModelObjects;
    NSMutableOrderedSet *_personalMixesModelObjects;
    NSMapTable *_modelObjectSectionMap;
    MPModelForYouRecommendationsResponse *_forYouResponse;
    MPModelResponse *_lookupResponse;
    NSArray *_importedObjects;
}

@property (retain, nonatomic) MPModelForYouRecommendationsResponse *forYouResponse;
@property (retain, nonatomic) MPModelResponse *lookupResponse;
@property (retain, nonatomic) NSArray *importedObjects;
@property (nonatomic, readonly) unsigned long long numberOfHeavyRotationModelObjects;
@property (nonatomic, readonly) unsigned long long minimumNumberOfHeavyRotationModelObjects;
@property (nonatomic, readonly) NSSet *modelObjects;
@property (nonatomic, readonly) NMSMutableMediaSyncInfo *importedStoreContainerItemMappings;
@property (nonatomic, readonly) NSOrderedSet *recommendations;

- (void)_processResponsesIfNeeded;

@end
