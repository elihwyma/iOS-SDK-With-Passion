/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <NSObject.h>

@class ADAdSpace, ADInterstitialAdPresentationViewController, ADInterstitialView, ADLayoutOptions, NSString, UIView, UIViewController;

@protocol ADInterstitialAdDelegate;

@interface ADInterstitialAd : NSObject

{
    _Bool _loaded;
    _Bool _displayed;
    _Bool _reUsed;
    _Bool _actionInProgress;
    _Bool _dimmingEnabled;
    _Bool _requestCalledbackError;
    _Bool _canLoadMoreThanOnce;
    _Bool _hasLoadedFirstAd;
    int _screenfuls;
    int _slotPosition;
    int _creativeType;
    long long _options;
    NSString *_adResponseId;
    long long _lastErrorCode;
    ADLayoutOptions *_layoutOptions;
    id <ADInterstitialAdDelegate> _delegate;
    ADInterstitialAdPresentationViewController *_presentationViewController;
    ADAdSpace *_adSpace;
    ADInterstitialView *_interstitialView;
    id <ADInterstitialAdDelegate> _internalDelegate;
    UIViewController *_internalPresentingViewController;
}

@property (nonatomic) _Bool dimmingEnabled;
@property (nonatomic) int creativeType;
@property (retain, nonatomic) ADInterstitialAdPresentationViewController *presentationViewController;
@property (nonatomic, readonly) _Bool requiresMRAID;
@property (nonatomic) _Bool requestCalledbackError;
@property (retain, nonatomic) ADAdSpace *adSpace;
@property (retain, nonatomic) ADInterstitialView *interstitialView;
@property (weak, nonatomic) id <ADInterstitialAdDelegate> internalDelegate;
@property (weak, nonatomic) UIViewController *internalPresentingViewController;
@property (nonatomic, getter=isLoaded) _Bool loaded;
@property (nonatomic) _Bool canLoadMoreThanOnce;
@property (nonatomic) _Bool hasLoadedFirstAd;
@property (nonatomic, getter=isActionInProgress) _Bool actionInProgress;
@property (weak, nonatomic) id <ADInterstitialAdDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) int internalAdType;
@property (retain, nonatomic) ADLayoutOptions *layoutOptions;
@property (nonatomic, readonly) long long options;
@property (nonatomic, readonly) UIView *adSpaceView;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (copy, nonatomic) NSString *adResponseId;
@property (nonatomic) int screenfuls;
@property (nonatomic) int slotPosition;
@property (nonatomic) _Bool displayed;
@property (nonatomic) _Bool reUsed;
@property (nonatomic) long long lastErrorCode;

- (id)init;
- (void)dealloc;
- (id)identifier;
- (id)context;
- (void)setContext:(id)arg1;
- (void)cancelAction;
- (void)setSection:(id)arg1;
- (void)presentFromViewController:(id)arg1;
- (id)serverURL;
- (id)_initWithInternalAdType:(int)arg1 layoutOptions:(id)arg2 options:(long long)arg3;
- (void)privacyButtonWasTapped;
- (_Bool)hasImpressed;
- (void)bannerTappedAtPoint:(struct CGPoint)arg1;
- (void)bannerTappedAtPoint:(struct CGPoint)arg1 withMRAIDAction:(id)arg2;
- (void)setServerURL:(id)arg1;
- (void)setAuthenticationUserName:(id)arg1;
- (id)currentAdIdentifier;
- (void)serverBannerViewWillLoad;
- (void)serverBannerViewDidLoad;
- (void)serverBannerViewDidFailToReceiveAdWithError:(id)arg1;
- (void)serverStoryboardDidTransitionOut;
- (void)storyboardViewControllerDidPresent;
- (void)pauseBannerMedia;
- (void)resumeBannerMedia;
- (_Bool)shouldTestVisibilityAtPoint:(struct CGPoint)arg1;
- (void)adlibManagedVideoAdDidImpress;
- (void)adlibManagedVideoAdDidResumePlay;
- (void)adlibManagedVideoAdDidPausePlay;
- (void)adlibManagedVideoAdDidCompletePlay:(int)arg1;
- (void)adlibManagedVideoAdDidTapForMoreInfo;
- (void)adlibManagedVideoAdDidTapVideo;
- (void)adlibManagedVideoAdDidToggleToMute:(_Bool)arg1;
- (void)creativeControllerViewWasTappedAtPoint:(struct CGPoint)arg1 withMRAIDAction:(id)arg2;
- (id)initWithCreativeType:(int)arg1 options:(long long)arg2;
- (void)_presentFromViewController:(id)arg1;
- (_Bool)_considerClosingAdSpace;
- (void)_notifyDelegateOfBannerLoad;
- (_Bool)presentInView:(id)arg1;
- (int)clickAction;
- (void)_dismissModalInterstitial;
- (void)missedOpportunityToFill;

@end
