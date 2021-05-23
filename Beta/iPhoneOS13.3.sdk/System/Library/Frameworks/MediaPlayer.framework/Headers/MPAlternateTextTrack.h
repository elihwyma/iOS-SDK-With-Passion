/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAlternateTrack.h>

@class NSLocale, NSString;

@interface MPAlternateTextTrack : MPAlternateTrack

{
    long long _type;
    NSString *_name;
    NSLocale *_locale;
    long long _tag;
}

@property (nonatomic, readonly) _Bool isInBand;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) long long type;
@property (nonatomic) long long tag;

+ (id)autoTrack;
+ (id)offTrack;

- (_Bool)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)displayName;
- (id)initWithType:(long long)arg1 name:(id)arg2 locale:(id)arg3;
- (id)_displayNameForName:(id)arg1;

@end
