/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <TestFlightCore/Swift-Protocol.h>

@protocol TFFeedbackSubmissionService <Swift>

@property (nonatomic, readonly) unsigned long long maxNumberOfScreenshotsAllowed;
@property (nonatomic, readonly) unsigned long long maxNumberOfCommentSymbolsAllowed;

- (unsigned short)submitFeedbackForBundleId:withContentsOfDataSource:completionHandler: /* Error: Ran out of types for this method. */;

@end
