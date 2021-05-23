/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumber, NSString;

@interface SUScriptApplication : SUScriptObject

@property (readonly, getter=isDelayingTerminate) id delayingTerminate;
@property (readonly, getter=isRunningInStoreDemoMode) id runningInStoreDemoMode;
@property (retain) id iconBadgeNumber;
@property (readonly) NSString *identifier;
@property (readonly) id screenHeight;
@property (readonly) id screenWidth;
@property id statusBarHidden;
@property long long statusBarStyle;
@property (readonly) NSString *version;
@property (readonly, getter=wasLaunchedFromLibrary) id launchedFromLibrary;
@property (readonly) NSNumber *exitStoreReasonButton;
@property (readonly) NSNumber *exitStoreReasonDownloadComplete;
@property (readonly) NSNumber *exitStoreReasonFatalError;
@property (readonly) NSNumber *exitStoreReasonGotoMainStore;
@property (readonly) NSNumber *exitStoreReasonOther;
@property (readonly) NSNumber *exitStoreReasonPurchase;
@property (readonly) long long statusBarAnimationFade;
@property (readonly) long long statusBarAnimationNone;
@property (readonly) long long statusBarAnimationSlide;
@property (readonly) long long statusBarStyleDefault;
@property (readonly) long long statusBarStyleBlackOpaque;
@property (readonly) long long statusBarStyleBlackTranslucent;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)setIdentifier:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)hostIdentifier;
- (void)setStatusBarHidden:(_Bool)arg1 withAnimation:(long long)arg2;
- (void)setStatusBarStyle:(long long)arg1 animated:(_Bool)arg2;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)beginDelayingTerminate;
- (void)endDelayingTerminate;
- (void)exitStoreWithReason:(id)arg1;
- (void)returnToLibrary;
- (void)scrollIconToVisible:(id)arg1 shouldSuspend:(_Bool)arg2;
- (void)showNewsstand;

@end
