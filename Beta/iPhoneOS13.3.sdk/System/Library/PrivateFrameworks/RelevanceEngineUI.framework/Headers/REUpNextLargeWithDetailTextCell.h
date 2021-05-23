/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

#import <RelevanceEngineUI/REUpNextBaseCell.h>

@class REUpNextImageView, UILabel, UILayoutGuide, UIVisualEffectView;

@interface REUpNextLargeWithDetailTextCell : REUpNextBaseCell

{
    UILayoutGuide *_contentLayoutGuide;
    REUpNextImageView *_bodyImage;
    UILabel *_headerLabel;
    UILabel *_bodyLabel;
    UILabel *_detail1Label;
    UILabel *_detail2Label;
    UIVisualEffectView *_headerEffectView;
    UIVisualEffectView *_bodyEffectView;
    UIVisualEffectView *_detail1EffectView;
    UIVisualEffectView *_detail2EffectView;
}

+ (void)initialize;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)defaultTextColorDidChange;
- (void)_updateHeaderColor;
- (void)configureWithContent:(id)arg1;
- (id)primaryEffectViews;
- (id)secondaryEffectViews;

@end
