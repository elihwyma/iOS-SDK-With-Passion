/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class BKSApplicationStateMonitor, NSCountedSet, NSMutableArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface SFProcessDictionary : NSObject

{
    NSMutableDictionary *_pidToBundleIdentifierMap;
    NSMutableSet *_pidsPendingTermination;
    NSMutableArray *_recentlyReferencedPIDs;
    NSCountedSet *_references;
    BKSApplicationStateMonitor *_stateMonitor;
    NSMutableDictionary *_values;
    unsigned long long _cacheCapacity;
}

@property (nonatomic, readonly) unsigned long long cacheCapacity;

- (id)init;
- (void)dealloc;
- (void)decrementReferenceForPID:(int)arg1;
- (id)incrementReferenceForPID:(int)arg1 bundleIdentifier:(id)arg2 valueCreationBlock:(CDUnknownBlockType)arg3;
- (id)initWithCacheCapacity:(unsigned long long)arg1;
- (void)_handleApplicationStateUpdate:(id)arg1;
- (void)_handleProcessTermination:(int)arg1;
- (void)_removeValueForPID:(id)arg1;
- (void)_updateInterestedApplications;
- (void)_removeUnreferencedObjectsIfNeeded;

@end
