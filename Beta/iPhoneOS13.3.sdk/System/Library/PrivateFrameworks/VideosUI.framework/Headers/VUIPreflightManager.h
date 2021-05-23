/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class UIViewController, VUIVideosPlayable;

@protocol TVPMediaItem;

__attribute__((visibility("hidden")))
@interface VUIPreflightManager : NSObject

{
    VUIVideosPlayable *_videosPlayable;
    NSObject<TVPMediaItem> *_mediaItem;
    unsigned long long _restrictionsCheckType;
    UIViewController *_presentingController;
}

@property (retain, nonatomic) VUIVideosPlayable *videosPlayable;
@property (retain, nonatomic) NSObject<TVPMediaItem> *mediaItem;
@property (nonatomic) unsigned long long restrictionsCheckType;
@property (retain, nonatomic) UIViewController *presentingController;

+ (id)defaultPreflightManager;

- (id)init;
- (id)_ratingValue;
- (void)preflightWithOptions:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_isOnWiFi;
- (void)_preflightWithOptions:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performRestrictionsCheckWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performAgeGateVerificationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_preflightDownloadWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_isAllowedToPlayOrPurchase;
- (id)_ratingDomain;
- (void)_showRestrictionsAlertForRatingDomain:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_isTrailer;
- (_Bool)_shouldShowAgeConfirmationAlert;
- (long long)_requiredAgeForPlayback;
- (void)_setLastAgeConfirmationPrompted:(id)arg1;
- (void)_setLastConfirmedAge:(long long)arg1;
- (void)_showAgeConfirmationWithPresentingViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)_lastConfirmedAge;
- (id)_lastAgeConfirmationPrompted;

@end
