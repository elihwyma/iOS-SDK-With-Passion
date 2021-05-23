/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <NSObject.h>

@class ADBannerView, ADInterstitialAd, NSData, NSError, NSString, NSURL;

@protocol OS_dispatch_queue;

@interface ADPolicyEngine : NSObject

{
    _Bool _enabled;
    _Bool _canAutoEnable;
    _Bool _sharedInterstitialAdIsInUse;
    _Bool _sharedMediaPlayerVideoAdClaimed;
    double _nextInterstitialPresentationTime;
    double _nextPrerollPlaybackTime;
    NSObject<OS_dispatch_queue> *_policyEngineQueue;
    ADInterstitialAd *_sharedInterstitialAd;
    NSString *_sharedInterstitialSection;
    NSURL *_sharedInterstitialServerURL;
    NSString *_sharedInterstitialAuthenticationUserName;
    ADBannerView *_sharedMediaPlayerVideoAd;
    NSError *_lastSharedMediaPlayerVideoAdError;
    NSData *_currentStationData;
    NSData *_currentSongData;
}

@property (nonatomic) double nextInterstitialPresentationTime;
@property (nonatomic) double nextPrerollPlaybackTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *policyEngineQueue;
@property (nonatomic) _Bool enabled;
@property (nonatomic) _Bool canAutoEnable;
@property (retain, nonatomic) ADInterstitialAd *sharedInterstitialAd;
@property (nonatomic) _Bool sharedInterstitialAdIsInUse;
@property (copy, nonatomic) NSString *sharedInterstitialSection;
@property (copy, nonatomic) NSURL *sharedInterstitialServerURL;
@property (copy, nonatomic) NSString *sharedInterstitialAuthenticationUserName;
@property (retain, nonatomic) ADBannerView *sharedMediaPlayerVideoAd;
@property (nonatomic) _Bool sharedMediaPlayerVideoAdClaimed;
@property (retain, nonatomic) NSError *lastSharedMediaPlayerVideoAdError;
@property (retain, nonatomic) NSData *currentStationData;
@property (retain, nonatomic) NSData *currentSongData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedEngine;

- (id)init;
- (void)bannerViewActionDidFinish:(id)arg1;
- (_Bool)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(_Bool)arg2;
- (void)bannerViewWillLoadAd:(id)arg1;
- (void)bannerViewDidLoadAd:(id)arg1;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)interstitialAdDidUnload:(id)arg1;
- (void)interstitialAdDidLoad:(id)arg1;
- (void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;
- (void)adServingDaemonDidIdleDisablePolicyEngine;
- (void)_enablePolicyEngineWithReason:(id)arg1;
- (void)disablePolicyEngine;
- (void)finishedPresentingSharedInterstitialAd;
- (void)sharedMediaPlayerVideoAdWillLoad;
- (void)sharedMediaPlayerVideoAdDidLoad;
- (void)sharedMediaPlayerVideoAdDidFailToReceiveAdWithError:(id)arg1;
- (void)sharedMediaPlayerVideoAdActionDidFinish;
- (void)enablePolicyEngine;
- (_Bool)canPresentSharedInterstitialAdWithResultMessage:(id *)arg1;
- (_Bool)claimSharedMediaPlayerVideoAdWithError:(id *)arg1;
- (void)relinquishSharedMediaPlayerVideoAd;

@end
