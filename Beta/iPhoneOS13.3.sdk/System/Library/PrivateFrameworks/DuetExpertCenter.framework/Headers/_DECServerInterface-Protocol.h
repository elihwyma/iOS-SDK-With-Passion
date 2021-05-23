/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@protocol _DECServerInterface

- (unsigned short)registerClient:category:identifier:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)predictionForCategories:consumer:criteria:limit:providesFeedback:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)setPrediction:category:consumer:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)prewarmPredictionForCategories:consumer:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)predictionForCategories:consumer:limit:providesFeedback:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)userEngaged:result:metadata:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)userAbandoned:result:metadata:reply: /* Error: Ran out of types for this method. */;

@end
