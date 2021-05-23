/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface VUISettingsManager : NSObject

{
    NSNumber *_maxMovieRank;
    NSNumber *_maxTVShowRank;
    NSString *_preferredVideoFormat;
}

@property (nonatomic, readonly) NSString *restrictions;
@property (copy, nonatomic) NSString *preferredVideoFormat;
@property (copy, nonatomic) NSNumber *maxMovieRank;
@property (copy, nonatomic) NSNumber *maxTVShowRank;

+ (id)sharedInstance;

- (id)init;
- (id)_init;
- (id)_formatStringForVideoFormat:(unsigned long long)arg1;
- (id)_restrictionsMaximumEffectiveMovieRanking;
- (id)_restrictionsMaximumEffectiveTVShowRanking;
- (unsigned long long)_preferredVideoFormat;
- (_Bool)_hasRestrictionsChanged;
- (_Bool)_hasPreferredVideoFormatChanged;
- (void)_sendSettingsValuesToJS;
- (id)preferencesJSONData;
- (void)checkAndUpdateSettings;

@end
