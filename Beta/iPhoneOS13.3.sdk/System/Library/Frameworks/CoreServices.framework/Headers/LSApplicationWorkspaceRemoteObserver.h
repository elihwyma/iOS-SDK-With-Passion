/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSHashTable, NSString, NSUUID;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface LSApplicationWorkspaceRemoteObserver : NSObject

{
    NSUUID *_uuid;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_progressSubscriptionsQueue;
    _Bool _observinglsd;
}

@property (retain, nonatomic) NSUUID *uuid;
@property (getter=isObservinglsd) _Bool observinglsd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)currentObserverCount;
- (void)applicationInstallsDidCancel:(id)arg1;
- (void)applicationInstallsDidPause:(id)arg1;
- (void)applicationInstallsDidPrioritize:(id)arg1;
- (void)applicationInstallsDidResume:(id)arg1;
- (void)networkUsageChanged:(_Bool)arg1;
- (void)pluginsDidInstall:(id)arg1;
- (void)pluginsDidUninstall:(id)arg1;
- (void)pluginsWillUninstall:(id)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)deviceManagementPolicyDidChange:(id)arg1;
- (void)addLocalObserver:(id)arg1;
- (void)removeLocalObserver:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (id)localObservers;
- (void)applicationInstallsDidStart:(id)arg1;
- (_Bool)messageObserversWithSelector:(SEL)arg1 andApps:(id)arg2;
- (void)applicationInstallsDidUpdateIcon:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)applicationsWillUninstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsDidFailToUninstall:(id)arg1;
- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
- (void)applicationIconDidChange:(id)arg1;

@end
