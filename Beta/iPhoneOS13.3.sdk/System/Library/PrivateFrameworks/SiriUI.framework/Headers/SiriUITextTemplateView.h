/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUILabelStackTemplateView.h>

@class NSString, UIButton, UIImageView, UILabel;

@protocol SiriUITemplatedView, SiriUITextTemplateModel;

@interface SiriUITextTemplateView : SiriUILabelStackTemplateView

{
    UIImageView *_chevronView;
    UILabel *_detailTextLabel;
    UIButton *_disclosureButton;
}

@property (retain, nonatomic) UIImageView *chevronView;
@property (retain, nonatomic) UILabel *detailTextLabel;
@property (weak) id <SiriUITextTemplateModel> dataSource;
@property (retain, nonatomic) UIButton *disclosureButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SiriUITemplatedView> templatedSuperview;

- (id)initWithDataSource:(id)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)layoutDetailText;
- (void)setupDisclosureIndicator;
- (void)_setupDisclosureButton;
- (void)addTargetForDisclosure:(id)arg1 action:(SEL)arg2;
- (void)removeTargetForDisclosure:(id)arg1 action:(SEL)arg2;

@end
