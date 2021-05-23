/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKCalendar, EKGroupInfo, NSString, UIColor, UIImage;

@interface EKCalendarInfo : NSObject

{
    NSString *_title;
    _Bool _selected;
    _Bool _isEnabled;
    int _customGroupType;
    EKCalendar *_calendar;
    UIColor *_color;
    EKGroupInfo *_group;
}

@property (retain, nonatomic) EKCalendar *calendar;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) _Bool selected;
@property (weak, nonatomic) EKGroupInfo *group;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) int displayOrder;
@property (nonatomic, readonly) _Bool isSubscribed;
@property (nonatomic, readonly) _Bool isShared;
@property (nonatomic, readonly) _Bool isPublished;
@property (nonatomic, readonly) _Bool isEditable;
@property (nonatomic) _Bool isEnabled;
@property (nonatomic, readonly) _Bool excludeFromSelectAll;
@property (nonatomic) int customGroupType;
@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, readonly) UIImage *highlightedIcon;

- (id)description;
- (id)initWithCalendar:(id)arg1;
- (void)_updateCustomGroupType;

@end
