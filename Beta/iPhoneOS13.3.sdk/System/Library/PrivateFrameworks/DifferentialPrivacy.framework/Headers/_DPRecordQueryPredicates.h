/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@interface _DPRecordQueryPredicates : NSObject

+ (void)initialize;
+ (id)predicateForKey:(id)arg1;
+ (id)predicateForRecordsWithVersionMismatch;
+ (id)predicateForRecordsSubmitted;
+ (id)predicateForAllRecords;
+ (id)predicateForRecordsOlderThan:(id)arg1;
+ (id)entityForKey:(id)arg1;
+ (id)predicateForRecordsNotSubmittedForKeyBeginsWith:(id)arg1;
+ (id)predicateForRecordsNotSubmittedForKey:(id)arg1;
+ (id)predicateForKey:(id)arg1 beginsWith:(_Bool)arg2 submitted:(_Bool)arg3 matchReportVersion:(_Bool)arg4;
+ (id)predicateForKey:(id)arg1 beginsWith:(_Bool)arg2 matchReportVersion:(_Bool)arg3;
+ (id)predicateForRecordsNotSubmitted;
+ (id)predicateForKeyBeginsWith:(id)arg1;
+ (id)predicateForRecordsInDateRangeStart:(id)arg1 end:(id)arg2;
+ (id)predicateForRecordsSubmittedForKey:(id)arg1;
+ (id)predicateForRecordsMatchingKey:(id)arg1;

@end
