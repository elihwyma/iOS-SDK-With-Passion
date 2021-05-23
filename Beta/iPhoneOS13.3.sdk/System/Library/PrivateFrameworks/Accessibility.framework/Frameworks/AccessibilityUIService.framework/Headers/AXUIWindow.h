/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIService.framework/AccessibilityUIService
 */

#import <_UIRootWindow.h>

@interface AXUIWindow : _UIRootWindow

{
    _Bool _isHandlingFullScreenPresentation;
}

@property (nonatomic) _Bool isHandlingFullScreenPresentation;

+ (_Bool)_isSecure;

- (id)description;
- (id)accessibilityLabel;
- (long long)_interfaceOrientationForSceneSafeAreaInsetsIncludingStatusBar:(_Bool)arg1;
- (_Bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)_layerForCoordinateSpaceConversion;
- (struct UIEdgeInsets)_normalizedSafeAreaInsets;
- (_Bool)_accessibilityIsIsolatedWindow;
- (id)_accessibilityElementCommunityIdentifier;

@end
