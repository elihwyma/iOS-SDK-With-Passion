/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDAssertion, HDSyncPredicate, NSCalendar, NSDate, NSString, NSUUID;

@protocol HDSyncSessionDelegate, HDSyncStore;

@interface HDSyncSession : NSObject

{
    id <HDSyncSessionDelegate> _delegate;
    id <HDSyncStore> _syncStore;
    NSUUID *_sessionUUID;
    NSDate *_startDate;
    NSCalendar *_calendar;
    NSString *_reason;
    HDAssertion *_databaseAccessibilityAssertion;
    double _databaseAccessibilityTimeout;
}

@property (weak, nonatomic, readonly) id <HDSyncSessionDelegate> delegate;
@property (nonatomic, readonly) id <HDSyncStore> syncStore;
@property (copy, nonatomic, readonly) NSUUID *sessionUUID;
@property (copy, nonatomic, readonly) NSDate *startDate;
@property (copy, nonatomic, readonly) NSCalendar *calendar;
@property (copy, nonatomic, readonly) NSString *reason;
@property (retain, nonatomic) HDAssertion *databaseAccessibilityAssertion;
@property (nonatomic) double databaseAccessibilityTimeout;
@property (copy, nonatomic, readonly) HDSyncPredicate *syncPredicate;

- (id)init;
- (id)description;
- (long long)maxEncodedBytesPerMessageForSyncEntityClass:(Class)arg1;
- (id)initWithSyncStore:(id)arg1 reason:(id)arg2 delegate:(id)arg3;
- (id)newChangeWithSyncEntityClass:(Class)arg1;
- (_Bool)transactionDidEndWithError:(id *)arg1;
- (id)excludedSyncStores;
- (void)syncWillBegin;
- (_Bool)syncDidBeginWithProfile:(id)arg1 error:(id *)arg2;
- (void)sendChanges:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)syncDidFinishWithSuccess:(_Bool)arg1 error:(id)arg2;

@end
