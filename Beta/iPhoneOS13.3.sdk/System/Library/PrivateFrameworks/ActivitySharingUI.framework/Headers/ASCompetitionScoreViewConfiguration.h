/*
 Image: /System/Library/PrivateFrameworks/ActivitySharingUI.framework/ActivitySharingUI
 */

#import <Foundation/NSObject.h>

@class UIFont;

@interface ASCompetitionScoreViewConfiguration : NSObject

{
    _Bool _showsScoreTypeHeader;
    _Bool _showsNames;
    _Bool _uppercaseNames;
    _Bool _showsPrimaryScoreUnits;
    _Bool _zeroPadPrimaryScore;
    _Bool _showsAchievementThumbnail;
    _Bool _showsTodaySecondaryScore;
    _Bool _wantsScaledBaselineAlignment;
    UIFont *_headerFont;
    double _headerBaselineOffset;
    UIFont *_nameFont;
    double _nameBaselineOffset;
    long long _primaryScoreSource;
    UIFont *_primaryScoreFont;
    UIFont *_primaryScoreUnitFont;
    double _primaryScoreBaselineOffset;
    double _achievementThumbnailTopMargin;
    long long _achievementThumbnailAlignment;
    long long _achievementThumbnailQuality;
    UIFont *_secondaryScoreFont;
    double _secondaryScoreBaselineOffset;
    long long _alignment;
    long long _division;
    double _sideMargin;
    double _bottomMargin;
    double _minimumMiddleMargin;
    double _opponentScoreViewWidth;
    struct CGSize _achievementThumbnailSize;
}

@property (retain, nonatomic) UIFont *headerFont;
@property (nonatomic) double headerBaselineOffset;
@property (nonatomic) _Bool showsScoreTypeHeader;
@property (retain, nonatomic) UIFont *nameFont;
@property (nonatomic) double nameBaselineOffset;
@property (nonatomic) _Bool showsNames;
@property (nonatomic) _Bool uppercaseNames;
@property (nonatomic) long long primaryScoreSource;
@property (retain, nonatomic) UIFont *primaryScoreFont;
@property (retain, nonatomic) UIFont *primaryScoreUnitFont;
@property (nonatomic) double primaryScoreBaselineOffset;
@property (nonatomic) _Bool showsPrimaryScoreUnits;
@property (nonatomic) _Bool zeroPadPrimaryScore;
@property (nonatomic) double achievementThumbnailTopMargin;
@property (nonatomic) struct CGSize achievementThumbnailSize;
@property (nonatomic) _Bool showsAchievementThumbnail;
@property (nonatomic) long long achievementThumbnailAlignment;
@property (nonatomic) long long achievementThumbnailQuality;
@property (retain, nonatomic) UIFont *secondaryScoreFont;
@property (nonatomic) double secondaryScoreBaselineOffset;
@property (nonatomic) _Bool showsTodaySecondaryScore;
@property (nonatomic) long long alignment;
@property (nonatomic) long long division;
@property (nonatomic) double sideMargin;
@property (nonatomic) double bottomMargin;
@property (nonatomic) double minimumMiddleMargin;
@property (nonatomic) double opponentScoreViewWidth;
@property (nonatomic) _Bool wantsScaledBaselineAlignment;

+ (id)gizmoTotalScoreConfiguration;
+ (id)gizmoTotalScoreFriendDetailConfiguration;
+ (id)gizmoTotalWinsConfiguration;
+ (id)companionTotalScoreFriendDetailConfiguration;
+ (id)companionTotalWinsFriendDetailConfiguration;
+ (id)gizmoTodayScoreConfiguration;
+ (id)gizmoTotalWinsStandaloneConfiguration;
+ (id)companionFriendListConfiguration;
+ (id)companionTotalWinsStandaloneFriendDetailConfiguration;

@end
