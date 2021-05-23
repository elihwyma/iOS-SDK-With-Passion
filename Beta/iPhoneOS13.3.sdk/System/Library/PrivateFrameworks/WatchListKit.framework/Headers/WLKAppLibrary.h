/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@protocol OS_dispatch_queue;

@interface WLKAppLibrary : NSObject

{
    NSDictionary *_appProxies;
    NSArray *_allAppBundleIdentifiers;
    NSArray *_installedAppBundleIdentifiers;
    NSArray *_subscribedAppBundleIdentifiers;
    NSArray *_testAppBundleIdentifiers;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_refreshQueue;
    _Bool _appLibraryNeedsRefresh;
    long long _ignoreAppLibraryChangesCount;
    int _didChangeNotificationToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultAppLibrary;

- (id)init;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (id)refresh;
- (id)allAppBundleIdentifiers;
- (void)beginIgnoringAppLibraryChanges;
- (void)endIgnoringAppLibraryChanges;
- (id)localizedNameForBundle:(id)arg1;
- (id)subscribedAppBundleIdentifiers;
- (id)subscriptionInfoForBundle:(id)arg1;
- (_Bool)isTVAppInstalled;
- (id)_refreshAppLibrary;
- (void)_subscriptionsDidChangeNotification:(id)arg1;
- (id)installedAppBundleIdentifiers;
- (id)_bundleIdentifiersfromProxies:(id)arg1;
- (void)_handleInvalidationWithReason:(id)arg1;
- (id)testAppBundleIdentifiers;
- (id)installedAppProxies;
- (id)subscribedAppProxies;
- (id)testAppProxies;
- (id)allAppProxies;

@end
