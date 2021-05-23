/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <AudioToolboxCore/AUAudioUnitBusArray.h>

__attribute__((visibility("hidden")))
@interface AUAudioUnitBusArray_XH : AUAudioUnitBusArray

{
    _Bool _countWritable;
}

- (_Bool)setBusCount:(unsigned long long)arg1 error:(id *)arg2;
- (id)initWithOwner:(id)arg1 scope:(unsigned int)arg2 busses:(id)arg3 countWritable:(_Bool)arg4;
- (_Bool)isCountChangeable;

@end
