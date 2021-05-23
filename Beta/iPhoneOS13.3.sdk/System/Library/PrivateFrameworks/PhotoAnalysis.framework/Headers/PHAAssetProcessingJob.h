/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <PhotoAnalysis/PHAWorkerJob.h>

@class NSArray, NSMutableDictionary, NSRecursiveLock;

@interface PHAAssetProcessingJob : PHAWorkerJob

{
    NSArray *_assetLocalIdentifiers;
    NSRecursiveLock *_resultsLock;
    NSMutableDictionary *_resultsByAssetLocalIdentifier;
}

@property (readonly) NSRecursiveLock *resultsLock;
@property (copy, nonatomic, readonly) NSArray *incompleteAssetLocalIdentifiers;
@property (nonatomic, readonly) NSMutableDictionary *resultsByAssetLocalIdentifier;
@property (nonatomic, readonly) NSArray *assetLocalIdentifiers;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)resultCount;
- (_Bool)finished;
- (float)completionScore;
- (id)statusAsDictionary;
- (id)_resultsCopy;
- (id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 assetLocalIdentifiers:(id)arg3 library:(id)arg4;
- (unsigned long long)successfulResultCount;
- (unsigned long long)resultForAssetLocalIdentifier:(id)arg1;
- (void)reportResult:(unsigned long long)arg1 forAssetLocalIdentifier:(id)arg2;

@end
