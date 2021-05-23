/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class _TimelineEntryNode;

@interface _TimelineSegment : NSObject

{
    _TimelineEntryNode *_leftmostNode;
    _TimelineEntryNode *_rightmostNode;
    unsigned long long _count;
}

@property (nonatomic, readonly) _TimelineEntryNode *leftmostNode;
@property (nonatomic, readonly) _TimelineEntryNode *rightmostNode;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) double duration;

- (_Bool)containsNode:(id)arg1;
- (id)initWithLeftmostNode:(id)arg1 rightmostNode:(id)arg2 count:(unsigned long long)arg3;
- (_Bool)expandToRight;
- (_Bool)contractFromLeft;
- (_Bool)expandToLeft;
- (_Bool)contractFromRight;
- (_Bool)shiftRight;
- (_Bool)shiftLeft;

@end
