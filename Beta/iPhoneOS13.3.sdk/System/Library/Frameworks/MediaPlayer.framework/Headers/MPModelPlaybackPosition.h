/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelObject.h>

@class NSNumber, NSString;

@interface MPModelPlaybackPosition : MPModelObject

@property (nonatomic) double bookmarkTime;
@property (nonatomic) _Bool shouldRememberBookmarkTime;
@property (nonatomic) _Bool hasBeenPlayed;
@property (nonatomic) double startTime;
@property (copy, nonatomic) NSNumber *stopTime;
@property (copy, nonatomic) NSString *storeUbiquitousIdentifier;
@property (nonatomic) long long userPlayCount;

+ (id)__bookmarkTime_KEY;
+ (id)__shouldRememberBookmarkTime_KEY;
+ (id)__hasBeenPlayed_KEY;
+ (id)__startTime_KEY;
+ (id)__stopTime_KEY;
+ (id)__storeUbiquitousIdentifier_KEY;
+ (id)__userPlayCount_KEY;

@end
