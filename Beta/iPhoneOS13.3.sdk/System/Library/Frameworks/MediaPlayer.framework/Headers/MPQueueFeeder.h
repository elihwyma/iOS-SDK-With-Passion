/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPModelPlayEvent, MPQueueFeederIdentifierRegistry, NSData, NSDictionary, NSString;

@interface MPQueueFeeder : NSObject

{
    MPQueueFeederIdentifierRegistry *_identifierRegistry;
    struct os_unfair_lock_s _identifierRegistryLock;
    NSString *_uniqueIdentifier;
    NSString *_playActivityFeatureName;
    NSData *_playActivityRecommendationData;
    NSString *_siriReferenceIdentifier;
    NSDictionary *_siriWHAMetricsInfo;
    MPModelPlayEvent *_modelPlayEvent;
}

@property (copy, nonatomic) NSString *playActivityFeatureName;
@property (copy, nonatomic) NSData *playActivityRecommendationData;
@property (copy, nonatomic) NSString *siriReferenceIdentifier;
@property (copy, nonatomic) NSDictionary *siriWHAMetricsInfo;
@property (nonatomic, readonly) MPModelPlayEvent *modelPlayEvent;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

- (id)init;
- (void)replaceIdentifierRegistry:(id)arg1;
- (void)identifierRegistryWithExclusiveAccess:(CDUnknownBlockType)arg1;
- (id)identifierRegistryWithExclusiveAccessReturningObject:(CDUnknownBlockType)arg1;
- (_Bool)identifierRegistryWithExclusiveAccessReturningBOOL:(CDUnknownBlockType)arg1;
- (long long)identifierRegistryWithExclusiveAccessReturningInteger:(CDUnknownBlockType)arg1;
- (long long)supplementalPlaybackContextBehavior;
- (id)supplementalPlaybackContextWithReason:(long long)arg1;
- (void)getRepresentativeMetadataForPlaybackContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)errorResolverForItem:(id)arg1;
- (void)applyVolumeNormalizationForItem:(id)arg1;
- (id)playbackInfoForItem:(id)arg1;

@end
