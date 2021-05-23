/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUIBaseTemplateViewController.h>

@class SiriUISettingTemplateView;

@protocol SiriUISettingTemplateModel;

@interface SiriUISettingTemplateViewController : SiriUIBaseTemplateViewController

@property (retain, nonatomic) SiriUISettingTemplateView *view;
@property (retain, nonatomic) id <SiriUISettingTemplateModel> templateModel;

- (Class)templateViewClass;

@end
