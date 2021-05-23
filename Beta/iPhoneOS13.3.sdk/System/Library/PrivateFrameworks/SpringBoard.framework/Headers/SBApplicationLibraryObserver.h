/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBSApplicationLibrary, NSArray, NSHashTable, NSMutableDictionary, NSMutableSet, NSString, SBSplashBoardController;

@protocol OS_dispatch_queue;

@interface SBApplicationLibraryObserver : NSObject

{
    SBSplashBoardController *_splashBoardController;
    FBSApplicationLibrary *_appLibrary;
    NSMutableSet *_suspendCalloutsAssertionReasons;
    NSObject<OS_dispatch_queue> *_mainQueueProxy;
    NSMutableDictionary *_placeholdersByBundleID;
    NSHashTable *_applicationObservers;
    NSHashTable *_placeholderObservers;
}

@property (copy, nonatomic, readonly) NSArray *placeholders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)initWithAppLibrary:(id)arg1;
- (void)addApplicationLifecycleObserver:(id)arg1;
- (id)suspendCalloutsAssertionWithReason:(id)arg1;
- (void)_didUpdateApplications:(id)arg1;
- (void)_didAddPlaceholders:(id)arg1;
- (void)_didCancelPlaceholders:(id)arg1;
- (void)_didAddApplications:(id)arg1;
- (void)_didReplaceApplications:(id)arg1;
- (void)_didRemoveApplications:(id)arg1;
- (void)_didDemoteApplications:(id)arg1;
- (void)_didChangeNetworkUsage:(_Bool)arg1;
- (void)_addObserver:(id)arg1 table:(id)arg2;
- (void)_removeObserver:(id)arg1 table:(id)arg2;
- (void)_waitForLaunchImageGenerationForApplications:(id)arg1;
- (void)removeApplicationLifecycleObserver:(id)arg1;
- (void)addPlaceholderLifecycleObserver:(id)arg1;
- (void)removePlaceholderLifecycleObserver:(id)arg1;

@end
