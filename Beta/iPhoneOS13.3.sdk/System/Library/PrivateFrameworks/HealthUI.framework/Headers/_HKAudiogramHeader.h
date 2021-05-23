/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIStackView.h>

@class UILabel;

@interface _HKAudiogramHeader : UIStackView

{
    UILabel *_headerTitleView;
    UILabel *_headerValueView;
    UILabel *_headerDateView;
}

@property (nonatomic, readonly) UILabel *headerTitleView;
@property (nonatomic, readonly) UILabel *headerValueView;
@property (nonatomic, readonly) UILabel *headerDateView;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)_titleLabel;
- (id)_dateLabel;
- (id)_valueLabel;

@end
