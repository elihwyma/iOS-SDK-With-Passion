/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, VCMediaStream;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantMediaStreamInfo : NSObject

{
    VCMediaStream *_stream;
    NSMutableArray *_streamConfigs;
}

@property (retain, nonatomic) VCMediaStream *stream;
@property (nonatomic, readonly) NSArray *streamConfigs;

- (id)init;
- (void)dealloc;
- (void)addStreamConfig:(id)arg1;

@end
