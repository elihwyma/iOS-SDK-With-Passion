/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/_REMFetchExecutor.h>

@class NSArray, REMListPredicateDescriptor;

@interface REMListFetchExecutor : _REMFetchExecutor

{
    REMListPredicateDescriptor *_predicateDescriptor;
    NSArray *_sortDescriptors;
    unsigned long long _options;
}

@property (retain, nonatomic) REMListPredicateDescriptor *predicateDescriptor;
@property (retain, nonatomic) NSArray *sortDescriptors;
@property (nonatomic, readonly) unsigned long long options;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)resultsFromFetchResult:(id)arg1 inStore:(id)arg2 error:(id *)arg3;
- (id)initWithPredicateDescriptor:(id)arg1 sortDescriptors:(id)arg2 options:(unsigned long long)arg3;
- (id)resultsFromFetchResult:(id)arg1 inAccount:(id)arg2 error:(id *)arg3;
- (id)resultsFromFetchResult:(id)arg1 inParentList:(id)arg2 error:(id *)arg3;

@end
