/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXFrontBoardUtils.framework/AXFrontBoardUtils
 */

#import <FrontBoard/FBScene.h>

@interface FBScene (AXExtras)

- (id)accessibilitySceneIdentifier;
- (struct CGRect)accessibilitySceneFrame;
- (_Bool)accessibilitySceneOwnerIsAUIApplication;
- (_Bool)accessibilityIsSceneOnMainScreen;
- (id)accessibilitySceneProcess;
- (_Bool)accessibilityIsSceneOnCarScreen;
- (_Bool)accessibilitySceneBelongsToTheSystemApp;
- (_Bool)accessibilitySceneIsDeactivatedBySidebar;
- (_Bool)accessibilitySceneIsDeactivatedBySwitcher;
- (_Bool)accessibilitySceneIsForegroundVisible;
- (id)accessibilityScenePID;
- (double)accessibilitySceneLevel;
- (_Bool)accessibilityIsSceneOccluded;
- (_Bool)accessibilitySceneIsRunningInForeground;
- (id)accessibilitySceneDescription;
- (_Bool)accessibilitySceneIsSuspended;

@end
