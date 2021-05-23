/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface EKDayOccurrenceViewIterator : NSObject

{
    long long _currentIndex;
    long long _firstTimedOccurrenceIndex;
    NSArray *_occurrenceViews;
}

@property long long currentIndex;
@property long long firstTimedOccurrenceIndex;
@property (retain, nonatomic) NSArray *occurrenceViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)next;
- (id)previous;
- (void)_prepareOccurrenceViewsForIteration:(id)arg1 selectedEvent:(id)arg2 result:(CDUnknownBlockType)arg3;
- (long long)_nextIndexFromCurrentIndex:(long long)arg1 forward:(_Bool)arg2;
- (id)_occurrenceViewAtIndex:(long long)arg1;
- (long long)_selectedOccurrenceViewIndexInOccurrenceViews:(id)arg1 selectedEvent:(id)arg2;
- (long long)_selectedCopyOccurrenceViewIndexInOccurrenceViews:(id)arg1 selectedIndex:(long long)arg2;
- (long long)_firstTimedOccurrenceViewIndexInOccurrenceViews:(id)arg1;
- (void)_separateOccurrenceViews:(id)arg1 result:(CDUnknownBlockType)arg2;
- (id)initWithOccurrenceViews:(id)arg1 selectedEvent:(id)arg2;

@end
