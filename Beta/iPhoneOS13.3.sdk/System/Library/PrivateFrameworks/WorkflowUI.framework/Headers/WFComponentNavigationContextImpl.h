/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString, UIViewController;

@interface WFComponentNavigationContextImpl : NSObject

{
    UIViewController *_componentHostingViewController;
    NSHashTable *_componentEditingSessions;
}

@property (nonatomic, readonly) NSHashTable *componentEditingSessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) UIViewController *componentHostingViewController;

- (id)initWithViewController:(id)arg1;
- (void)componentWillBeginEditingSession:(id)arg1;
- (void)componentDidEndEditingSession:(id)arg1;
- (void)cancelEditingSessionsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
