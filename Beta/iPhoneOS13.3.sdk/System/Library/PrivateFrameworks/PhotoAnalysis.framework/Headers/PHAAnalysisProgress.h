/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface PHAAnalysisProgress : NSObject

{
    NSDictionary *_countDictionariesByWorkerType;
    NSDictionary *_countOfDeletionsByWorkerType;
    NSDictionary *_totalProgressCountsByWorkerType;
}

+ (void)requestCurrentProgressWithLibrary:(id)arg1 completion:(CDUnknownBlockType)arg2;

- (id)init;
- (id)description;
- (id)statusAsDictionary;
- (float)_progressFromProcessedCount:(long long)arg1 outOfPossibleCount:(long long)arg2;
- (id)initWithCounts:(id)arg1 totalProgressCounts:(id)arg2 countOfDeletionsByWorkerType:(id)arg3;
- (float)percentAnalyzedForWorkerType:(short)arg1;
- (float)localPercentAnalyzedForWorkerType:(short)arg1;
- (unsigned long long)countOfDeletionsForWorkerType:(short)arg1;

@end
