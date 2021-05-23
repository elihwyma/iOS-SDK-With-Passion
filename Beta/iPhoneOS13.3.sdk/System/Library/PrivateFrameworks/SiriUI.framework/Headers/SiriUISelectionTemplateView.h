/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUISettingTemplateView.h>

@class UIButton, UIImageView;

@protocol SiriUISelectionTemplateModel;

@interface SiriUISelectionTemplateView : SiriUISettingTemplateView

{
    UIImageView *_checkmarkImageView;
    UIButton *_selectionButton;
}

@property (weak, nonatomic) id <SiriUISelectionTemplateModel> dataSource;

- (id)initWithDataSource:(id)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)addTargetForSelectionEvent:(id)arg1 action:(SEL)arg2;
- (void)removeTargetForSelectionEvent:(id)arg1 action:(SEL)arg2;

@end
