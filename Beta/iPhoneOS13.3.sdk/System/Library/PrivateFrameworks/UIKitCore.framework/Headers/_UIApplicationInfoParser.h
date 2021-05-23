/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _UIApplicationInfoParser : NSObject

{
    _Bool _isYukonLinked;
    _Bool _isExitsOnSuspend;
    _Bool _canChangeBackgroundStyle;
    _Bool _statusBarHidden;
    _Bool _statusBarHiddenWhenVerticallyCompact;
    _Bool _systemWindowsSecure;
    _Bool _optOutOfRTL;
    _Bool _disableLayoutAwareShortcuts;
    _Bool _requiresHighResolution;
    _Bool _fakingRequiresHighResolution;
    _Bool _supportsMultiwindow;
    _Bool _supportedOnLockScreen;
    int _ignoredOverrides;
    long long _requestedStatusBarStyle;
    long long _interfaceOrientation;
    long long _launchingInterfaceOrientationForSpringBoard;
    unsigned long long _supportedInterfaceOrientations;
    long long _backgroundStyle;
    long long _whitePointAdaptivityStyle;
    unsigned long long _viewControllerBasedStatusBarAppearance;
    NSString *_launchImageFile;
    NSArray *_canvasDefinitions;
    NSDictionary *_sceneConfigurations;
    long long _supportedUserInterfaceStyle;
}

@property (nonatomic, readonly) long long requestedStatusBarStyle;
@property (nonatomic, readonly) long long interfaceOrientation;
@property (nonatomic, readonly) long long launchingInterfaceOrientationForSpringBoard;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) long long backgroundStyle;
@property (nonatomic, readonly) int ignoredOverrides;
@property (nonatomic, readonly) long long whitePointAdaptivityStyle;
@property (nonatomic, readonly) unsigned long long viewControllerBasedStatusBarAppearance;
@property (copy, nonatomic, readonly) NSString *launchImageFile;
@property (nonatomic, readonly) _Bool isExitsOnSuspend;
@property (nonatomic, readonly) _Bool canChangeBackgroundStyle;
@property (nonatomic, readonly) _Bool statusBarHidden;
@property (nonatomic, readonly) _Bool statusBarHiddenWhenVerticallyCompact;
@property (nonatomic, readonly) _Bool systemWindowsSecure;
@property (nonatomic, readonly) _Bool optOutOfRTL;
@property (nonatomic, readonly) _Bool disableLayoutAwareShortcuts;
@property (nonatomic, readonly) _Bool requiresHighResolution;
@property (nonatomic, readonly) _Bool fakingRequiresHighResolution;
@property (nonatomic, readonly) _Bool supportsMultiwindow;
@property (copy, nonatomic, readonly) NSArray *canvasDefinitions;
@property (copy, nonatomic, readonly) NSDictionary *sceneConfigurations;
@property (nonatomic, readonly) _Bool supportedOnLockScreen;
@property (nonatomic, readonly) long long supportedUserInterfaceStyle;

- (id)initWithApplicationProxy:(id)arg1;
- (id)_initWithApplicationPlistData:(id)arg1;
- (void)_computeSupportedInterfaceOrientationsWithInfo:(id)arg1;
- (void)_computeSupportedUserInterfaceStyleFromInfo:(id)arg1;
- (id)initWithbundle:(id)arg1;
- (_Bool)_isLinkedOnOrAfterYukon;

@end
