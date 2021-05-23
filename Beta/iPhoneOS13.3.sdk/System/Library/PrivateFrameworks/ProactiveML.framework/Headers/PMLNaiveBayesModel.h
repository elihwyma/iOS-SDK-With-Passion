/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

#import <ProactiveML/Swift-Protocol.h>

@class NSString, PMLNaiveBayesSolver;

@interface PMLNaiveBayesModel : NSObject <Swift>

{
    PMLNaiveBayesSolver *_solver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)solverWithProbabilities:(id)arg1 positiveConditionalProbabilities:(id)arg2 negativeConditionalProbabilities:(id)arg3;
+ (id)withProbabilities:(id)arg1 positiveConditionalProbabilities:(id)arg2 negativeConditionalProbabilities:(id)arg3;

- (float)predict:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (_Bool)classify:(id)arg1;
- (id)initWithSolver:(id)arg1;

@end
