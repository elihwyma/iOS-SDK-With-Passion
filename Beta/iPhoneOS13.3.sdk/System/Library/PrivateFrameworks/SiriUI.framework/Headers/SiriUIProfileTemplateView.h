/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUILabelStackTemplateView.h>

@class NSString, UIImageView;

@protocol SiriUIProfileTemplateModel, SiriUITemplatedView;

@interface SiriUIProfileTemplateView : SiriUILabelStackTemplateView

{
    UIImageView *_imageView;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) id <SiriUIProfileTemplateModel> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SiriUITemplatedView> templatedSuperview;

- (id)initWithDataSource:(id)arg1;
- (void)reloadData;
- (long long)layoutStyle;
- (void)layoutImage;

@end
