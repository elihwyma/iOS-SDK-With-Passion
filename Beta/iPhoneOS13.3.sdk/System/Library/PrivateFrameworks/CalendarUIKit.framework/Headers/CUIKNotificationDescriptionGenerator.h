/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <CalendarUIKit/CUIKDescriptionGenerator.h>

@class NSDateFormatter, NSNumberFormatter;

@interface CUIKNotificationDescriptionGenerator : CUIKDescriptionGenerator

{
    NSNumberFormatter *_numberFormatter;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_timeFormatter;
    NSDateFormatter *_dateTimeFormatter;
}

+ (id)comment:(id)arg1 withInsertedAutoCommentForDate:(id)arg2;
+ (id)stringWithAutoCommentRemoved:(id)arg1;
+ (id)sharedGenerator;
+ (id)autoCommentPrefix;
+ (_Bool)stringHasAutoCommentPrefix:(id)arg1;
+ (id)autoCommentForProposedTime:(id)arg1;
+ (id)stringWithOnlyAutoComment:(id)arg1;

- (id)_sharedNumberFormatter;
- (id)_sharedDateFormatter;
- (id)conflictStringForConflictDetails:(id)arg1 maxTitleLength:(unsigned long long)arg2;
- (id)_adjustedTitle:(id)arg1 maxLength:(unsigned long long)arg2;
- (id)_sharedTimeFormatter;
- (id)_sharedDateTimeFormatter;
- (id)titleStringForNotification:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)descriptionForNotification:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)descriptionStringsForNotification:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)timePeriodForTimeInterval:(id)arg1;
- (id)conflictStringForConflictDetails:(id)arg1;

@end
