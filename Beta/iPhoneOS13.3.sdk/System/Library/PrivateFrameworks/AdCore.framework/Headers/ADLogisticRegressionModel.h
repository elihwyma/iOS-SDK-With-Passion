/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface ADLogisticRegressionModel : NSObject

{
    NSNumber *_pttr;
    NSNumber *_appUsageSimilarity;
}

@property (retain, nonatomic) NSNumber *pttr;
@property (retain, nonatomic) NSNumber *appUsageSimilarity;

- (float)sigmoid:(float)arg1;
- (id)initWithPTTR:(id)arg1 appUsageSimilarity:(id)arg2;
- (id)predictionWithWeights:(id)arg1;

@end
