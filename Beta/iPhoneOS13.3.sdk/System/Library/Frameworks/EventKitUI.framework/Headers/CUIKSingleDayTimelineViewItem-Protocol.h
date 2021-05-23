/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/Swift-Protocol.h>

@class EKEvent, NSDate;

@protocol CUIKSingleDayTimelineViewItem <Swift>

@property (nonatomic, readonly) NSDate *startWithTravelTime;
@property (nonatomic, readonly) NSDate *start;
@property (nonatomic, readonly) NSDate *end;
@property (nonatomic, readonly) _Bool hideTravelTime;
@property (nonatomic, readonly) double enoughHeightForOneLine;
@property (nonatomic, readonly) double viewMaxNaturalTextHeight;
@property (nonatomic, readonly) EKEvent *event;
@property struct CGRect unPinnedViewFrame;
@property (readonly) _Bool visibleHeightLocked;

+ (unsigned short)barToBarHorizontalDistanceIncludingBarWidth;

- (unsigned short)setVisibleHeight: /* Error: Ran out of types for this method. */;
- (unsigned short)setStagedFrame: /* Error: Ran out of types for this method. */;
- (unsigned short)stagedFrame;
- (unsigned short)setTravelTimeHeight: /* Error: Ran out of types for this method. */;

@end
