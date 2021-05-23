/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/ICAnalyticsReporterBase.h>

@interface ICUsageAnalyticsReporter : ICAnalyticsReporterBase

+ (id)sharedReporter;
+ (void)clearSharedCollector;
+ (double)percentileOfValue:(double)arg1 givenMaximum:(double)arg2;

- (void)incrementCountForKey:(id)arg1 withSignature:(id)arg2;
- (void)incrementCountForKey:(id)arg1;
- (void)logChecklistLengthFromTrackedToDoParagraphs:(id)arg1;

@end
