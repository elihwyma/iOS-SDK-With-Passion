/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUIBaseTemplateViewController.h>

@class NSString, SiriUIMapTemplateView;

@protocol SiriUIMapTemplateModel, SiriUIMapTemplateViewControllerDelegate;

@interface SiriUIMapTemplateViewController : SiriUIBaseTemplateViewController

@property (retain, nonatomic) SiriUIMapTemplateView *view;
@property (retain, nonatomic) id <SiriUIMapTemplateModel> templateModel;
@property (weak, nonatomic) id <SiriUIMapTemplateViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)prepareForDismissal;
- (Class)templateViewClass;
- (void)mapTemplateView:(id)arg1 didModifyPlacemark:(id)arg2;
- (void)mapTemplateViewDidSelectMap:(id)arg1;

@end
