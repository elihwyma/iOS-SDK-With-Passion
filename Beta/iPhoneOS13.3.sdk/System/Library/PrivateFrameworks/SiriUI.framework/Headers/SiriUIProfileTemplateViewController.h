/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUIBaseTemplateViewController.h>

@class NSString, SiriUIProfileTemplateView;

@protocol SiriUIProfileTemplateModel;

@interface SiriUIProfileTemplateViewController : SiriUIBaseTemplateViewController

@property (retain, nonatomic) id <SiriUIProfileTemplateModel> templateModel;
@property (retain, nonatomic) SiriUIProfileTemplateView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (Class)templateViewClass;
- (_Bool)labelStackTemplateViewShouldLayoutCompressed:(id)arg1;

@end
