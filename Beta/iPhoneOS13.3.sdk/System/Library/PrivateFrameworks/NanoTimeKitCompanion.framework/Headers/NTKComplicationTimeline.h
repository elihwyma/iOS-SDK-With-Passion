/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSDate, NSTimer, _TimelineEntryNode, _TimelineGapNode, _TimelineWindow;

@protocol NTKComplicationTimelineDelegate;

@interface NTKComplicationTimeline : NSObject

{
    _TimelineEntryNode *_leftmostNode;
    _TimelineEntryNode *_rightmostNode;
    _TimelineGapNode *_gapNode;
    _TimelineWindow *_nowWindow;
    _TimelineWindow *_timeTravelWindow;
    NSTimer *_timer;
    _Bool _paused;
    id <NTKComplicationTimelineDelegate> _delegate;
    NSDate *_timeTravelDate;
    NSDate *_timeTravelLeftBoundary;
    NSDate *_timeTravelRightBoundary;
}

@property (weak, nonatomic) id <NTKComplicationTimelineDelegate> delegate;
@property (retain, nonatomic) NSDate *timeTravelDate;
@property (nonatomic) _Bool paused;
@property (retain, nonatomic) NSDate *timeTravelLeftBoundary;
@property (retain, nonatomic) NSDate *timeTravelRightBoundary;

- (void)dealloc;
- (void)_timerFired;
- (void)_updateTimer;
- (id)initWithEntry:(id)arg1;
- (void)_setupWithEntry:(id)arg1;
- (void)_recycleAllNodes;
- (void)_updateNowWindow;
- (id)_nowNode;
- (long long)timeTravelWindowNodeCapacity;
- (void)_updateTimeTravelWindow;
- (void)_trimTimeline;
- (struct NSArray *)_sortedEntries:(struct NSArray *)arg1;
- (id)_rightmostDate;
- (id)_timelineSegmentFromSortedEntries:(struct NSArray *)arg1 withLowerBound:(id)arg2 upperBound:(id)arg3;
- (id)_beforeGapDate;
- (id)_afterGapDate;
- (id)_leftmostDate;
- (id)_nowEntry;
- (id)_timeTravelNode;
- (long long)nowWindowNodeCapacity;
- (id)timeTravelEntry;
- (id)_effectiveTimeTravelDate;
- (void)clearTimeTravelCache;
- (void)resetWithEntry:(id)arg1 withTritiumUpdatePriority:(long long)arg2;
- (void)extendRightFromDate:(id)arg1 withEntries:(struct NSArray *)arg2 tritiumUpdatePriority:(long long)arg3;
- (void)extendLeftFromDate:(id)arg1 withEntries:(struct NSArray *)arg2 tritiumUpdatePriority:(long long)arg3;
- (id)nowEntry;
- (id)nowWindow;
- (id)timeTravelWindow;
- (id)endOfVisibilityForNowEntry;

@end
