/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ASDTFFeedbackSubmissionService : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long maxNumberOfScreenshotsAllowed;
@property (nonatomic, readonly) unsigned long long maxNumberOfCommentSymbolsAllowed;

- (_Bool)_verifyDataSourceIsReadyForSubmission:(id)arg1 error:(id *)arg2;
- (id)_serializeFeedbackForBundleId:(id)arg1 withContentsOfDataSource:(id)arg2 error:(id *)arg3;
- (_Bool)_verifyEmailIsValid:(id)arg1;
- (void)submitFeedbackForBundleId:(id)arg1 withContentsOfDataSource:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
