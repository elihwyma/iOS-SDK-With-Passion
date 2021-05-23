/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <Foundation/NSObject.h>

@protocol UIFeedbackGeneratorUserInteractionDriven;

@interface _TVRSiriHaptic : NSObject

{
    _Bool _shouldExecuteStartCompletionBlock;
    id <UIFeedbackGeneratorUserInteractionDriven> _behavior;
    long long _state;
}

@property (retain, nonatomic) id <UIFeedbackGeneratorUserInteractionDriven> behavior;
@property (nonatomic) long long state;
@property (nonatomic) _Bool shouldExecuteStartCompletionBlock;

- (id)initWithButton:(id)arg1;
- (void)performSiriStartWithCompletion:(CDUnknownBlockType)arg1;
- (void)siriButtonTouchesEnded;
- (void)performSiriEndWithSuccess:(_Bool)arg1;

@end
