/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UIViewController.h>

@class UIView;

@protocol SiriUITemplateModel, SiriUITemplateModelPrivate, SiriUITemplateView, SiriUITemplateViewControllerDelegate;

@interface SiriUITemplateViewController : UIViewController

{
    _Bool _active;
    _Bool _compressed;
    id <SiriUITemplateModel> _templateModel;
    id <SiriUITemplateViewControllerDelegate> _delegate;
}

@property (nonatomic, readonly) id <SiriUITemplateModelPrivate> templateModelPrivate;
@property (weak, nonatomic) id <SiriUITemplateViewControllerDelegate> delegate;
@property (retain, nonatomic) UIView<SiriUITemplateView> *view;
@property (retain, nonatomic) id <SiriUITemplateModel> templateModel;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, getter=isCompressed) _Bool compressed;

+ (id)templateViewControllerForTemplateModel:(id)arg1;

- (void)loadView;
- (_Bool)_canShowWhileLocked;
- (void)prepareForDismissal;
- (id)_initWithTemplateModel:(id)arg1;

@end
