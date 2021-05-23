/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INMediaItem, INMediaSearch, NSArray, NSDate, NSNumber, NSString;

@interface INPlayMediaIntent : INIntent

@property (copy, nonatomic, readonly) NSArray *mediaItems;
@property (copy, nonatomic, readonly) INMediaItem *mediaContainer;
@property (copy, nonatomic, readonly) NSNumber *playShuffled;
@property (nonatomic, readonly) long long playbackRepeatMode;
@property (copy, nonatomic, readonly) NSNumber *resumePlayback;
@property (nonatomic, readonly) long long playbackQueueLocation;
@property (copy, nonatomic, readonly) NSNumber *playbackSpeed;
@property (copy, nonatomic, readonly) INMediaSearch *mediaSearch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSArray *buckets;
@property (copy, nonatomic) NSString *recoID;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSArray *audioSearchResults;
@property (copy, nonatomic) NSArray *alternativeResults;
@property (copy, nonatomic) NSString *proxiedBundleIdentifier;

+ (id)_ignoredParameters;

- (id)domain;
- (id)_metadata;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:(id)arg1;
- (void)setMediaItems:(id)arg1;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (id)initWithMediaItems:(id)arg1 mediaContainer:(id)arg2 playShuffled:(id)arg3 playbackRepeatMode:(long long)arg4 resumePlayback:(id)arg5;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)_spotlightContentType;
- (id)_titleForLanguage:(id)arg1 fromBundleURL:(id)arg2;
- (id)_validParameterCombinationsWithSchema:(id)arg1;
- (void)setMediaContainer:(id)arg1;
- (void)setMediaSearch:(id)arg1;
- (void)setPlayShuffled:(id)arg1;
- (void)setPlaybackQueueLocation:(long long)arg1;
- (void)setPlaybackRepeatMode:(long long)arg1;
- (void)setPlaybackSpeed:(id)arg1;
- (void)setResumePlayback:(id)arg1;
- (id)_keyCodableAttributes;
- (id)initWithMediaItems:(id)arg1 mediaContainer:(id)arg2 playShuffled:(id)arg3 playbackRepeatMode:(long long)arg4 resumePlayback:(id)arg5 playbackQueueLocation:(long long)arg6 playbackSpeed:(id)arg7 mediaSearch:(id)arg8;

@end
