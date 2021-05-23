/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class GKNetworkImageSource, NSCache, UIImage;

@interface GKUITheme : NSObject

{
    NSCache *_resourceCache;
}

@property (retain, nonatomic) NSCache *resourceCache;
@property (retain, nonatomic, readonly) GKNetworkImageSource *macGameIconSource;
@property (retain, nonatomic, readonly) GKNetworkImageSource *photoListSource;
@property (retain, nonatomic, readonly) GKNetworkImageSource *photoDetailSource;
@property (retain, nonatomic, readonly) GKNetworkImageSource *iconLeaderboardListSource;
@property (retain, nonatomic, readonly) GKNetworkImageSource *iconLeaderboardSetListSource;
@property (nonatomic, readonly) GKNetworkImageSource *untreatedAchievementImageSource;
@property (nonatomic, readonly) GKNetworkImageSource *untreatedAchievementImageDetailSource;
@property (retain, nonatomic, readonly) UIImage *ratingStarsBackgroundImage;
@property (retain, nonatomic, readonly) UIImage *ratingStarsForegroundImage;
@property (retain, nonatomic, readonly) UIImage *interactiveRatingStarsForeground;
@property (retain, nonatomic, readonly) UIImage *interactiveRatingStarsBackground;
@property (nonatomic, readonly) struct CGSize formSheetSize;
@property (nonatomic, readonly) double formSheetCornerRadius;

+ (id)sharedTheme;

- (id)init;
- (void)dealloc;
- (id)imageNamed:(id)arg1;
- (id)playerPickerSelectedImage;
- (id)playerPickerUnselectedImage;
- (id)avatarSourceWithDimension:(long long)arg1;
- (id)statusDotImage;
- (id)bubbleFriends;
- (id)bubbleHighlight;
- (id)bubbleAccept;
- (id)bubbleChallenges;
- (id)bubbleDecline;
- (id)bubbleGames;
- (id)bubbleInvite;
- (id)bubblePlay;
- (id)bubblePoints;
- (id)bubbleRequests;
- (id)bubbleShare;
- (id)bubbleSignin;
- (id)bubbleTurns;
- (void)clearResourceCache;
- (id)messagesInviteBackgroundImage;
- (id)resourceWithName:(id)arg1 missingHandler:(CDUnknownBlockType)arg2;
- (id)resourceForSelector:(SEL)arg1 missingHandler:(CDUnknownBlockType)arg2;
- (id)defaultPlayerPhoto;
- (id)defaultLeaderboardIcon;
- (id)eventIconImage;
- (id)achievementsNotStartedIcon;
- (id)achievementsDefaultIcon;
- (id)monogramSourceWithDimension:(long long)arg1;
- (id)placeholderSourceWithDimension:(long long)arg1;
- (id)addPlayerButtonImage;
- (id)removePlayerButtonImage;
- (id)navbarActionButtonIcon;

@end
