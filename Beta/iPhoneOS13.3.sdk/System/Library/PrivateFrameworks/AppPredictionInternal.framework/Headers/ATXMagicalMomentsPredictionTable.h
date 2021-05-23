/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface ATXMagicalMomentsPredictionTable : NSObject

{
    NSMutableArray *_predictionTableEntries;
}

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredictionTableEntries:(id)arg1;
- (id)describeTable;
- (void)addPredictions:(id)arg1 withApplicablePredicates:(id)arg2;
- (void)addPrediction:(id)arg1 withApplicablePredicates:(id)arg2;
- (id)predictionTableEntries;
- (id)validPredictionsFromTableEntries:(id)arg1 event:(id)arg2;
- (id)deduplicatePredictions:(id)arg1;
- (id)removeRestrictedPredictions:(id)arg1;
- (id)predictionsForTriggerEvent:(id)arg1;

@end
