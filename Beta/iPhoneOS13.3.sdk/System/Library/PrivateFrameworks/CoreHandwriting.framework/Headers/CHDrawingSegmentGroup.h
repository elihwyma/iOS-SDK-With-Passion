/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface CHDrawingSegmentGroup : NSObject

{
    long long _segmentGroupIndex;
    NSArray *_segments;
    NSArray *_delayedSegments;
}

@property (nonatomic, readonly) long long segmentGroupIndex;
@property (nonatomic, readonly) NSArray *segments;
@property (nonatomic, readonly) NSArray *delayedSegments;
@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic, readonly) long long totalSegmentCount;

+ (id)segmentGroupsFromSegments:(id)arg1 delayedSegments:(id)arg2 segmentGroupRanges:(id)arg3;

- (void)dealloc;
- (id)initWithSegmentGroupIndex:(long long)arg1 segments:(id)arg2 delayedSegments:(id)arg3;

@end
