/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

#import <ProactiveML/Swift-Protocol.h>

@class NSString, PMLGradientSolver;

@interface PMLLinearRegressionModel : NSObject <Swift>

{
    PMLGradientSolver *_solver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)solverWithWeights:(id)arg1 andIntercept:(_Bool)arg2;
+ (id)solverWithWeights:(id)arg1;
+ (id)withWeights:(id)arg1;

- (float)predict:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithSolver:(id)arg1;

@end
