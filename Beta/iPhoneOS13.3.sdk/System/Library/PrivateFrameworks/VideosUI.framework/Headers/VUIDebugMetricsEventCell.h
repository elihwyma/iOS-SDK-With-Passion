/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UITableViewCell.h>

@class NSString, UIImage, UIImageView, VUILabel, VUISeparatorView, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsEventCell : UITableViewCell

{
    NSString *_eventTypeLabelStr;
    NSString *_subhead1LabelStr;
    NSString *_subhead2LabelStr;
    NSString *_tabName;
    VUILabel *_eventTypeLabel;
    VUITextLayout *_eventTypeLabelLayout;
    VUILabel *_subhead1Label;
    VUITextLayout *_subhead1LabelLayout;
    VUILabel *_subhead2Label;
    VUITextLayout *_subhead2LabelLayout;
    VUILabel *_tabNameLabel;
    VUITextLayout *_tabNameLabelLayout;
    UIImageView *_tabImageView;
    VUISeparatorView *_separatorView;
}

@property (retain, nonatomic) VUILabel *eventTypeLabel;
@property (retain, nonatomic) VUITextLayout *eventTypeLabelLayout;
@property (retain, nonatomic) VUILabel *subhead1Label;
@property (retain, nonatomic) VUITextLayout *subhead1LabelLayout;
@property (retain, nonatomic) VUILabel *subhead2Label;
@property (retain, nonatomic) VUITextLayout *subhead2LabelLayout;
@property (retain, nonatomic) VUILabel *tabNameLabel;
@property (retain, nonatomic) VUITextLayout *tabNameLabelLayout;
@property (retain, nonatomic) UIImageView *tabImageView;
@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (copy, nonatomic) NSString *eventTypeLabelStr;
@property (copy, nonatomic) NSString *subhead1LabelStr;
@property (copy, nonatomic) NSString *subhead2LabelStr;
@property (copy, nonatomic) UIImage *tabImage;
@property (copy, nonatomic) NSString *tabName;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
