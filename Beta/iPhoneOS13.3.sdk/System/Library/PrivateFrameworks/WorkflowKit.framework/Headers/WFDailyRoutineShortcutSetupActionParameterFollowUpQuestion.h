/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion : NSObject

{
    NSString *_prompt;
    NSString *_actionIdentifier;
    NSString *_parameterKey;
}

@property (copy, nonatomic, readonly) NSString *prompt;
@property (copy, nonatomic, readonly) NSString *actionIdentifier;
@property (copy, nonatomic, readonly) NSString *parameterKey;

- (id)initWithPrompt:(id)arg1 actionIdentifier:(id)arg2 parameterKey:(id)arg3;

@end
