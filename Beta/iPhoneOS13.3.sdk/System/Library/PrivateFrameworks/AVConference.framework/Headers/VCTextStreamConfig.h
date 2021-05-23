/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCMediaStreamConfig.h>

__attribute__((visibility("hidden")))
@interface VCTextStreamConfig : VCMediaStreamConfig

{
    unsigned char _numRedundantPayloads;
    _Bool _redEnabled;
    float _txIntervalMin;
}

@property (nonatomic, readonly, getter=isRedEnabled) _Bool redEnabled;
@property (nonatomic) unsigned char numRedundantPayloads;
@property (nonatomic) float txIntervalMin;

- (id)initWithClientDictionary:(id)arg1;
- (_Bool)setupCodecWithClientDictionary:(id)arg1;

@end
