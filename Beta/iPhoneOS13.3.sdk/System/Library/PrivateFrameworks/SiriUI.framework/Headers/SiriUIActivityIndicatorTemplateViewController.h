/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUITemplateViewController.h>

@class SiriUIActivityIndicatorTemplateView;

@protocol SiriUIActivityIndicatorTemplateModel;

@interface SiriUIActivityIndicatorTemplateViewController : SiriUITemplateViewController

@property (retain, nonatomic) SiriUIActivityIndicatorTemplateView *view;
@property (retain, nonatomic) id <SiriUIActivityIndicatorTemplateModel> templateModel;

- (void)loadView;

@end
