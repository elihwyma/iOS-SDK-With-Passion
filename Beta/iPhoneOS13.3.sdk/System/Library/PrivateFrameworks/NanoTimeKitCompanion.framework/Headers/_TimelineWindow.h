/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSString, _TimelineEntryNode, _TimelineSegment;

@interface _TimelineWindow : NSObject

{
    unsigned long long _maxNodes;
    _TimelineEntryNode *_focalNode;
    _TimelineSegment *_leftSegment;
    _TimelineSegment *_rightSegment;
}

@property (nonatomic, readonly) _TimelineEntryNode *focalNode;
@property (nonatomic, readonly) _TimelineSegment *leftSegment;
@property (nonatomic, readonly) _TimelineSegment *rightSegment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)containsNode:(id)arg1;
- (id)initWithFocalNode:(id)arg1 maxNodes:(unsigned long long)arg2;
- (id)leftmostNode;
- (id)rightmostNode;
- (void)rebalance;
- (void)updateFocalNodeWithDate:(id)arg1;
- (id)leftmostContiguousEntryDate;
- (id)rightmostContiguousEntryDate;
- (unsigned long long)leftEntryCount;
- (unsigned long long)rightEntryCount;

@end
