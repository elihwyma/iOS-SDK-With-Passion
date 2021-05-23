/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ConnectionFailureInstance : NSObject

{
    double _flowStart;
    double _flowDuration;
}

@property (nonatomic) double flowStart;
@property (nonatomic) double flowDuration;

- (id)description;

@end
