/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSString, UIView, UIViewController;

@interface WFModuleUserInterface : NSObject <Swift>

{
    UIView *_view;
    UIViewController *_viewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, readonly) UIView *view;

- (void)presentAlert:(id)arg1;
- (id)initWithView:(id)arg1 inViewController:(id)arg2;

@end
