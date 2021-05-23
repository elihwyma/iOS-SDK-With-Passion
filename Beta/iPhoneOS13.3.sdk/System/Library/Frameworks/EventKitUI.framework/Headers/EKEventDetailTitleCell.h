/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventDetailCell.h>

@class EKEventDetailPredictedLocationCell, NSMutableArray, NSObject, NSString, UIButton, UILabel, UIView;

@protocol EKEventDetailTitleCellDelegate;

@interface EKEventDetailTitleCell : EKEventDetailCell

{
    UILabel *_titleView;
    NSMutableArray *_locationItems;
    EKEventDetailPredictedLocationCell *_predictedLocationView;
    UILabel *_travelTimeView;
    NSMutableArray *_dateTimeViews;
    UILabel *_recurrenceView;
    UILabel *_statusView;
    UIButton *_editButton;
    unsigned int _visibleItems;
    _Bool _observingLocaleChanges;
    _Bool _rejectionReasonCell;
    _Bool _hideCellSeparator;
    int _lastPosition;
    _Bool _hasMapItemLaunchOptionFromTimeToLeaveNotification;
    _Bool _showingInlineDayView;
    NSObject<EKEventDetailTitleCellDelegate> *_delegate;
    unsigned long long _numberOfTitleLines;
}

@property (weak, nonatomic) NSObject<EKEventDetailTitleCellDelegate> *delegate;
@property (nonatomic) _Bool hasMapItemLaunchOptionFromTimeToLeaveNotification;
@property (nonatomic) _Bool showingInlineDayView;
@property (nonatomic) unsigned long long numberOfTitleLines;
@property (nonatomic, readonly) UIView *sourceViewForPopover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_titleFont;
+ (id)_locationFont;
+ (void)_invalidateCachedFonts;
+ (void)_geocodeEventIfNeeded:(id)arg1;
+ (id)_largeTitleFont;
+ (void)_registerForInvalidation;

- (void)dealloc;
- (void)setTitle:(id)arg1;
- (void)setColor:(id)arg1;
- (_Bool)update;
- (void)setLocation:(id)arg1;
- (void)layoutSubviews;
- (void)layoutMarginsDidChange;
- (id)_titleView;
- (id)_statusView;
- (void)setStatusString:(id)arg1;
- (void)addLocation:(id)arg1;
- (id)_editButton;
- (void)setPrimaryTextColor:(id)arg1;
- (double)titleHeight;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (id)initWithEvent:(id)arg1 editable:(_Bool)arg2 style:(long long)arg3;
- (double)_layoutForWidth:(double)arg1;
- (void)setTravelTimeString:(id)arg1;
- (void)setHideCellSeparator:(_Bool)arg1;
- (void)eventDetailPredictedLocationCellAcceptedPrediction:(id)arg1 disambiguatedLocation:(id)arg2;
- (void)eventDetailPredictedLocationCellRejectedPrediction:(id)arg1;
- (void)setRecurrenceString:(id)arg1;
- (_Bool)_useLargeFonts;
- (id)_dateTimeViewForLine:(unsigned long long)arg1;
- (id)_travelTimeView;
- (id)_recurrenceView;
- (id)_predictedLocationView;
- (void)_setDateTimeString:(id)arg1 line:(unsigned long long)arg2;
- (void)_updateSeparatorInsets;
- (void)editButtonTapped;
- (void)_saveEventWithSpan:(long long)arg1;
- (void)_promptForSpanWithSourceView:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initAsRejectionReasonCellWithEvent:(id)arg1;

@end
