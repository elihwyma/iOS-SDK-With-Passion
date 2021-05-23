/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, UIViewController, WFAlertPresentationSource;

@interface WFContactPickerCoordinator : NSObject

{
    NSSet *_supportedPersonProperties;
    WFAlertPresentationSource *_presentationSource;
    UIViewController *_presentingViewController;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (copy, nonatomic) NSSet *supportedPersonProperties;
@property (retain, nonatomic) WFAlertPresentationSource *presentationSource;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)arg1;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (id)supportedContactProperties;
- (void)presentContactPickerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentHandlePickerForContact:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dismissPersonViewController;
- (void)finishWithContact:(id)arg1;
- (id)contactWithMatchingPropertyAndMultivalueIndex:(id)arg1;

@end
