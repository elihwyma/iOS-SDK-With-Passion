/*
 Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface SUICFlameGroup : NSObject

{
    _Bool _isAura;
    _Bool _isDyingOff;
    float _stateTime;
    float _zTime;
    float _globalAlpha;
    float _transitionPhase;
    float *_transitionPhasePtr;
    MISSING_TYPE **_stateModifiersPtr;
    MISSING_TYPE *_stateModifiers;
}

@property (nonatomic) float stateTime;
@property (nonatomic) float zTime;
@property (nonatomic) float globalAlpha;
@property (nonatomic) float transitionPhase;
@property (nonatomic) float *transitionPhasePtr;
@property (nonatomic) MISSING_TYPE *stateModifiers;
@property (nonatomic) MISSING_TYPE **stateModifiersPtr;
@property (nonatomic) _Bool isAura;
@property (nonatomic) _Bool isDyingOff;

- (id)init;
- (id)description;

@end
