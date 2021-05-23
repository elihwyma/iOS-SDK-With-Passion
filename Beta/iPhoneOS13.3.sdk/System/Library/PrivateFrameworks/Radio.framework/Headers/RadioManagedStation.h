/*
 Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

#import <CoreData/NSManagedObject.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface RadioManagedStation : NSManagedObject

@property (nonatomic) long long stationID;
@property (copy, nonatomic) NSString *stationHash;
@property (copy, nonatomic) NSString *stationStringID;
@property (nonatomic) long long persistentID;
@property (nonatomic) long long adamID;
@property (nonatomic) int sortOrder;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *stationDescription;
@property (copy, nonatomic) NSString *coreSeedName;
@property (copy, nonatomic) NSURL *artworkURL;
@property (copy, nonatomic) NSData *artworkURLData;
@property (retain, nonatomic) NSArray *seedTracks;
@property (nonatomic) long long songMixType;
@property (nonatomic) _Bool editEnabled;
@property (retain, nonatomic) NSArray *editableFields;
@property (nonatomic) _Bool hasSkipRules;
@property (nonatomic) _Bool isExplicit;
@property (nonatomic) _Bool likesEnabled;
@property (nonatomic) _Bool skipEnabled;
@property (nonatomic) int skipFrequency;
@property (copy, nonatomic) NSString *skipIdentifier;
@property (nonatomic) double skipInterval;
@property (copy, nonatomic) NSArray *skipTimestamps;
@property (nonatomic) _Bool virtualPlayEnabled;
@property (nonatomic, getter=isFeatured) _Bool featured;
@property (nonatomic, getter=isGatewayVideoAdEnabled) _Bool gatewayVideoAdEnabled;
@property (nonatomic, getter=isSponsored) _Bool sponsored;
@property (retain, nonatomic) NSData *adData;
@property (nonatomic) unsigned long long impressionThreshold;
@property (nonatomic, getter=isPremiumPlacement) _Bool premiumPlacement;
@property (nonatomic, getter=isPreviewOnly) _Bool previewOnly;
@property (nonatomic) _Bool requiresSubscription;
@property (nonatomic, getter=isShared) _Bool shared;
@property (nonatomic, getter=isSharingEnabled) _Bool sharingEnabled;
@property (nonatomic, getter=isSubscribed) _Bool subscribed;
@property (nonatomic) int subscriberCount;
@property (copy, nonatomic) NSString *shareToken;
@property (copy, nonatomic) NSDictionary *debugDictionary;
@property (retain, nonatomic) NSURL *streamURL;
@property (nonatomic, readonly, getter=isPreview) _Bool preview;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

+ (id)defaultPropertiesToFetch;

- (id)feedbackDictionaryRepresentation;
- (id)additionalReferencedTrackDescriptors;
- (void)setStreamCertificateURL:(id)arg1;
- (void)setStreamKeyURL:(id)arg1;
- (id)streamCertificateURL;
- (id)streamKeyURL;

@end
