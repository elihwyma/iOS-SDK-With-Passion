/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSSet;

@protocol REMChangeTrackingClientIdentifying, REMDaemonController;

@interface REMChangeTracking : NSObject

{
    id <REMChangeTrackingClientIdentifying> _changeTrackingClientID;
    id <REMDaemonController> _daemonController;
    NSSet *_transactionAuthorKeysToExclude;
}

@property (nonatomic, readonly) NSSet *transactionAuthorKeysToExclude;
@property (nonatomic, readonly) id <REMChangeTrackingClientIdentifying> changeTrackingClientID;
@property (nonatomic, readonly) id <REMDaemonController> daemonController;

+ (id)internalTransactionAuthorKeysToExclude;
+ (id)defaultTransactionAuthorKeysToExclude;
+ (id)entityNamesToIncludeFromTrackingWithOptionProvider:(Class)arg1;

- (id)initWithClientID:(id)arg1 daemonController:(id)arg2 transactionAuthorKeysToExclude:(id)arg3;
- (id)initWithClientID:(id)arg1 daemonController:(id)arg2;
- (void)_performChangeTrackingWithReason:(id)arg1 block:(CDUnknownBlockType)arg2 xpcErrorHandler:(CDUnknownBlockType)arg3;
- (id)changeSetByFilteringTransactionAuthorKeysToExcludeFromChangeSet:(id)arg1;
- (id)currentChangeTokenForAllAccountsWithError:(id *)arg1;
- (id)currentChangeTokenForAccountTypes:(long long)arg1 error:(id *)arg2;
- (id)currentChangeTokenWithError:(id *)arg1;
- (id)getTrackingStateWithError:(id *)arg1;
- (void)saveTrackingState:(id)arg1 error:(id *)arg2;
- (id)fetchHistoryAfterToken:(id)arg1 error:(id *)arg2;
- (id)fetchHistoryAfterDate:(id)arg1 error:(id *)arg2;
- (void)deleteHistoryBeforeToken:(id)arg1 error:(id *)arg2;
- (void)deleteHistoryBeforeDate:(id)arg1 error:(id *)arg2;
- (id)persistenceStoreIDForAccountID:(id)arg1 error:(id *)arg2;
- (id)fetchAuxiliaryChangeInfosOfType:(Class)arg1 withChangeObject:(id)arg2 error:(id *)arg3;

@end
