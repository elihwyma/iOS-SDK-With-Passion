/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUITemplateViewController.h>

@class SiriUIBaseTemplateView;

@interface SiriUIBaseTemplateViewController : SiriUITemplateViewController

@property (retain, nonatomic) SiriUIBaseTemplateView *view;

- (void)loadView;
- (Class)templateViewClass;

@end
