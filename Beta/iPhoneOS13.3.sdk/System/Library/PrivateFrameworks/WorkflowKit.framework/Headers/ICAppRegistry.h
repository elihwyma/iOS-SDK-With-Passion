/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class ICApp, NSArray, NSDictionary, NSLock, NSMutableDictionary;

@interface ICAppRegistry : NSObject

{
    _Bool _isFilled;
    int _urlTypesToken;
    ICApp *_currentApp;
    NSLock *_registryLock;
    NSDictionary *_appsDictionary;
    NSDictionary *_actions;
    NSLock *_observersLock;
    NSMutableDictionary *_observersByIdentifier;
}

@property (retain, nonatomic) NSLock *registryLock;
@property (retain, nonatomic) NSDictionary *appsDictionary;
@property (retain, nonatomic) NSDictionary *actions;
@property (retain, nonatomic) NSLock *observersLock;
@property (retain, nonatomic) NSMutableDictionary *observersByIdentifier;
@property (nonatomic) int urlTypesToken;
@property (nonatomic, readonly) NSArray *apps;
@property (nonatomic, readonly) ICApp *currentApp;
@property (nonatomic, readonly) NSArray *allActions;
@property (nonatomic, readonly) _Bool isFilled;

+ (id)sharedRegistry;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)currentVersion;
- (void)updateCache:(CDUnknownBlockType)arg1;
- (id)cacheURL;
- (id)appWithIdentifier:(id)arg1;
- (id)appWithBundleIdentifier:(id)arg1;
- (void)deleteCache;
- (id)cacheDirectoryURL;
- (id)bundledURL;
- (id)_appsWithIdentifiers:(id)arg1;
- (id)appsWithIdentifiers:(id)arg1;
- (id)appWithURLScheme:(id)arg1;
- (id)actionsWithIdentifiers:(id)arg1;
- (id)identifierForAppWithBundleIdentifier:(id)arg1;
- (void)updateRegistry;
- (void)fillRegistry;
- (void)addInstallStatusObserver:(id)arg1 forAppIdentifiers:(id)arg2;
- (void)removeInstallStatusObserver:(id)arg1 forAppIdentifiers:(id)arg2;
- (void)refreshInstalledApps;

@end
