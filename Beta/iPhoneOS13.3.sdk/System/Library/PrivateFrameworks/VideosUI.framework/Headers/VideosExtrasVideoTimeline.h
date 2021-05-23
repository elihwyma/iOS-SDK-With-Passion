/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VideosExtrasVideoTimeline : NSObject

{
    NSArray *_timelineElements;
    NSArray *_events;
}

@property (nonatomic, readonly) NSArray *events;

- (id)description;
- (id)initWithTimelineElements:(id)arg1;
- (id)eventForTime:(double)arg1;

@end
