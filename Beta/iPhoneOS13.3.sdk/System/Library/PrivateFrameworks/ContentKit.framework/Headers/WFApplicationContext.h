/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSBundle, NSLock, NSMutableDictionary, NSString;

@protocol WFApplicationContextProvider;

@interface WFApplicationContext : NSObject

{
    _Bool _canLoadShortcutsDatabase;
    _Bool _inactive;
    _Bool _inBackground;
    _Bool _canLoadShortcutsDatabaseEntitlementChecked;
    id <WFApplicationContextProvider> _provider;
    NSBundle *_applicationBundle;
    NSMutableDictionary *_applicationStateObserversByEvent;
    NSLock *_observersLock;
}

@property (retain, nonatomic) NSMutableDictionary *applicationStateObserversByEvent;
@property (nonatomic, readonly) NSLock *observersLock;
@property (nonatomic) _Bool inactive;
@property (nonatomic) _Bool inBackground;
@property (nonatomic) _Bool canLoadShortcutsDatabaseEntitlementChecked;
@property (retain, nonatomic) id <WFApplicationContextProvider> provider;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) NSBundle *applicationBundle;
@property (nonatomic, readonly) NSString *currentUserInterfaceType;
@property (nonatomic, readonly) _Bool canLoadShortcutsDatabase;
@property (nonatomic, readonly) _Bool shouldReverseLayoutDirection;
@property (nonatomic, readonly) long long applicationState;
@property (nonatomic, getter=isIdleTimerDisabled) _Bool idleTimerDisabled;
@property (nonatomic, readonly) NSArray *applicationBundleURLSchemes;

+ (id)sharedContext;
+ (id)imageNamed:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openURL:(id)arg1;
- (id)keyWindow;
- (_Bool)canOpenURL:(id)arg1;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)removeApplicationStateObserver:(id)arg1 forEvent:(long long)arg2;
- (void)addApplicationStateObserver:(id)arg1 forEvent:(long long)arg2;
- (void)openURL:(id)arg1 withBundleIdentifier:(id)arg2 userInterface:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)applicationOrNil;
- (void)handleApplicationStateEvent:(long long)arg1;
- (void)openURL:(id)arg1 userInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
