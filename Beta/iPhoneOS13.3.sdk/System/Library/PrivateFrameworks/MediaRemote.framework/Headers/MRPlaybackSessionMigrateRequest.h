/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSString, _MRContentItemProtobuf, _MRPlaybackSessionMigrateRequestProtobuf, _MRPlaybackSessionRequestProtobuf;

@interface MRPlaybackSessionMigrateRequest : NSObject

{
    _MRPlaybackSessionMigrateRequestProtobuf *_descriptor;
}

@property (nonatomic) long long playerOptions;
@property (nonatomic) long long endpointOptions;
@property (retain, nonatomic) NSString *requestID;
@property (nonatomic) double playbackPosition;
@property (nonatomic) double playbackRate;
@property (nonatomic) unsigned int playbackState;
@property (retain, nonatomic) _MRContentItemProtobuf *contentItem;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSString *report;
@property (retain, nonatomic) _MRPlaybackSessionRequestProtobuf *playbackSessionRequest;
@property (nonatomic, readonly) _MRPlaybackSessionMigrateRequestProtobuf *descriptor;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)merge:(id)arg1;
- (id)initWithDescriptor:(id)arg1;
- (void)endEvent:(id)arg1;
- (void)startEvent:(id)arg1;
- (void)endEvent:(id)arg1 withError:(id)arg2;

@end
