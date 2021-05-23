/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class _TimelineEntryNode;

@interface _TimelineNode : NSObject

{
    _TimelineNode *_rightNode;
    _TimelineNode *_leftNode;
}

@property (retain, nonatomic) _TimelineNode *rightNode;
@property (retain, nonatomic) _TimelineNode *leftNode;
@property (nonatomic, readonly) _TimelineEntryNode *rightEntryNode;
@property (nonatomic, readonly) _TimelineEntryNode *leftEntryNode;

@end
