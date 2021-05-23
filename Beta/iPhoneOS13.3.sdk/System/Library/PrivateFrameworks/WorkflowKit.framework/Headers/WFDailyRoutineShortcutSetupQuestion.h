/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFDailyRoutineShortcutSetupQuestion : NSObject

{
    NSString *_prompt;
    NSString *_subtitle;
}

@property (copy, nonatomic, readonly) NSString *prompt;
@property (copy, nonatomic, readonly) NSString *subtitle;

- (id)initWithPrompt:(id)arg1 subtitle:(id)arg2;

@end
