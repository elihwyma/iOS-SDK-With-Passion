/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface CKAppInstallationWatcher : NSObject

{
    _Bool _observingApplicationWorkspace;
    NSMutableArray *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_installations;
}

@property (retain, nonatomic) NSMutableArray *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *installations;
@property (nonatomic, readonly) NSArray *inProgressInstallations;
@property (nonatomic) _Bool observingApplicationWorkspace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)applicationInstallsDidUpdateIcon:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidFailToInstall:(id)arg1;
- (id)_applicationWorkspace;
- (void)fetchAllAppInstallations:(CDUnknownBlockType)arg1;
- (void)startListeningForAppBundleIdentifier:(id)arg1;
- (void)_loadBundleIdentifiersFromDiskLocked;
- (void)_callDelegateAsynchronouslyWithProgressForAppInstallation:(id)arg1 added:(_Bool)arg2 updated:(_Bool)arg3;
- (void)_updateObservingApplicationWorkspaceLocked;
- (void)_saveBundleIdentifiersToDiskLocked;
- (void)_updateAppProgressWithKnownChangedProxiesLocked:(id)arg1;
- (void)_updateAppProgressWithKnownChangedProxies:(id)arg1;

@end
