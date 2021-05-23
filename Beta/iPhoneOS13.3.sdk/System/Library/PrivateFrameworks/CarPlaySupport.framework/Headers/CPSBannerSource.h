/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <Foundation/NSObject.h>

#import <CarPlaySupport/Swift-Protocol.h>

@class NSMutableArray, NSString, NSTimer, NSUUID, UIView;

@protocol CPSBannerSourceDelegate, SBUIBannerTarget, SBUIBannerView;

@interface CPSBannerSource : NSObject <Swift>

{
    _Bool _applicationActive;
    _Bool _rateLimited;
    id <CPSBannerSourceDelegate> _delegate;
    NSMutableArray *_queuedItems;
    id <SBUIBannerTarget> _bannerTarget;
    UIView<SBUIBannerView> *_displayedBannerView;
    NSTimer *_dimissTimer;
    NSUUID *_lastUserDismissedIdentifier;
    NSTimer *_lastUserDismissedIdentifierResetTimer;
}

@property (retain, nonatomic) NSMutableArray *queuedItems;
@property (weak, nonatomic) id <SBUIBannerTarget> bannerTarget;
@property (weak, nonatomic) UIView<SBUIBannerView> *displayedBannerView;
@property (retain, nonatomic) NSTimer *dimissTimer;
@property (nonatomic, getter=isApplicationActive) _Bool applicationActive;
@property (nonatomic, getter=isRateLimited) _Bool rateLimited;
@property (retain, nonatomic) NSUUID *lastUserDismissedIdentifier;
@property (retain, nonatomic) NSTimer *lastUserDismissedIdentifierResetTimer;
@property (weak, nonatomic) id <CPSBannerSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDelegate:(id)arg1;
- (void)_flushQueue;
- (void)bannerTargetManager:(id)arg1 didAddTarget:(id)arg2;
- (void)bannerTargetManager:(id)arg1 didRemoveTarget:(id)arg2;
- (id)peekNextBannerItemForTarget:(id)arg1;
- (id)dequeueNextBannerItemForTarget:(id)arg1;
- (void)postBannerForManeuver:(id)arg1 travelEstimates:(id)arg2;
- (void)postBannerForNavigationAlert:(id)arg1;
- (void)sceneActivationStateChangedTo:(id)arg1;
- (void)bannerTappedWithIdentifier:(id)arg1;
- (void)_enqueueBannerItem:(id)arg1;
- (void)_resetDismissTimer;
- (void)_resetLastUserDismissedIdentifierTimer;
- (void)_dismissTimerFired:(id)arg1;
- (void)_resetLastUserDismissedIdentifierTimerFired:(id)arg1;
- (id)newBannerViewForContext:(id)arg1;
- (void)bannerViewWillAppear:(id)arg1;
- (void)bannerViewDidAppear:(id)arg1;
- (void)bannerViewWillDismiss:(id)arg1 forReason:(int)arg2;
- (void)bannerViewDidDismiss:(id)arg1 forReason:(int)arg2;

@end
