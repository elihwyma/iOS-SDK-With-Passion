/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelObject.h>

@class NSString;

@interface MPModelLyrics : MPModelObject

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *TTML;
@property (nonatomic) _Bool hasStoreLyrics;
@property (nonatomic) _Bool hasTimeSyncedLyrics;

+ (id)__text_KEY;
+ (id)__TTML_KEY;
+ (id)__hasStoreLyrics_KEY;
+ (id)__hasTimeSyncedLyrics_KEY;

@end
