/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <DoNotDisturbServer/DNDSModeAssertionStore.h>

@class NSArray;

@interface DNDSMutableModeAssertionStore : DNDSModeAssertionStore

@property (copy, nonatomic) NSArray *assertions;
@property (copy, nonatomic) NSArray *invalidations;
@property (copy, nonatomic) NSArray *invalidationRequests;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)sanitizeDatesForThreshold:(id)arg1;
- (void)filterForSyncToPairedDevice:(id)arg1 clientDetailsProvider:(id)arg2;
- (void)unresolveSourcesForSyncToPairedDevice:(id)arg1;
- (void)resolveSourcesForSyncFromPairedDevice:(id)arg1;

@end
