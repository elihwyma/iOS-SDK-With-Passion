/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class BSMonotonicReferenceTime, NSArray, NSNumber, NSString, NSURL, SBSApplicationShortcutService, SBSApplicationShortcutServiceFetchResult;

@interface SBFApplication : NSObject

{
    SBSApplicationShortcutService *_applicationShortcutService;
    SBSApplicationShortcutServiceFetchResult *_applicationShortcutServiceFetchResult;
    BSMonotonicReferenceTime *_applicationShortcutServiceFetchResultExpirationReferenceTime;
    _Bool _systemOrInternalApplication;
    NSString *_applicationBundleIdentifier;
    NSString *_displayName;
    NSURL *_bundleURL;
    NSNumber *_appStoreItemID;
    NSString *_applicationShortcutWidgetBundleIdentifier;
}

@property (nonatomic, readonly) NSString *applicationBundleIdentifier;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly, getter=isSystemOrInternalApplication) _Bool systemOrInternalApplication;
@property (nonatomic, readonly) NSNumber *appStoreItemID;
@property (nonatomic, readonly) NSString *applicationShortcutWidgetBundleIdentifier;
@property (nonatomic, readonly) NSArray *staticApplicationShortcutItems;
@property (nonatomic, readonly) NSArray *dynamicApplicationShortcutItems;

- (id)init;
- (void)dealloc;
- (id)initWithApplicationBundleIdentifier:(id)arg1;
- (void)_updateApplicationShortcutServiceFetchResult;

@end
