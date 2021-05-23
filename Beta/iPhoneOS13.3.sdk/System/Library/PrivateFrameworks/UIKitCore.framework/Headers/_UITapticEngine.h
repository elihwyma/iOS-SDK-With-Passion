/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class _UIStatesFeedbackGenerator;

@interface _UITapticEngine : NSObject

{
    _Bool _feedbackActivated;
    _UIStatesFeedbackGenerator *_feedbackGenerator;
}

@property (retain, nonatomic) _UIStatesFeedbackGenerator *feedbackGenerator;
@property (nonatomic) _Bool feedbackActivated;

- (id)init;
- (void)actuateFeedback:(long long)arg1;
- (void)prepareUsingFeedback:(long long)arg1;
- (void)endUsingFeedback:(long long)arg1;
- (id)_stateForFeedback:(long long)arg1;

@end
