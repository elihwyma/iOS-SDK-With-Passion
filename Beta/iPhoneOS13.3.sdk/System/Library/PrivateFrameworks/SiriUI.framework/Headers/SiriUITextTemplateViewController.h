/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUITemplateViewController.h>

@class NSString, SiriUITextTemplateView;

@protocol SiriUITextTemplateModel;

@interface SiriUITextTemplateViewController : SiriUITemplateViewController

@property (retain, nonatomic) SiriUITextTemplateView *view;
@property (retain, nonatomic) id <SiriUITextTemplateModel> templateModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (_Bool)labelStackTemplateViewShouldLayoutCompressed:(id)arg1;
- (void)_textTemplateViewDisclosed:(id)arg1;

@end
