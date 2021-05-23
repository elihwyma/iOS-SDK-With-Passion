/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@protocol _ATXFeedbackProtocol

@property (nonatomic, readonly) double currentAlpha;
@property (nonatomic, readonly) double currentBeta;

- (unsigned short)resetData;
- (unsigned short)feedbackLaunched:rejected:date:location: /* Error: Ran out of types for this method. */;
- (unsigned short)feedbackLaunched:rejected: /* Error: Ran out of types for this method. */;
- (unsigned short)feedbackLaunched:rejected:inUnitTest:date:location: /* Error: Ran out of types for this method. */;
- (unsigned short)feedbackLaunched:rejected:inUnitTest: /* Error: Ran out of types for this method. */;
- (unsigned short)decayCounts;
- (unsigned short)removeFeedbackForBundle: /* Error: Ran out of types for this method. */;

@end
