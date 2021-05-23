/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INMediaItem, INMediaSearch, NSArray, NSDate, NSNumber, NSString;

@protocol INPlayMediaIntentExport <Swift>

@property (copy, nonatomic) NSArray *mediaItems;
@property (copy, nonatomic) INMediaItem *mediaContainer;
@property (copy, nonatomic) NSNumber *playShuffled;
@property (nonatomic) long long playbackRepeatMode;
@property (copy, nonatomic) NSNumber *resumePlayback;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSArray *buckets;
@property (copy, nonatomic) NSString *recoID;
@property (nonatomic) long long playbackQueueLocation;
@property (copy, nonatomic) NSNumber *playbackSpeed;
@property (copy, nonatomic) INMediaSearch *mediaSearch;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSArray *audioSearchResults;
@property (copy, nonatomic) NSArray *alternativeResults;
@property (copy, nonatomic) NSString *proxiedBundleIdentifier;

- (unsigned short)init;

@end
