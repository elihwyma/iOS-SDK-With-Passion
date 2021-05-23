/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TFFeedbackFormBuilder : NSObject

- (id)_buildEmailGroupWithPrefilledEmail:(id)arg1;
- (id)_buildUserFeedbackGroupWithContext:(unsigned long long)arg1 hasScreenshots:(_Bool)arg2;
- (id)_feedbackCommentPlaceholderStringForContext:(unsigned long long)arg1;
- (id)buildFormForContext:(unsigned long long)arg1 withPrefilledEmail:(id)arg2 hasScreenshots:(_Bool)arg3;

@end
