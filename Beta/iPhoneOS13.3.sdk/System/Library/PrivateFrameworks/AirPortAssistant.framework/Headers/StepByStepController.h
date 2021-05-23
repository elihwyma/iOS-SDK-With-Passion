/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/AssistantCallbackController.h>

@class NSDictionary;

@protocol StepByStepUIDelegate;

@interface StepByStepController : AssistantCallbackController

{
    struct StepByStepContext *_stepByStepContext;
    id _delegate;
    NSDictionary *_restoreRecommendation;
}

@property id <StepByStepUIDelegate> delegate;
@property (retain) NSDictionary *restoreRecommendation;

+ (id)stepByStepController;

- (id)init;
- (void)dealloc;
- (int)resume;
- (int)subclassAssistantCallback:(struct AssistantCallbackContext *)arg1;
- (int)setupFromAutoguessRecommendation:(id)arg1 withOptions:(id)arg2;
- (int)cancelStepByStep;
- (void)stepByStepNextStepResult:(int)arg1 withOptions:(id)arg2;

@end
