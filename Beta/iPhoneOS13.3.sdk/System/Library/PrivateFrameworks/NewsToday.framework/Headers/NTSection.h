/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

#import <NewsToday/Swift-Protocol.h>

@class NSArray, NSOrderedSet, NSString, NSURL, NTPBDiscoverMoreVideosInfo, NTPBSectionDisplayDescriptor, SFRankingFeedback;

@interface NTSection : NSObject <Swift>

{
    _Bool _openVideoPlaylistInApp;
    NSString *_identifier;
    NSString *_personalizationFeatureID;
    NSOrderedSet *_items;
    NSArray *_videoPlaylistHeadlines;
    SFRankingFeedback *_rankingFeedback;
    NSString *_referralBarName;
    NSString *_actionTitle;
    NSURL *_actionURL;
    NTPBSectionDisplayDescriptor *_displayDescriptor;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSURL *actionURL;
@property (copy, nonatomic) NSOrderedSet *items;
@property (copy, nonatomic) SFRankingFeedback *rankingFeedback;
@property (copy, nonatomic) NTPBSectionDisplayDescriptor *displayDescriptor;
@property (copy, nonatomic) NSString *referralBarName;
@property (nonatomic) _Bool openVideoPlaylistInApp;
@property (copy, nonatomic, readonly) NSString *personalizationFeatureID;
@property (copy, nonatomic, readonly) NSArray *videoPlaylistHeadlines;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *nameColor;
@property (nonatomic, readonly) _Bool displaysAsVideoPlaylist;
@property (nonatomic, readonly) _Bool useNameColorInWidget;
@property (copy, nonatomic, readonly) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo;
@property (copy, nonatomic, readonly) NSString *backgroundGradientColor;
@property (nonatomic, readonly) _Bool videoPlaysMutedByDefault;

+ (_Bool)supportsSecureCoding;
+ (id)_itemClassesByType;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 actionTitle:(id)arg2 actionURL:(id)arg3 personalizationFeatureID:(id)arg4 items:(id)arg5 videoPlaylistHeadlines:(id)arg6 rankingFeedback:(id)arg7 displayDescriptor:(id)arg8 referralBarName:(id)arg9 openVideoPlaylistInApp:(_Bool)arg10;

@end
