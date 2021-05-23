/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <Foundation/NSObject.h>

@class MTMetricsData, MTVPAFKit;

@protocol MTMediaPlaylistItem;

@interface MTMediaActivity : NSObject

{
    long long _type;
    id <MTMediaPlaylistItem> _playlistItem;
    MTMetricsData *_startMetricsData;
    MTMetricsData *_stopMetricsData;
    MTVPAFKit *_vpafKit;
}

@property (weak, nonatomic) MTVPAFKit *vpafKit;
@property (nonatomic) long long type;
@property (retain, nonatomic) MTMetricsData *startMetricsData;
@property (retain, nonatomic) MTMetricsData *stopMetricsData;
@property (retain, nonatomic) id <MTMediaPlaylistItem> playlistItem;

+ (unsigned long long)startOverallPositionForItem:(id)arg1;

- (_Bool)isStopped;
- (id)startEventHandler;
- (unsigned long long)positionFromOverallPosition:(unsigned long long)arg1;
- (id)stopEventHandler;
- (id)initWithType:(long long)arg1 playlistItem:(id)arg2 vpafKit:(id)arg3;
- (void)startedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)stoppedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (id)eventDataForTransitioningEvents;

@end
