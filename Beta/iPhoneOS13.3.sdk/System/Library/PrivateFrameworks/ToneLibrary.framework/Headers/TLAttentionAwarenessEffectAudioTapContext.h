/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <Foundation/NSObject.h>

@class NSUUID, TLAttentionAwarenessEffectCoordinator, TLAttentionAwarenessEffectProcessor;

@interface TLAttentionAwarenessEffectAudioTapContext : NSObject

{
    TLAttentionAwarenessEffectCoordinator *_effectCoordinator;
    TLAttentionAwarenessEffectProcessor *_effectProcessor;
    NSUUID *_identifier;
}

@property (weak, nonatomic) TLAttentionAwarenessEffectCoordinator *effectCoordinator;
@property (retain, nonatomic) TLAttentionAwarenessEffectProcessor *effectProcessor;
@property (nonatomic, readonly) NSUUID *identifier;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
