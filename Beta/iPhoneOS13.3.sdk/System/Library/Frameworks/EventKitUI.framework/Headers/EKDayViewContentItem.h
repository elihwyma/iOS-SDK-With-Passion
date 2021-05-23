/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKCalendarDate, EKDayOccurrenceContentPayload, EKDayOccurrenceState, EKDayOccurrenceView, EKEvent, NSDate, NSString;

@interface EKDayViewContentItem : NSObject

{
    struct CGRect _stagedFrame;
    struct CGRect _unPinnedViewFrame;
    double _visibleHeight;
    _Bool _visibleHeightLocked;
    double _travelTimeHeight;
    long long _sizeClass;
    long long _currentRequestId;
    EKDayOccurrenceContentPayload *_stagedPayload;
    _Bool _usesSmallText;
    _Bool _isProposedTime;
    _Bool _isLoadingAsync;
    EKEvent *_event;
    unsigned long long _eventIndex;
    EKDayOccurrenceView *_view;
    EKCalendarDate *_startDate;
    EKCalendarDate *_endDate;
    double _travelTime;
    double _topPinningProximity;
    double _bottomPinningProximity;
    EKDayOccurrenceState *_currentState;
}

@property (nonatomic, readonly) EKDayOccurrenceState *currentState;
@property (retain, nonatomic) EKEvent *event;
@property (nonatomic) _Bool usesSmallText;
@property (nonatomic) _Bool isProposedTime;
@property (nonatomic) _Bool isLoadingAsync;
@property (nonatomic, readonly) unsigned long long eventIndex;
@property (retain, nonatomic) EKDayOccurrenceView *view;
@property (copy, nonatomic) EKCalendarDate *startDate;
@property (copy, nonatomic, readonly) EKCalendarDate *startDateIncludingTravelTime;
@property (copy, nonatomic) EKCalendarDate *endDate;
@property (nonatomic) double travelTime;
@property (nonatomic) double travelTimeHeight;
@property (nonatomic) double topPinningProximity;
@property (nonatomic) double bottomPinningProximity;
@property (nonatomic) double visibleHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDate *startWithTravelTime;
@property (nonatomic, readonly) NSDate *start;
@property (nonatomic, readonly) NSDate *end;
@property (nonatomic, readonly) _Bool hideTravelTime;
@property (nonatomic, readonly) double enoughHeightForOneLine;
@property (nonatomic, readonly) double viewMaxNaturalTextHeight;
@property struct CGRect unPinnedViewFrame;
@property (readonly) _Bool visibleHeightLocked;

+ (double)barToBarHorizontalDistanceIncludingBarWidth;

- (_Bool)isEqual:(id)arg1;
- (_Bool)isPinned;
- (void)resetVisibleHeight;
- (void)_updateWithPayload:(id)arg1;
- (void)setStagedFrame:(struct CGRect)arg1;
- (struct CGRect)stagedFrame;
- (id)initWithEventIndex:(unsigned long long)arg1 sizeClass:(long long)arg2;
- (void)_requestPayload:(_Bool)arg1;

@end
