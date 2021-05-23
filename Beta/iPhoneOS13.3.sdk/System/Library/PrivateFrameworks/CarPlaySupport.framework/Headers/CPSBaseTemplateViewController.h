/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <UIKit/UIViewController.h>

#import <CarPlaySupport/Swift-Protocol.h>

@class CPTemplate, NAFuture, NSString, UITapGestureRecognizer;

@protocol CPSTemplateViewControllerDelegate, CPTemplateDelegate;

@interface CPSBaseTemplateViewController : UIViewController <Swift>

{
    _Bool _isPopping;
    _Bool _didDisappear;
    NAFuture *_templateProviderFuture;
    CPTemplate *_associatedTemplate;
    id <CPTemplateDelegate> _templateDelegate;
    id <CPSTemplateViewControllerDelegate> _viewControllerDelegate;
    UITapGestureRecognizer *_backGestureRecognizer;
}

@property (nonatomic) _Bool isPopping;
@property (nonatomic) _Bool didDisappear;
@property (retain, nonatomic) UITapGestureRecognizer *backGestureRecognizer;
@property (retain, nonatomic) CPTemplate *associatedTemplate;
@property (retain, nonatomic) id <CPTemplateDelegate> templateDelegate;
@property (weak, nonatomic) id <CPSTemplateViewControllerDelegate> viewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NAFuture *templateProviderFuture;

- (void)_cleanup;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)setLeadingNavigationBarButtons:(id)arg1;
- (void)setTrailingNavigationBarButtons:(id)arg1;
- (void)setHostBackButton:(id)arg1;
- (void)setControl:(id)arg1 enabled:(_Bool)arg2;
- (void)setBarButton:(id)arg1 image:(id)arg2;
- (void)setBarButton:(id)arg1 title:(id)arg2;
- (void)didSelectButton:(id)arg1;
- (id)initWithTemplate:(id)arg1 templateDelegate:(id)arg2;
- (void)_viewDidLoad;
- (void)_dismissTemplateViewController;
- (void)_backGestureFired:(id)arg1;
- (void)_cps_viewControllerWasPopped;
- (void)_updateLeadingBarButtons;
- (void)_updateTrailingBarButtons;
- (void)_addGestureRecognizerIfNecessary;
- (id)_barButtonItemForIdentifier:(id)arg1;

@end
