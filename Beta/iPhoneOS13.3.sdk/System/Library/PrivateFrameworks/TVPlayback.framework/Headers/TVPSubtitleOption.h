/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class AVMediaSelectionOption, NSNumber, NSString;

@interface TVPSubtitleOption : NSObject

{
    AVMediaSelectionOption *_avMediaSelectionOption;
    NSString *_languageCodeFromLocale;
    NSString *_languageCodeBCP47;
    NSString *_identifier;
    NSString *_localizedDisplayString;
    NSNumber *_cachedContainsOnlyForcedSubtitles;
    NSNumber *_cachedSubtitleType;
}

@property (retain, nonatomic) AVMediaSelectionOption *avMediaSelectionOption;
@property (copy, nonatomic) NSString *languageCodeFromLocale;
@property (copy, nonatomic) NSString *languageCodeBCP47;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *localizedDisplayString;
@property (retain, nonatomic) NSNumber *cachedContainsOnlyForcedSubtitles;
@property (retain, nonatomic) NSNumber *cachedSubtitleType;
@property (nonatomic, readonly) _Bool containsOnlyForcedSubtitles;
@property (nonatomic, readonly) long long subtitleType;

+ (id)offSubtitleOption;
+ (id)autoSubtitleOption;
+ (id)offSubtitleOptionWithAVMediaSelectionOption:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)_currentLocaleDidChange:(id)arg1;
- (id)initWithAVMediaSelectionOption:(id)arg1;

@end
