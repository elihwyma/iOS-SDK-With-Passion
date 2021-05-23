/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFBase64EncodingAction : WFAction

- (void)runAsynchronouslyWithInput:(id)arg1;
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)outputContentClasses;
- (id)inputContentClasses;
- (id)base64EncodedStringItemFromFile:(id)arg1 lineBreakMode:(id)arg2;
- (id)itemFromBase64EncodedString:(id)arg1 nameIfKnown:(id)arg2;

@end
