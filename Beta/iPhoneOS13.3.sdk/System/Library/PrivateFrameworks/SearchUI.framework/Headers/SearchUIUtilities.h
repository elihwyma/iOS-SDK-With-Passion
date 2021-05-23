/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <Foundation/NSObject.h>

@interface SearchUIUtilities : NSObject

+ (void)initialize;
+ (id)localizedStringForKey:(id)arg1;
+ (void)dispatchMainIfNecessary:(CDUnknownBlockType)arg1;
+ (_Bool)isWideScreen;
+ (double)onePixelForCurrentScreenResolution;
+ (struct CGSize)maxThumbnailSize;
+ (double)standardTableCellContentInset;
+ (void)performAnimatableChanges:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
+ (void)performAnimatableChanges:(CDUnknownBlockType)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)dispatchAsyncIfNecessary:(CDUnknownBlockType)arg1;
+ (_Bool)deviceSupportsRotation;
+ (void)performAnimatableChanges:(CDUnknownBlockType)arg1;
+ (_Bool)resultBlockedForScreenTime:(id)arg1;
+ (id)pointerKeyMapTable;
+ (_Bool)deviceIsAuthenticated;
+ (void)openPunchout:(id)arg1;
+ (_Bool)resultIsSiriAction:(id)arg1;
+ (_Bool)isLargeIpad;
+ (_Bool)isPortraitForWindow:(id)arg1;
+ (void)openApplicationWithBundleIdentifier:(id)arg1;
+ (void)presentViewController:(id)arg1 withFeedbackDelegate:(id)arg2 fromView:(id)arg3;
+ (id)bundleIdentifierForApp:(unsigned long long)arg1;
+ (id)openOptions;
+ (void)performOpenTask:(CDUnknownBlockType)arg1;
+ (id)sendFeedbackForPunchout:(id)arg1 toListener:(id)arg2 fromCardSection:(id)arg3 triggerEvent:(unsigned long long)arg4 queryId:(unsigned long long)arg5;
+ (_Bool)shouldHandleCardSectionEngagement:(id)arg1 feedbackListener:(id)arg2;
+ (void)requestDeviceUnlock:(CDUnknownBlockType)arg1;
+ (id)stringForSFRichText:(id)arg1;
+ (_Bool)bundleIdentifierIsBlockedForScreenTimeExpiration:(id)arg1;
+ (id)uiColorForSFColor:(id)arg1;
+ (_Bool)backgroundColorPrefersWhiteForegroundText:(id)arg1;
+ (id)hyphenatableStringForString:(id)arg1;
+ (id)addAspectRatioConstraintForImageView:(id)arg1;
+ (void)openUserActivity:(id)arg1 applicationBundleIdentifier:(id)arg2;
+ (void)openPunchout:(id)arg1 fromCardSection:(id)arg2 toListener:(id)arg3 triggerEvent:(unsigned long long)arg4 queryId:(unsigned long long)arg5;
+ (void)requestDeviceUnlockWithSuccessHandler:(CDUnknownBlockType)arg1;
+ (void)playNegativeHaptic;
+ (id)stringForSFRichTextArray:(id)arg1;
+ (_Bool)appIsValidForBundleIdentifier:(id)arg1;
+ (id)imageForBlockedApp;
+ (void)fetchURLForFileResult:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
