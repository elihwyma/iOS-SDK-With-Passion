/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIMediaEntity.h>

@class MPMediaItem, NSDate, NSNumber, NSObject, NSString, NSURL, VUIMediaItemCredits;

@protocol VUIMediaEntityIdentifier;

@interface VUIMediaItem : VUIMediaEntity

{
    NSNumber *_isPlayable;
}

@property (nonatomic, readonly) MPMediaItem *mediaPlayerMediaItem;
@property (copy, nonatomic, readonly) NSNumber *assetType;
@property (copy, nonatomic, readonly) NSNumber *isPlayable;
@property (copy, nonatomic, readonly) NSNumber *duration;
@property (copy, nonatomic, readonly) NSString *previewFrameImageIdentifier;
@property (copy, nonatomic, readonly) NSURL *extrasURL;
@property (copy, nonatomic, readonly) NSString *seasonTitle;
@property (copy, nonatomic, readonly) NSObject<VUIMediaEntityIdentifier> *seasonIdentifier;
@property (copy, nonatomic, readonly) NSNumber *episodeNumber;
@property (copy, nonatomic, readonly) NSString *studio;
@property (copy, nonatomic, readonly) VUIMediaItemCredits *credits;
@property (copy, nonatomic, readonly) NSNumber *rentalPlaybackDuration;
@property (copy, nonatomic, readonly) NSDate *rentalExpirationDate;
@property (copy, nonatomic, readonly) NSDate *downloadExpirationDate;
@property (copy, nonatomic) NSNumber *hasBeenPlayed;
@property (copy, nonatomic) NSNumber *playCount;
@property (copy, nonatomic) NSNumber *bookmark;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)_mediaItemWithMPMediaItem:(id)arg1;
+ (id)keyPathsForValuesAffectingPlayedState;

- (id)description;
- (id)creationDate;
- (id)lastPlayedDate;
- (id)modifiedDate;

@end
