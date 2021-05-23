/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSLock, TSDTextureSet;

@interface TSDMagicMoveAnimationMatch : NSObject

{
    TSDTextureSet *_morphTexture;
    TSDTextureSet *_morphQueuedTexture;
    TSDTextureSet *_morphQueuedForDeletionTexture;
    NSLock *_morphTextureUpdateLock;
    _Bool _isUsingMorphTexture;
    _Bool _didUseMorphTexture;
    _Bool _hasBeenTornDown;
    _Bool _isMorphMatch;
    _Bool _isTextStyleIdenticalExceptSize;
    _Bool _shouldDisableTextMorphing;
    TSDTextureSet *_outgoingTexture;
    TSDTextureSet *_incomingTexture;
}

@property (retain, nonatomic) TSDTextureSet *outgoingTexture;
@property (retain, nonatomic) TSDTextureSet *incomingTexture;
@property (nonatomic) _Bool isMorphMatch;
@property (nonatomic, readonly) _Bool isMatched;
@property (nonatomic) _Bool isTextStyleIdenticalExceptSize;
@property (nonatomic) _Bool shouldDisableTextMorphing;

+ (unsigned long long)magicMoveMorphTexturesPerSecond;
+ (id)animationMatch;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)teardown;
- (void)addMorphTexture:(id)arg1;
- (id)lockCurrentMorphTexture;
- (void)unlockCurrentMorphTexture;

@end
