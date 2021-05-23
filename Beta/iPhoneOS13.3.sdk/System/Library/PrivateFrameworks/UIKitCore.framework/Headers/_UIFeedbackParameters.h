/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class _UIFeedback;

@interface _UIFeedbackParameters : NSObject <Swift>

{
    float _volume;
    float _rate;
    float _transposition;
    float _attackTime;
    float _decayTime;
    float _releaseTime;
    _UIFeedback *_feedback;
    _UIFeedbackParameters *_parentParameters;
}

@property (weak, nonatomic) _UIFeedback *feedback;
@property (weak, nonatomic) _UIFeedbackParameters *parentParameters;
@property (nonatomic, readonly, getter=_isAudio) _Bool audio;
@property (nonatomic, readonly, getter=_effectiveVolume) float effectiveVolume;
@property (nonatomic) float volume;
@property (nonatomic) float rate;
@property (nonatomic) float transposition;
@property (nonatomic) float attackTime;
@property (nonatomic) float decayTime;
@property (nonatomic) float releaseTime;

+ (id)parameters;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (float)_effectiveValueForParameterWithKey:(id)arg1;
- (id)initWithFeedback:(id)arg1;
- (void)_updateParameterWithKey:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1 feedback:(id)arg2;

@end
