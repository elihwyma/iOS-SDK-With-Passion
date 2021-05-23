/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@interface PPSourceStorage : NSObject

+ (double)matchAccuracyForSecondsFrom1970;
+ (id)sha256ForSource:(id)arg1;
+ (id)loadSourcesWithBundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 txnWitness:(id)arg4;
+ (id)createSourceWithStatement:(id)arg1;
+ (long long)updateOrCreateRowForSource:(id)arg1 addingRefCount:(long long)arg2 txnWitness:(id)arg3;
+ (id)statsWithDatabase:(id)arg1 medianRefCountNeeded:(_Bool)arg2 table:(id)arg3 txnWitness:(id)arg4;
+ (id)statsForTableWithName:(id)arg1 medianRefCountNeeded:(_Bool)arg2 txnWitness:(id)arg3;
+ (id)statsWithDatabase:(id)arg1 medianRefCountNeeded:(_Bool)arg2;
+ (id)statsWithMedianRefCountNeeded:(_Bool)arg1;

@end
