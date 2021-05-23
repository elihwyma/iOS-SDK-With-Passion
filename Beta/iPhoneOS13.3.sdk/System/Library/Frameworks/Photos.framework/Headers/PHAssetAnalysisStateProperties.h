/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetPropertySet.h>

@class NSMutableDictionary;

@interface PHAssetAnalysisStateProperties : PHAssetPropertySet

{
    NSMutableDictionary *_fetchDictionariesByWorkerType;
}

@property (nonatomic, readonly) NSMutableDictionary *fetchDictionariesByWorkerType;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (_Bool)isToMany;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;

- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;
- (int)analysisStateForWorkerType:(short)arg1 outLastIgnoreDate:(id *)arg2 outIgnoreUntilDate:(id *)arg3;

@end
