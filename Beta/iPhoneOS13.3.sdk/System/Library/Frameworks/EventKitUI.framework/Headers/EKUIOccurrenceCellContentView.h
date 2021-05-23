/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKUICellContentViewWithPrimaryAndSecondaryFonts.h>

@class EKCalendarDate, EKUICellColorBarView, EKUIOccurrenceCellLabel, NSArray, NSDate, NSDictionary, NSLayoutConstraint, NSMutableArray, NSObject, NSString, UIColor, UIImageView, UIView, UIVisualEffect;

@protocol OS_dispatch_source;

@interface EKUIOccurrenceCellContentView : EKUICellContentViewWithPrimaryAndSecondaryFonts

{
    EKUIOccurrenceCellLabel *_travelTextLabel;
    EKUIOccurrenceCellLabel *_primaryLabel;
    EKUIOccurrenceCellLabel *_secondaryLabel;
    EKUIOccurrenceCellLabel *_travelDepartureTimeLabel;
    EKUIOccurrenceCellLabel *_topTimeLabel;
    EKUIOccurrenceCellLabel *_bottomTimeLabel;
    EKUIOccurrenceCellLabel *_countdownLabel;
    EKUICellColorBarView *_colorBarView;
    EKUICellColorBarView *_travelTimeColorBarView;
    UIImageView *_angleStripeBackgroundView;
    UIImageView *_accessoryImageView;
    NSArray *_ekUIOccurrenceCellConstraints;
    NSMutableArray *_primaryVisualEffectViews;
    NSMutableArray *_secondaryVisualEffectViews;
    _Bool _travelTimeTemplate;
    _Bool _invitationTemplate;
    NSLayoutConstraint *_contentTop_to_travelTextBaseline_Constraint;
    NSLayoutConstraint *_contentTop_to_primaryTextBaseline_Constraint;
    NSLayoutConstraint *_contentBottom_to_secondaryTextBaseline_Constraint;
    NSLayoutConstraint *_primaryTextBaseline_to_secondaryTextBaseline_Constraint;
    NSLayoutConstraint *_travelTextBaseline_to_primaryTextBaseLine_Constraint;
    NSLayoutConstraint *_horizontalDividerBarBottom_to_colorBarTop_Constraint;
    NSLayoutConstraint *_contentTop_to_colorBarTop_Constraint;
    NSLayoutConstraint *_timeTextWidthConstraint;
    NSLayoutConstraint *_timeTextLeftMarginConstraint;
    NSLayoutConstraint *_timeTextRightMarginConstraint;
    NSLayoutConstraint *_countdownLabelRightMarginConstraint;
    NSLayoutConstraint *_countdownLabelBaseling_to_contentBottom_Constraint;
    double _travelTime;
    UIColor *_eventCalendarColor;
    UIColor *_selectedBackGroundColor;
    NSDate *_eventStartDateIncludingTravelTime;
    EKCalendarDate *_eventStartDate;
    EKCalendarDate *_eventEndDate;
    NSString *_eventTitle;
    NSString *_eventLocation;
    NSString *_topTimeString;
    NSString *_bottomTimeString;
    NSString *_countdownLabelString;
    NSString *_travelTextLabelString;
    NSString *_travelAddressString;
    NSString *_travelDepartureTimeString;
    NSDictionary *_secondaryStringDrawingAttributes;
    NSDictionary *_topTimeStringDrawingAttributes;
    NSDictionary *_bottomTimeStringDrawingAttributes;
    NSDictionary *_travelTextLabelStringDrawingAttributes;
    NSDictionary *_travelAddressStringDrawingAttributes;
    NSDictionary *_travelDepartureTimeStringDrawingAttributes;
    _Bool _isPast;
    _Bool _isAllDay;
    _Bool _isRecurring;
    _Bool _isBirthday;
    _Bool _tentative;
    _Bool _declined;
    _Bool _needsReply;
    _Bool _cancelled;
    _Bool _opaque;
    NSObject<OS_dispatch_source> *_countdownLabelUpdateTimer;
    _Bool _selected;
    _Bool _doesNotUseTemplate;
    _Bool _isTemplateCell;
    _Bool _isFakeInvitation;
    UIColor *_selectionTintColor;
    UIView *_selectedBackgroundView;
    UIVisualEffect *_primaryVisualEffect;
    UIVisualEffect *_secondaryVisualEffect;
}

@property (retain, nonatomic) UIColor *selectionTintColor;
@property (retain, nonatomic) UIView *selectedBackgroundView;
@property (nonatomic) _Bool selected;
@property (nonatomic) _Bool doesNotUseTemplate;
@property (nonatomic) _Bool isTemplateCell;
@property (nonatomic) _Bool isFakeInvitation;
@property (retain, nonatomic) UIVisualEffect *primaryVisualEffect;
@property (retain, nonatomic) UIVisualEffect *secondaryVisualEffect;

+ (void)initialize;
+ (_Bool)requiresConstraintBasedLayout;
+ (id)normalBackgroundColor;
+ (void)_clearCaches;
+ (id)needsReplyStripeColor;
+ (double)needsReplyStripeBackgroundAlpha;
+ (id)tentativeStripeColor;
+ (double)tentativeStripeBackgroundAlpha;
+ (id)cancelledDeclinedColorBarColor;
+ (_Bool)vibrant;
+ (id)_allDayLocalizedString;
+ (double)_rightImageSpacing;
+ (id)_needsReplyAngledStripeBackground;
+ (id)_tentativeAngledStripeBackground;
+ (double)cellHeightForWidth:(double)arg1;
+ (id)_nowLocalizedString;

- (void)dealloc;
- (_Bool)isCancelled;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)imageView;
- (void)updateConstraints;
- (id)textLabel;
- (id)detailTextLabel;
- (id)normalBackgroundColor;
- (void)_updateAccessoryImage;
- (id)accessoryImage;
- (_Bool)isAllDay;
- (id)primaryTextColor;
- (id)secondaryTextColor;
- (void)_setUpConstraints;
- (void)_createViews;
- (id)needsReplyStripeColor;
- (double)needsReplyStripeBackgroundAlpha;
- (id)tentativeStripeColor;
- (double)tentativeStripeBackgroundAlpha;
- (id)cancelledDeclinedColorBarColor;
- (id)invitationPrimaryTextColor;
- (void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 opaque:(_Bool)arg4 drawsDimmedForPast:(_Bool)arg5;
- (void)_updateContentForSizeCategoryChange:(id)arg1;
- (double)_verticalSpacingTopToBaselineForTopLabel;
- (double)_verticalSpacingTopToBaselineForBottomLabel;
- (double)_verticalSpacingBottomToBaselineForBottomLabel;
- (id)prefixTextColor;
- (id)primaryStrikethroughTextColor;
- (id)primaryPastTextColor;
- (id)secondaryStrikethroughTextColor;
- (id)secondaryPastTextColor;
- (void)setCalendarColor:(id)arg1;
- (_Bool)isDeclined;
- (_Bool)isTentative;
- (_Bool)needsReply;
- (_Bool)isBirthday;
- (id)colorBarColor;
- (void)_uninstallCountdownTimer;
- (void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 opaque:(_Bool)arg4 drawsDimmedForPast:(_Bool)arg5 includingTravelTime:(_Bool)arg6;
- (void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 opaque:(_Bool)arg4 drawsDimmedForPast:(_Bool)arg5 includingTravelTime:(_Bool)arg6 includingCountdown:(_Bool)arg7;
- (void)_updateSecondaryTextLabel;
- (void)_updateTravelTimeLabel;
- (void)forceUpdateOfAllElements;
- (void)_updatePrimaryTextLabel;
- (void)_updateCountdownLabel;
- (void)_updateTopTimeLabel;
- (void)_updateBottomTimeLabel;
- (void)_updateTravelDepartureTimeLabel;
- (void)_updateColorBarColor;
- (void)_updateAngleBackgroundColor;
- (id)_birthdayIcon;
- (id)_needsReplyDot;
- (void)contentCategorySizeChanged;
- (void)_addVibrantSubview:(id)arg1 usingPrimaryEffect:(_Bool)arg2;
- (id)_createParentVisualEffectViewWithVisualEffect:(id)arg1;
- (double)_widthForTimeViews;
- (double)_leftMarginForTimeViewsFromTimeWidth:(double)arg1;
- (double)_rightMarginForTimeViewsFromTimeWidth:(double)arg1;
- (id)_textForCountdownLabelWithCurrentDate:(id)arg1;
- (void)_installCountdownTimerWithFireDate:(id)arg1;
- (void)_countdownTimerFired;
- (_Bool)_eventIsNow;
- (void)_resetCountdownTimerBasedOnCurrentDateForStringGeneration:(id)arg1;
- (id)_textForTopTimeLabel;
- (id)_textForBottomTimeLabel;
- (id)_textForDepartureTimeLabel;
- (id)_selectedBackgroundViewWithColor:(id)arg1;
- (void)setColorBarLayerFilter:(id)arg1;
- (_Bool)isPast;
- (id)_sharedNumberFormatter;

@end
