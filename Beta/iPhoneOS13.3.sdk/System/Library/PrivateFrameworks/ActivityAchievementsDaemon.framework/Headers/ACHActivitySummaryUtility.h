/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class HDActivitySummaryBuilder, HDDatabaseTransactionContext, HDProfile;

@interface ACHActivitySummaryUtility : NSObject

{
    HDProfile *_profile;
    HDActivitySummaryBuilder *_summaryBuilder;
}

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDActivitySummaryBuilder *summaryBuilder;
@property (copy, nonatomic) HDDatabaseTransactionContext *databaseContext;

- (void)enumerateActivitySummariesForDateComponentInterval:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)_enumerateActivitySummariesForDateComponentInterval:(id)arg1 handler:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)initWithProfile:(id)arg1 shouldIncludePrivateProperties:(_Bool)arg2;
- (id)newEmptyActivitySummaryFromSummary:(id)arg1;

@end
