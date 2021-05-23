/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <FrontBoardServices/FBSApplicationInfo.h>

@class NSArray, NSString, _UIApplicationInfoParser;

@interface _UIApplicationInfo : FBSApplicationInfo

{
    long long _launchingInterfaceOrientation;
    _UIApplicationInfoParser *_plistParser;
    NSArray *_lazy_folderNames;
    NSString *_lazy_fallbackFolderName;
    _Bool _canChangeBackgroundStyle;
    _Bool _statusBarHidden;
    _Bool _statusBarHiddenWhenVerticallyCompact;
    _Bool _systemWindowsSecure;
    _Bool _optOutOfRTL;
    _Bool _requiresHighResolution;
    _Bool _fakingRequiresHighResolution;
    int _ignoredOverrides;
    long long _requestedStatusBarStyle;
    long long _backgroundStyle;
    NSString *_launchImageFile;
    long long _supportedUserInterfaceStyle;
    unsigned long long _viewControllerBasedStatusBarAppearance;
    long long _whitePointAdaptivityStyle;
}

@property (nonatomic, readonly) int ignoredOverrides;
@property (nonatomic, readonly) unsigned long long viewControllerBasedStatusBarAppearance;
@property (nonatomic, readonly) _Bool systemWindowsSecure;
@property (nonatomic, readonly) _Bool optOutOfRTL;
@property (nonatomic, readonly) long long whitePointAdaptivityStyle;
@property (nonatomic, readonly) _Bool requiresHighResolution;
@property (nonatomic, readonly) _Bool fakingRequiresHighResolution;
@property (nonatomic, readonly) long long requestedStatusBarStyle;
@property (nonatomic, readonly) _Bool canChangeBackgroundStyle;
@property (nonatomic, readonly) long long backgroundStyle;
@property (nonatomic, readonly) _Bool statusBarHidden;
@property (nonatomic, readonly) _Bool statusBarHiddenWhenVerticallyCompact;
@property (copy, nonatomic, readonly) NSString *launchImageFile;
@property (nonatomic, readonly) long long supportedUserInterfaceStyle;
@property (nonatomic, readonly) NSArray *folderNames;
@property (nonatomic, readonly) NSString *fallbackFolderName;

+ (id)_localizedFolderNameForName:(id)arg1;
+ (id)_genreNameForID:(long long)arg1;

- (void)_loadFromProxy:(id)arg1;
- (void)_lock_loadFolderNamesIfNecessary;
- (_Bool)statusBarForcedHiddenForInterfaceOrientation:(long long)arg1 onDisplay:(id)arg2 withUserInterfaceIdiom:(long long)arg3;
- (_Bool)statusBarHiddenForInterfaceOrientation:(long long)arg1 onDisplay:(id)arg2 withUserInterfaceIdiom:(long long)arg3;
- (_Bool)statusBarHiddenForInterfaceOrientation:(long long)arg1 onDisplay:(id)arg2;
- (_Bool)statusBarForcedHiddenForInterfaceOrientation:(long long)arg1 onDisplay:(id)arg2;
- (long long)_launchingInterfaceOrientation;

@end
