/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/_TimelineNode.h>

@interface _TimelineGapNode : _TimelineNode

{
    unsigned long long _count;
}

@property (nonatomic) unsigned long long count;

- (void)incrementCount;

@end
