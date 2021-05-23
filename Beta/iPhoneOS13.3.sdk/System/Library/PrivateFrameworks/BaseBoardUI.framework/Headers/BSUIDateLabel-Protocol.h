/*
 Image: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
 */

#import <BaseBoardUI/Swift-Protocol.h>

@class MISSING_TYPE;

@protocol BSUIDateLabelDelegate;

@protocol BSUIDateLabel <Swift>

@property (nonatomic, getter=isAllDay) _Bool allDay;
@property (weak, nonatomic) id <BSUIDateLabelDelegate> delegate;
@property (nonatomic) long long labelType;
@property (nonatomic) _Bool isTimestamp;

- (MISSING_TYPE *)prepareForReuse;
- (MISSING_TYPE *)startCoalescingUpdates;
- (MISSING_TYPE *)setStartDate:withTimeZone: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setEndDate:withTimeZone: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)stopCoalescingUpdates;

@end
