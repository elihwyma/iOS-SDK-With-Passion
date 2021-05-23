/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate;

@interface CLSNowPlayingStreamSession : NSObject

{
    NSDate *_localEndDate;
    NSDate *_localStartDate;
    NSArray *_events;
}

@property (copy, nonatomic) NSArray *events;
@property (nonatomic, readonly) NSDate *localStartDate;
@property (nonatomic, readonly) NSDate *localEndDate;

+ (id)playbackStreamSessionDateSortDescriptors;

- (id)description;
- (id)debugDescription;
- (id)initWithEvents:(id)arg1;
- (id)initWithDataCluster:(id)arg1;

@end
