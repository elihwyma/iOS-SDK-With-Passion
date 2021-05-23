/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/_TimelineNode.h>

@class NSDate;

@protocol CLKTimelineEntry;

@interface _TimelineEntryNode : _TimelineNode

{
    id <CLKTimelineEntry> _entry;
}

@property (retain, nonatomic) id <CLKTimelineEntry> entry;
@property (nonatomic, readonly) NSDate *date;

@end
