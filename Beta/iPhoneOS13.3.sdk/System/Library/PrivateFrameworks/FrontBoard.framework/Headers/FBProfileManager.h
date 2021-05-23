/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSSet;

@protocol OS_dispatch_queue;

@interface FBProfileManager : NSObject

{
    _Bool _started;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSSet *_workQueue_managedApplicationBundleIDs;
    NSMutableDictionary *_workQueue_profilesBySignerIdentity;
}

@property (nonatomic, readonly, getter=isStarted) _Bool started;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_workQueue_reloadProfiles;
- (void)_workQueue_reloadManagedApplicationBundleIDs;
- (void)_managedAppsChangedNotification:(id)arg1;
- (void)startService;
- (_Bool)isManaged:(id)arg1;
- (id)profilesForSignerIdentity:(id)arg1;
- (void)_reloadProfiles;

@end
