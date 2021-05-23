/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/MiroFreezeInfo.h>

__attribute__((visibility("hidden")))
@interface MiroVideoRangeFreezeInfo : MiroFreezeInfo

{
    _Bool _added;
    _Bool _removed;
    _Bool _used;
    _Bool _trimmed;
    _Bool _userModified;
    float _normalGain;
    float _dimmedGain;
    unsigned long long _mute;
    double _start;
    double _duration;
}

@property (nonatomic) _Bool added;
@property (nonatomic) _Bool removed;
@property (nonatomic) _Bool used;
@property (nonatomic) _Bool trimmed;
@property (nonatomic) unsigned long long mute;
@property (nonatomic, readonly) float gain;
@property (nonatomic) float normalGain;
@property (nonatomic) float dimmedGain;
@property (nonatomic) double start;
@property (nonatomic) double duration;
@property (nonatomic) _Bool userModified;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dataRepresentation;

@end
