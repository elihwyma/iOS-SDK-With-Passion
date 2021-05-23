/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <Foundation/NSObject.h>

@class CSComponent, NSSet, NSString, UIColor, _UILegibilitySettings;

@protocol CSInterstitialTransitionDelegate;

@interface CSInterstitialTransitionSource : NSObject

{
    long long _participantState;
    id <CSInterstitialTransitionDelegate> _transitioningDelegate;
    long long _transitionType;
    CSComponent *_homeAffordance;
    CDStruct_7238a68f _transitionContext;
}

@property (nonatomic) long long transitionType;
@property (retain, nonatomic) CSComponent *homeAffordance;
@property (weak, nonatomic) id <CSInterstitialTransitionDelegate> transitioningDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *coverSheetIdentifier;
@property (nonatomic, readonly) long long participantState;
@property (nonatomic, readonly, getter=isTransitioning) _Bool transitioning;
@property (nonatomic, readonly) CDStruct_7238a68f transitionContext;
@property (copy, nonatomic, readonly) NSString *appearanceIdentifier;
@property (nonatomic, readonly) long long backgroundStyle;
@property (copy, nonatomic, readonly) NSSet *components;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) long long scrollingStrategy;
@property (nonatomic, readonly) long long notificationBehavior;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (nonatomic, readonly) long long proximityDetectionMode;

- (void)cancelTransition;
- (void)updatePresentationWithProgress:(double)arg1;
- (void)cleanupPresentation;
- (void)prepareForPresentation;

@end
