/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSDMagicMoveAnimationMatch, TSDTextureSet;

@interface TSDMagicMoveTextureZOrdererMatch : NSObject

{
    _Bool _isOutgoingZIndexUnmatched;
    _Bool _isIncomingZIndexUnmatched;
    TSDTextureSet *_outgoingTexture;
    TSDTextureSet *_incomingTexture;
    long long _outgoingZIndex;
    long long _incomingZIndex;
    TSDMagicMoveAnimationMatch *_animationMatch;
}

@property (nonatomic, readonly) TSDTextureSet *outgoingTexture;
@property (nonatomic, readonly) TSDTextureSet *incomingTexture;
@property (nonatomic) long long outgoingZIndex;
@property (nonatomic) long long incomingZIndex;
@property (nonatomic, readonly) _Bool isOutgoingZIndexUnmatched;
@property (nonatomic, readonly) _Bool isIncomingZIndexUnmatched;
@property (nonatomic, readonly) TSDMagicMoveAnimationMatch *animationMatch;

- (id)description;
- (id)initWithAnimationMatch:(id)arg1;
- (_Bool)intersectsZOrdererMatch:(id)arg1 withAttemptedZIndex:(long long)arg2;
- (_Bool)intersectsZOrdererMatch:(id)arg1;
- (double)intersectionPercentWithZOrdererMatch:(id)arg1;
- (double)interpolatedZIndexAtPercent:(double)arg1;

@end
