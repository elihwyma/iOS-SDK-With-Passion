/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventDetailItem.h>

@class EKEventDetailTitleCell, NSDate, NSObject, UIColor, UIView;

@protocol EKEventTitleDetailItemDelegate;

__attribute__((visibility("hidden")))
@interface EKEventTitleDetailItem : EKEventDetailItem

{
    EKEventDetailTitleCell *_cell;
    UIColor *_color;
    _Bool _showDot;
    _Bool _cellNeedsUpdate;
    _Bool _hidesSeparator;
    _Bool _hasMapItemLaunchOptionFromTimeToLeaveNotification;
    NSDate *_proposedTime;
    NSObject<EKEventTitleDetailItemDelegate> *_editDelegate;
    unsigned long long _numberOfTitleLines;
}

@property (nonatomic) _Bool hidesSeparator;
@property (retain, nonatomic) NSDate *proposedTime;
@property (nonatomic, readonly) UIView *sourceViewForPopover;
@property (weak, nonatomic) NSObject<EKEventTitleDetailItemDelegate> *editDelegate;
@property (nonatomic) _Bool hasMapItemLaunchOptionFromTimeToLeaveNotification;
@property (nonatomic) unsigned long long numberOfTitleLines;

- (void)reset;
- (void)editButtonPressed;
- (double)titleHeight;
- (void)setCellPosition:(int)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (void)_updateCellIfNeededForWidth:(double)arg1;
- (_Bool)shouldShowEditButtonInline;
- (_Bool)minimalMode;
- (void)predictionWasActedOn;

@end
