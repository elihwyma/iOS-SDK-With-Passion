/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class BKSApplicationStateMonitor, NSMapTable, NSMutableDictionary;

@interface DAPriorityManager : NSObject

{
    int _currentPriority;
    NSMapTable *_clientsToPriorityRequests;
    BKSApplicationStateMonitor *_appStateMonitor;
    NSMutableDictionary *_cachedAppState;
    long long _foregroundDataclasses;
}

@property (retain, nonatomic) NSMapTable *clientsToPriorityRequests;
@property (retain, nonatomic) BKSApplicationStateMonitor *appStateMonitor;
@property (retain, nonatomic) NSMutableDictionary *cachedAppState;
@property (nonatomic) long long foregroundDataclasses;
@property (nonatomic, readonly) int currentPriority;

+ (id)sharedManager;
+ (void)vendPriorityManagers;

- (id)init;
- (void)dealloc;
- (void)_applicationStateChanged:(id)arg1;
- (id)stateString;
- (void)bumpDataclassesToUIPriority:(long long)arg1;
- (void)requestPriority:(int)arg1 forClient:(id)arg2 dataclasses:(long long)arg3;
- (void)_updateForegroundDataclasses;
- (id)appIDsToDataclasses;
- (void)_setNewPriority;
- (int)_recalculatePriority;
- (void)_setForegroundDataclasses:(long long)arg1;

@end
