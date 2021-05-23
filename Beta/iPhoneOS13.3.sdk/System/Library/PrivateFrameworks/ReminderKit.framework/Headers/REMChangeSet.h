/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSArray, NSError;

@interface REMChangeSet : NSObject <Swift>

{
    _Bool _isTruncated;
    _Bool _filterByTransactionAuthorsIsExclusion;
    NSArray *_transactions;
    NSArray *_inserts;
    NSArray *_updates;
    NSArray *_deletes;
    NSError *_error;
    NSArray *_filterByTransactionAuthorStrings;
    NSArray *_unfilteredTransactions;
}

@property (retain, nonatomic) NSError *error;
@property (nonatomic) _Bool isTruncated;
@property (retain, nonatomic) NSArray *inserts;
@property (retain, nonatomic) NSArray *updates;
@property (retain, nonatomic) NSArray *deletes;
@property (retain, nonatomic) NSArray *filterByTransactionAuthorStrings;
@property (nonatomic) _Bool filterByTransactionAuthorsIsExclusion;
@property (retain, nonatomic) NSArray *unfilteredTransactions;
@property (nonatomic, readonly) NSArray *transactions;

+ (_Bool)supportsSecureCoding;
+ (id)errorChangeSetWithError:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithChangeTransactions:(id)arg1 unfilteredTransactions:(id)arg2;
- (_Bool)_flattenAndConsolidateChanges;
- (id)initWithChangeTransactions:(id)arg1;
- (_Bool)applyFilterByTransactionAuthors:(id)arg1 isExclusion:(_Bool)arg2;
- (_Bool)enumerateChanges:(long long)arg1 forModelsOfClass:(Class)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)lastChangeTokenForAccountID:(id)arg1;

@end
