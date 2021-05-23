/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSString, UIView, UIViewController;

@interface WFConcreteUIKitUserInterface : NSObject <Swift>

{
    UIViewController *_viewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, readonly) UIView *view;

- (id)initWithViewController:(id)arg1;
- (void)presentAlert:(id)arg1;

@end
