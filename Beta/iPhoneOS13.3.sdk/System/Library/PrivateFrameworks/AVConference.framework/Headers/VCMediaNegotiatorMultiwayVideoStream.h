/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCMediaNegotiatorMultiwayMediaStream.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorMultiwayVideoStream : VCMediaNegotiatorMultiwayMediaStream

{
    struct CGSize _size;
    unsigned int _frameRate;
    unsigned int _keyFrameInterval;
    int _payload;
}

@property (nonatomic) struct CGSize size;
@property (nonatomic) unsigned int frameRate;
@property (nonatomic) unsigned int keyFrameInterval;
@property (nonatomic) int payload;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
