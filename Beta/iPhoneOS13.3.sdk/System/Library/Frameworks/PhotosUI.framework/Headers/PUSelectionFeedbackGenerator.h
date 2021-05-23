/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class UISelectionFeedbackGenerator;

__attribute__((visibility("hidden")))
@interface PUSelectionFeedbackGenerator : NSObject

{
    UISelectionFeedbackGenerator *_feedbackGenerator;
}

@property (nonatomic, readonly) UISelectionFeedbackGenerator *feedbackGenerator;

- (id)init;
- (void)prepareFeedback;
- (void)performFeedback;

@end
