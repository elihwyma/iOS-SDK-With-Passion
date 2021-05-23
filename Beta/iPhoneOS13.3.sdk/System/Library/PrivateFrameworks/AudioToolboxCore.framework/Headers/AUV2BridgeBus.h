/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <AudioToolboxCore/AUAudioUnitBus.h>

@class AUAudioUnitV2Bridge;

__attribute__((visibility("hidden")))
@interface AUV2BridgeBus : AUAudioUnitBus

{
    AUAudioUnitV2Bridge *_owner;
    struct OpaqueAudioComponentInstance *_audioUnit;
    unsigned int _scope;
    unsigned int _element;
}

- (void)setEnabled:(_Bool)arg1;
- (id)format;
- (_Bool)setFormat:(id)arg1 error:(id *)arg2;
- (id)initWithOwner:(id)arg1 au:(struct OpaqueAudioComponentInstance *)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4;

@end
