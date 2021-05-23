/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/REMChangeTransaction.h>

@class _REMNSPersistentHistoryTransactionStorage;

@interface REMNSPersistentHistoryTransaction : REMChangeTransaction

{
    _REMNSPersistentHistoryTransactionStorage *_storage;
}

@property (retain) _REMNSPersistentHistoryTransactionStorage *storage;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)token;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)timestamp;
- (id)changes;
- (id)initWithStorage:(id)arg1;
- (id)author;
- (id)accountID;
- (id)storeID;
- (void)_resolveAccountID:(id)arg1;

@end
