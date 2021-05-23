/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <NSObject.h>

@class NSArray, NSMutableArray;

@interface CUIKSingleDayTimelineLayoutPartition : NSObject

{
    NSMutableArray *_stackOfOccurrences;
    double _topBoundaryTime;
    double _initialStartBoundary;
    double _endBoundary;
}

@property (nonatomic) double topBoundaryTime;
@property (nonatomic) double initialStartBoundary;
@property (nonatomic) double endBoundary;
@property (nonatomic, readonly) NSArray *stackedOccurrences;
@property (nonatomic, readonly) double freeSpaceStartBoundary;
@property (nonatomic, readonly) double freeSpaceWidth;
@property (nonatomic, readonly) double totalWidth;

- (id)init;
- (id)description;
- (id)peekOccurrence;
- (void)popOccurrence;
- (void)pushOccurrence:(id)arg1;

@end
