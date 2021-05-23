/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UILabel, _UIDatePickerMode;

__attribute__((visibility("hidden")))
@interface UIDatePickerContentView : UIView

{
    struct {
        unsigned int isAmPm:1;
    } _datePickerContentViewFlags;
    UILabel *_titleLabel;
    double _titleLabelMaxX;
    long long _titleAlignment;
    _UIDatePickerMode *_mode;
}

@property (retain, nonatomic) _UIDatePickerMode *mode;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic) double titleLabelMaxX;
@property (nonatomic) _Bool isAmPm;
@property (nonatomic) long long titleAlignment;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithMode:(id)arg1;
- (_Bool)_canBeReusedInPickerView;

@end
