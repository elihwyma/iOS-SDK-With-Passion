/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <PlatterKit/PLExpandedPlatterView.h>

@class NCNotificationContentView, NSArray, NSDate, NSString, NSTimeZone, UIButton, UIControl, UIImage, UIScrollView, UITapGestureRecognizer, UIView;

@protocol NCNotificationLongLookViewDelegate;

@interface NCNotificationLongLookView : PLExpandedPlatterView

{
    NCNotificationContentView *_notificationContentView;
    UITapGestureRecognizer *_lookViewTapGestureRecognizer;
    _Bool _hidesNotificationContent;
    unsigned long long _customContentLocation;
}

@property (weak, nonatomic) id <NCNotificationLongLookViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool adjustsFontForContentSizeCategory;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (copy, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic, getter=isDateAllDay) _Bool dateAllDay;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) long long dateFormatStyle;
@property (nonatomic, readonly) NSArray *iconButtons;
@property (nonatomic, readonly) UIButton *utilityButton;
@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *primarySubtitleText;
@property (copy, nonatomic) NSString *secondaryText;
@property (retain, nonatomic) NSArray *interfaceActions;
@property (copy, nonatomic) NSString *summaryText;
@property (retain, nonatomic) UIImage *thumbnail;
@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) unsigned long long maximumNumberOfPrimaryTextLines;
@property (nonatomic) unsigned long long maximumNumberOfPrimaryLargeTextLines;
@property (nonatomic) unsigned long long maximumNumberOfSecondaryTextLines;
@property (nonatomic) unsigned long long maximumNumberOfSecondaryLargeTextLines;
@property (nonatomic, readonly) UIView *customContentView;
@property (nonatomic) _Bool hasShadow;
@property (nonatomic, getter=isBackgroundBlurred) _Bool backgroundBlurred;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic) struct CGSize customContentSize;
@property (nonatomic, getter=isActionsHidden) _Bool actionsHidden;
@property (nonatomic, readonly) UIControl *dismissControl;
@property (nonatomic, readonly) struct UIEdgeInsets dismissControlInsets;
@property (nonatomic) long long dismissControlPosition;
@property (nonatomic) _Bool clipsVisibleContentToBounds;
@property (nonatomic) double contentBottomInset;
@property (nonatomic) unsigned long long customContentLocation;
@property (nonatomic) _Bool hidesNotificationContent;
@property (nonatomic, readonly) UITapGestureRecognizer *lookViewTapGestureRecognizer;

- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)_contentViewSize;
- (_Bool)adjustForContentSizeCategoryChange;
- (void)_layoutCustomContentView;
- (struct CGSize)_contentSizeThatFitsContentWithSizeExcludingActions:(struct CGSize)arg1;
- (void)_configureCustomContentView;
- (struct CGRect)_actionsViewFrame;
- (struct CGRect)_mainContentViewFrame;
- (void)_configureLookViewTapGestureRecognizerIfNecessary;
- (void)_updateTopMargin;
- (void)_configureNotificationContentViewIfNecessary;
- (long long)lookStyle;
- (void)_layoutNotificationContentView;
- (void)_layoutCustomContentViewInRelationToContentView;
- (_Bool)_lookViewTapGestureRecognizerShouldReceiveTouch:(id)arg1;
- (void)notificationContentView:(id)arg1 willInteractWithURL:(id)arg2;

@end
