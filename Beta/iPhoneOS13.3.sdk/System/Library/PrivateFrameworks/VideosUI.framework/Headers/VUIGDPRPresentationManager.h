/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class IKAppContext, UINavigationController;

@interface VUIGDPRPresentationManager : NSObject

{
    UINavigationController *_navigationController;
    IKAppContext *_appContext;
}

@property (retain, nonatomic) UINavigationController *navigationController;
@property (weak, nonatomic) IKAppContext *appContext;

+ (id)_sharedInstance;
+ (_Bool)shouldShowWelcomeScreen;
+ (void)acceptGDPRAndSyncWithServers:(CDUnknownBlockType)arg1;
+ (_Bool)showGDPRWelcomeScreen:(id)arg1;
+ (void)showOfflineGDPRWelcomeScreen;

- (_Bool)isShowing;
- (void)_showIOSWelcomeControllerWithAppContext:(id)arg1 offline:(_Bool)arg2;
- (void)_handleOfflineContinueButton;
- (void)_handleContinueButton;
- (void)_dismissAllModalsIfPresent:(id)arg1;

@end
