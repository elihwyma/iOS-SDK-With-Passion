/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UIViewController.h>

@class AXElement, NSString, UIAlertController;

@protocol CACElementActionsPresentationViewControllerDelegate;

@interface CACElementActionsPresentationViewController : UIViewController

{
    AXElement *_element;
    id <CACElementActionsPresentationViewControllerDelegate> _elementActionsDelegate;
    UIAlertController *_alertController;
    struct CGRect _sourceRect;
}

@property (retain, nonatomic) UIAlertController *alertController;
@property (weak, nonatomic) id <CACElementActionsPresentationViewControllerDelegate> elementActionsDelegate;
@property (retain, nonatomic) AXElement *element;
@property (nonatomic) struct CGRect sourceRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long zOrder;
@property (nonatomic, readonly) _Bool isOverlay;

+ (_Bool)canShowElementActionsForElement:(id)arg1;
+ (id)_elementActionManager;

- (id)init;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (void)viewDidAppear:(_Bool)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (id)actionForAXAction:(id)arg1;
- (void)performHideWithCompletion:(CDUnknownBlockType)arg1;

@end
