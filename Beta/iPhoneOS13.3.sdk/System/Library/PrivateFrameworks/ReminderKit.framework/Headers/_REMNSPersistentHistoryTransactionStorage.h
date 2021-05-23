/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSArray, NSDate, NSString, REMNSPersistentHistoryToken, REMObjectID;

@interface _REMNSPersistentHistoryTransactionStorage : NSObject <Swift>

{
    NSDate *_timestamp;
    NSArray *_changes;
    long long _transactionNumber;
    NSString *_storeID;
    NSString *_bundleID;
    NSString *_processID;
    NSString *_contextName;
    NSString *_author;
    REMNSPersistentHistoryToken *_token;
    REMObjectID *_accountID;
}

@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSArray *changes;
@property (nonatomic) long long transactionNumber;
@property (copy, nonatomic) NSString *storeID;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *processID;
@property (copy, nonatomic) NSString *contextName;
@property (copy, nonatomic) NSString *author;
@property (retain, nonatomic) REMNSPersistentHistoryToken *token;
@property (copy, nonatomic) REMObjectID *accountID;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
