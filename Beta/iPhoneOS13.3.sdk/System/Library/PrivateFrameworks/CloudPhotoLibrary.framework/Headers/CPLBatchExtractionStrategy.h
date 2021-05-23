/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLBatchExtractionStep, NSArray, NSEnumerator, NSString;

@protocol CPLBatchExtractionStrategyStorage;

@interface CPLBatchExtractionStrategy : NSObject

{
    NSArray *_steps;
    NSEnumerator *_stepEnumerator;
    CPLBatchExtractionStep *_currentStep;
    _Bool _loggedForThisStep;
    _Bool _finished;
    NSString *_strategyName;
    id <CPLBatchExtractionStrategyStorage> _storage;
    NSString *_scopeIdentifier;
    unsigned long long _maximumRecordCountPerBatch;
    NSString *_name;
}

@property (copy, nonatomic, readonly) NSString *strategyName;
@property (weak, nonatomic, readonly) id <CPLBatchExtractionStrategyStorage> storage;
@property (nonatomic, readonly) NSString *scopeIdentifier;
@property (nonatomic) unsigned long long maximumRecordCountPerBatch;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *currentStepDescription;

+ (void)setMaximumRecordCountPerBatch:(unsigned long long)arg1;
+ (id)usualStrategyWithStorage:(id)arg1 coveringScopeIdentifier:(id)arg2;
+ (id)overQuotaStrategyWithStorage:(id)arg1 coveringScopeIdentifier:(id)arg2;

- (void)reset;
- (_Bool)_hasChanges;
- (id)initWithName:(id)arg1 storage:(id)arg2 scopeIdentifier:(id)arg3 steps:(id)arg4;
- (void)_computeNextStep;
- (_Bool)extractBatch:(out id *)arg1 maximumResourceSize:(unsigned long long)arg2 error:(id *)arg3;
- (void)resetConditionallyFromNewIncomingChange:(id)arg1;

@end
