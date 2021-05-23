/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@class MLModelDescription, MLModelInterface, MLModelMetadata;

@protocol MLModeling

@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (readonly) MLModelInterface *interface;
@property (readonly) MLModelMetadata *metadata;

- (unsigned short)predictionFromFeatures:error: /* Error: Ran out of types for this method. */;
- (unsigned short)predictionFromFeatures:options:error: /* Error: Ran out of types for this method. */;
- (unsigned short)predictionsFromBatch:error: /* Error: Ran out of types for this method. */;
- (unsigned short)predictionsFromBatch:options:error: /* Error: Ran out of types for this method. */;

@end
