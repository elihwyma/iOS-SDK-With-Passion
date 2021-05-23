/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class CLSNowPlayingStreamEventMetadata, NSDate;

@interface CLSNowPlayingStreamEvent : NSObject

{
    NSDate *_localStartDate;
    NSDate *_localEndDate;
    CLSNowPlayingStreamEventMetadata *_metadata;
}

@property (copy, nonatomic, readonly) CLSNowPlayingStreamEventMetadata *metadata;
@property (nonatomic, readonly) NSDate *localStartDate;
@property (nonatomic, readonly) NSDate *localEndDate;

+ (id)playbackStreamEventDateSortDescriptors;

- (id)description;
- (id)initWithDuetKnowledgeEvent:(id)arg1;

@end
