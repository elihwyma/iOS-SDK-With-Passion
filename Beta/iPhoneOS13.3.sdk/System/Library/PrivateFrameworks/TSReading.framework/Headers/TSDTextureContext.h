/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@protocol TSDAnimationSession;

@interface TSDTextureContext : NSObject <Swift>

{
    id <TSDAnimationSession> _session;
    unsigned int _isMagicMove:1;
    unsigned int _shouldAddFinal:1;
    unsigned int _shouldAddReversedFinal:1;
    unsigned int _shouldAddMagicMoveObjectOnly:1;
    unsigned int _shouldNotAddContainedReps:1;
    unsigned int _shouldNotAddShapeAttributes:1;
    unsigned int _shouldNotAddText:1;
    unsigned int _shouldNotCacheTexture:1;
    unsigned int _shouldSeparateReflection:1;
    unsigned int _shouldSeparateShadow:1;
    unsigned int _shouldSeparateStroke:1;
    unsigned int _shouldSeparateText:1;
    unsigned int _shouldDistortToFit:1;
    unsigned int _shouldForceTextureGeneration:1;
    _Bool _shouldAddNoShapeAttributes;
}

@property (nonatomic) id <TSDAnimationSession> session;
@property (nonatomic) _Bool isMagicMove;
@property (nonatomic) _Bool shouldAddFinal;
@property (nonatomic) _Bool shouldAddReversedFinal;
@property (nonatomic) _Bool shouldAddMagicMoveObjectOnly;
@property (nonatomic) _Bool shouldDistortToFit;
@property (nonatomic) _Bool shouldNotAddContainedReps;
@property (nonatomic) _Bool shouldNotAddShapeAttributes;
@property (nonatomic) _Bool shouldNotAddText;
@property (nonatomic) _Bool shouldNotCacheTexture;
@property (nonatomic) _Bool shouldSeparateReflection;
@property (nonatomic) _Bool shouldSeparateShadow;
@property (nonatomic) _Bool shouldSeparateStroke;
@property (nonatomic) _Bool shouldSeparateText;
@property (nonatomic) _Bool shouldForceTextureGeneration;

+ (id)context;
+ (id)contextWithSession:(id)arg1;
+ (id)contextWithTextureContext:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;

@end
