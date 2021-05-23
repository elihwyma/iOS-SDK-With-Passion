/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@class NSArray;

@interface WFOpenInAction : WFAction

{
    NSArray *_contentClasses;
}

@property (retain, nonatomic) NSArray *contentClasses;

- (void)runAsynchronouslyWithInput:(id)arg1;
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)outputContentClasses;
- (id)inputContentClasses;
- (void)openContentInSelectedApp:(id)arg1;
- (void)updateContentClasses;
- (id)selectedApp;

@end
