//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDate, NSString, REMNSPersistentHistoryToken, REMObjectID;

@interface _REMNSPersistentHistoryTransactionStorage : NSObject <NSSecureCoding>
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

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) REMObjectID *accountID; // @synthesize accountID=_accountID;
@property(retain, nonatomic) REMNSPersistentHistoryToken *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(copy, nonatomic) NSString *contextName; // @synthesize contextName=_contextName;
@property(copy, nonatomic) NSString *processID; // @synthesize processID=_processID;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *storeID; // @synthesize storeID=_storeID;
@property(nonatomic) long long transactionNumber; // @synthesize transactionNumber=_transactionNumber;
@property(copy, nonatomic) NSArray *changes; // @synthesize changes=_changes;
@property(copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

