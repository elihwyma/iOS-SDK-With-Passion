/*
 Image: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
 */

#import <DistributedEvaluation/Swift-Protocol.h>

@protocol DESService <Swift>

- (unsigned short)saveRecordForBundleId:data:recordInfo:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchSavedRecordInfoForRecordType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteAllSavedRecordsForBundleId:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteSavedRecordForBundleId:identfier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)saveCoreDuetEvent:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchInstalledBundlesIdsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchRecordsForBundleId:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)runEvaluationForBundleId:recipePath:recordUUIDs:attachments:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)runLiveEvaluationForBundleId:baseURL:localeIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)runLiveEvaluationForAllBundlesWithBaseURL:localeIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchTelemetryForBundleId:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)postRecipeResultForBundleId:baseURL:result:recipeUUID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setValue:forInfoKey:bundleID:completion: /* Error: Ran out of types for this method. */;

@end
