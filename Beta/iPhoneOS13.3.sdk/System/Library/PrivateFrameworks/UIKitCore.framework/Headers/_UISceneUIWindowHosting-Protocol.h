/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UIScreen, UITraitCollection;

@protocol UICoordinateSpace;

@protocol _UISceneUIWindowHosting <Swift>

@property (nonatomic, readonly) UIScreen *_screen;
@property (nonatomic, readonly) long long _interfaceOrientation;
@property (nonatomic, readonly) id <UICoordinateSpace> _coordinateSpace;
@property (nonatomic, readonly) UITraitCollection *_traitCollection;

+ (unsigned short)_hostsWindows;

- (unsigned short)_allWindowsIncludingInternalWindows:onlyVisibleWindows: /* Error: Ran out of types for this method. */;
- (unsigned short)_attachWindow: /* Error: Ran out of types for this method. */;
- (unsigned short)_detachWindow: /* Error: Ran out of types for this method. */;
- (unsigned short)_updateVisibleWindowOrderWithTest: /* Error: Ran out of types for this method. */;
- (unsigned short)_windowUpdatedVisibility: /* Error: Ran out of types for this method. */;
- (unsigned short)_windowUpdatedProperties: /* Error: Ran out of types for this method. */;

@end
