/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogAccounting/PLAccountingQualificationEventEntry.h>

@interface PLAccountingQualificationEventBackwardEntry : PLAccountingQualificationEventEntry

+ (void)load;
+ (id)entryKey;
+ (int)classDirectionality;

- (id)initWithQualificationID:(id)arg1 withChildNodeNames:(id)arg2 withEndDate:(id)arg3;

@end
