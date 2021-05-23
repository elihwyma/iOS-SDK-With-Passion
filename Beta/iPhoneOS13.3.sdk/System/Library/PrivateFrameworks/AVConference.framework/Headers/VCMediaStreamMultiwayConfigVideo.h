/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCMediaStreamMultiwayConfig.h>

@class NSArray, NSMutableArray, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface VCMediaStreamMultiwayConfigVideo : VCMediaStreamMultiwayConfig

{
    long long _resolution;
    NSMutableSet *_payloads;
    unsigned int _framerate;
    unsigned long long _keyFrameInterval;
    NSMutableArray *_subStreamConfigs;
}

@property (nonatomic) long long resolution;
@property (nonatomic) unsigned int framerate;
@property (nonatomic, readonly) NSSet *payloads;
@property (nonatomic) unsigned long long keyFrameInterval;
@property (nonatomic, readonly) NSArray *subStreamConfigs;

- (id)init;
- (void)dealloc;
- (id)streamIds;
- (void)addPayload:(int)arg1;
- (void)addSubStreamConfig:(id)arg1;

@end
