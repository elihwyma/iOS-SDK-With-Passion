/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIWindow.h>

@interface NTKFaceSnapshottingWindow : UIWindow

+ (_Bool)_isSecure;

- (id)init;
- (_Bool)_isWindowServerHostingManaged;
- (_Bool)_wantsSceneAssociation;
- (_Bool)_alwaysGetsContexts;
- (long long)_orientationForViewTransform;
- (long long)_orientationForRootTransform;
- (_Bool)_shouldUseRemoteContext;
- (void)updateForDevice:(id)arg1;

@end
