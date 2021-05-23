/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUISettingTemplateViewController.h>

@class SiriUISelectionTemplateView;

@protocol SiriUISelectionTemplateModel, SiriUISelectionTemplateViewControllerDelegate;

@interface SiriUISelectionTemplateViewController : SiriUISettingTemplateViewController

@property (weak, nonatomic) id <SiriUISelectionTemplateViewControllerDelegate> delegate;
@property (retain, nonatomic) id <SiriUISelectionTemplateModel> templateModel;
@property (retain, nonatomic) SiriUISelectionTemplateView *view;
@property (nonatomic) _Bool selected;

- (void)loadView;
- (Class)templateViewClass;
- (void)_didSelectChoiceFromSender:(id)arg1;

@end
