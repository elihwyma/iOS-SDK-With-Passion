/*
 Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
 */

#import <AppSupportUI/NUIContainerGridView.h>

@class MTUIDigitalClockLabel, NSArray, NSDictionary, NSString, UIFont, UILabel, UISwitch;

@interface MTUIAlarmView : NUIContainerGridView

{
    id _contentSizeFontAdjustObserver;
    _Bool _shouldAddLayoutConstraints;
    long long _style;
    MTUIDigitalClockLabel *_timeLabel;
    NSString *_name;
    NSString *_repeatText;
    UILabel *_detailLabel;
    UIFont *_nameFont;
    UIFont *_repeatFont;
    UISwitch *_enabledSwitch;
    NSDictionary *_viewsByIdentifier;
    NSArray *_currentConstraints;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *repeatText;
@property (retain, nonatomic) NSArray *currentConstraints;
@property (nonatomic) long long style;
@property (nonatomic, readonly) MTUIDigitalClockLabel *timeLabel;
@property (nonatomic, readonly) UILabel *detailLabel;
@property (retain, nonatomic) UIFont *nameFont;
@property (retain, nonatomic) UIFont *repeatFont;
@property (nonatomic, readonly) UISwitch *enabledSwitch;
@property (nonatomic, readonly) NSDictionary *viewsByIdentifier;
@property (nonatomic) _Bool shouldAddLayoutConstraints;
@property (nonatomic, getter=isSwitchVisible) _Bool switchVisible;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets)arg1;
- (void)setName:(id)arg1 andRepeatText:(id)arg2 textColor:(id)arg3;
- (void)_loadFontsWithTextStyles;
- (void)tearDownContentSizeChangeObserver;
- (void)updatePreferredMaxLayoutWidthForDetailContainerLabels;

@end
