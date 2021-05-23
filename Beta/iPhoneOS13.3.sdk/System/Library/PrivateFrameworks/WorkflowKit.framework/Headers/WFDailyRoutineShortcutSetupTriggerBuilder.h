/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSString, WFTrigger;

@interface WFDailyRoutineShortcutSetupTriggerBuilder : NSObject

{
    NSString *_title;
    NSString *_subtitle;
    WFTrigger *_templateTrigger;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (copy, nonatomic, readonly) WFTrigger *templateTrigger;

- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 templateTrigger:(id)arg3;
- (id)triggerWithConfiguration:(id)arg1;

@end
