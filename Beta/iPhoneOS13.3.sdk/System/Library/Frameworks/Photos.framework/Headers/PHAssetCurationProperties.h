/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetPropertySet.h>

@class NSDate;

@interface PHAssetCurationProperties : PHAssetPropertySet

{
    float _interestingSubjectScore;
    float _behavioralScore;
    float _semanticScore;
    float _interactionScore;
    NSDate *_addedDate;
    NSDate *_lastSharedDate;
}

@property (nonatomic, readonly) NSDate *addedDate;
@property (nonatomic, readonly) float interestingSubjectScore;
@property (nonatomic, readonly) float behavioralScore;
@property (nonatomic, readonly) float semanticScore;
@property (nonatomic, readonly) float interactionScore;
@property (nonatomic, readonly) NSDate *lastSharedDate;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;

- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;
- (float)_semanticScoreFromBehavioralScore:(double)arg1;

@end
