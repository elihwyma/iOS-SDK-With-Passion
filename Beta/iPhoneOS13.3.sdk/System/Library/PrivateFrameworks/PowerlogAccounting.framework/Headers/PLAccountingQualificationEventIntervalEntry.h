/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogAccounting/PLAccountingQualificationEventEntry.h>

@interface PLAccountingQualificationEventIntervalEntry : PLAccountingQualificationEventEntry

+ (void)load;
+ (id)entryKey;
+ (int)classDirectionality;

- (id)initWithQualificationID:(id)arg1 withChildNodeIDs:(id)arg2 withStartDate:(id)arg3 withEndDate:(id)arg4;
- (id)initWithQualificationID:(id)arg1 withChildNodeNames:(id)arg2 withStartDate:(id)arg3 withEndDate:(id)arg4;

@end
