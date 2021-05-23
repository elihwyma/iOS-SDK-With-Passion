/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUIBaseTemplateView.h>

@class UILabel;

@protocol SiriUISettingTemplateModel;

@interface SiriUISettingTemplateView : SiriUIBaseTemplateView

{
    UILabel *_textLabel;
}

@property (weak, nonatomic) id <SiriUISettingTemplateModel> dataSource;

- (id)initWithDataSource:(id)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (double)desiredHeight;

@end
