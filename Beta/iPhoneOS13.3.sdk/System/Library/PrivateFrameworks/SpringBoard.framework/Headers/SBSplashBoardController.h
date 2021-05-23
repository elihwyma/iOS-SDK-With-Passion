/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SplashBoard/XBApplicationController.h>

@interface SBSplashBoardController : XBApplicationController

+ (void)setAppLibrary:(id)arg1;

- (id)_allApplicationsFilteredBySystem:(_Bool)arg1 bySplashBoard:(_Bool)arg2;
- (id)launchRequestsForApplication:(id)arg1 withCompatibilityInfo:(id)arg2;

@end
