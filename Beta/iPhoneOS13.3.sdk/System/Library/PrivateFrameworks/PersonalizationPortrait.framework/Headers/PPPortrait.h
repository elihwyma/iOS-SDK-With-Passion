/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <NSObject.h>

@interface PPPortrait : NSObject

+ (unsigned long long)assetVersion;
+ (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
+ (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
+ (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;
+ (_Bool)deleteAllTopicsWithTopicId:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;
+ (id)rankedNamedEntitiesWithQuery:(id)arg1 error:(id *)arg2;
+ (id)namedEntityRecordsWithQuery:(id)arg1 error:(id *)arg2;
+ (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;
+ (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
+ (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
+ (id)rankedTopicsWithQuery:(id)arg1 error:(id *)arg2;
+ (id)topicRecordsWithQuery:(id)arg1 error:(id *)arg2;
+ (void)registerMaintenanceTasks;
+ (void)registerXPCListenerWithStringDonationHandler:(id)arg1;
+ (_Bool)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(_Bool)arg4 error:(id *)arg5;
+ (void)flushNamedEntityDonation;
+ (id)rankedNamedEntitiesWithLimit:(unsigned long long)arg1 error:(id *)arg2;
+ (id)rankedNamedEntitiesWithLimit:(unsigned long long)arg1 sinceDate:(id)arg2 error:(id *)arg3;
+ (id)rankedNamedEntitiesWithLimit:(unsigned long long)arg1 matchingCategory:(unsigned long long)arg2 error:(id *)arg3;
+ (id)rankedNamedEntitiesWithLimit:(unsigned long long)arg1 matchingCategory:(unsigned long long)arg2 sinceDate:(id)arg3 error:(id *)arg4;
+ (id)rankedNamedEntitiesWithLimit:(unsigned long long)arg1 matchingCategory:(unsigned long long)arg2 excludingSourceBundleId:(id)arg3 fromDate:(id)arg4 toDate:(id)arg5 error:(id *)arg6;
+ (id)namedEntityRecordsWithLimit:(unsigned long long)arg1 matchingName:(id)arg2 sinceDate:(id)arg3 error:(id *)arg4;
+ (id)namedEntityRecordsWithLimit:(unsigned long long)arg1 matchingName:(id)arg2 matchingSourceBundleId:(id)arg3 sinceDate:(id)arg4 error:(id *)arg5;
+ (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 error:(id *)arg2;
+ (_Bool)clearNamedEntityStore:(id *)arg1;
+ (id)rankedTopicsWithLimit:(unsigned long long)arg1 error:(id *)arg2;
+ (id)rankedTopicsWithLimit:(unsigned long long)arg1 excludingSourceBundleId:(id)arg2 sinceDate:(id)arg3 error:(id *)arg4;
+ (id)rankedTopicsWithLimit:(unsigned long long)arg1 decayRate:(double)arg2 error:(id *)arg3;
+ (id)rankedTopicsWithLimit:(unsigned long long)arg1 sinceDate:(id)arg2 decayRate:(double)arg3 error:(id *)arg4;
+ (id)scoresForTopicMapping:(id)arg1 excludingSourceBundleId:(id)arg2 fromDate:(id)arg3 decayRate:(double)arg4 withBiases:(_Bool)arg5 error:(id *)arg6;
+ (id)scoresForTopics:(id)arg1 excludingSourceBundleId:(id)arg2 decayRate:(double)arg3 error:(id *)arg4;
+ (id)scoresForTopicMapping:(id)arg1 excludingSourceBundleId:(id)arg2 fromDate:(id)arg3 decayRate:(double)arg4 error:(id *)arg5;
+ (id)topicRecordsWithLimit:(unsigned long long)arg1 excludingSourceBundleId:(id)arg2 sinceDate:(id)arg3 error:(id *)arg4;
+ (id)topicRecordsWithLimit:(unsigned long long)arg1 matchingSourceBundleId:(id)arg2 sinceDate:(id)arg3 error:(id *)arg4;
+ (id)topicRecordsWithLimit:(unsigned long long)arg1 matchingTopicId:(id)arg2 sinceDate:(id)arg3 error:(id *)arg4;
+ (_Bool)clearTopicStore:(id *)arg1;
+ (id)getPortraitVariantName;
+ (_Bool)donateSiriQuery:(id)arg1 qid:(id)arg2 error:(id *)arg3;
+ (_Bool)donateLocationNamedEntities:(id)arg1 bundleId:(id)arg2 error:(id *)arg3;

@end
