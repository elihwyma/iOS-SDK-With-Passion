/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface HDDiagnosticManager : NSObject

{
    NSHashTable *_objects;
    struct os_unfair_lock_s _lock;
}

+ (id)sharedDiagnosticManager;

- (id)init;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)logAllDiagnostics;
- (id)_diagnosticsForKeys:(id)arg1 shouldLog:(_Bool)arg2;
- (id)_diagnosticsOverview;
- (id)diagnosticsForKeys:(id)arg1;

@end
