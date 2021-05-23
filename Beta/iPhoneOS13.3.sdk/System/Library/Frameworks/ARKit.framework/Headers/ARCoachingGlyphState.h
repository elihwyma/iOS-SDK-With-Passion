/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@protocol ARCoachingGlyphStateDelegate;

@interface ARCoachingGlyphState : NSObject

{
    CDStruct_0e8a9a91 _quaternionTarget;
    MISSING_TYPE *_scaleTarget;
    unsigned long long _snapState;
    _Bool _isVertical;
    id <ARCoachingGlyphStateDelegate> _delegate;
    MISSING_TYPE *_topPlaneTranslationTarget;
    MISSING_TYPE *_bottomPlaneTranslationTarget;
}

@property (weak, nonatomic) id <ARCoachingGlyphStateDelegate> delegate;
@property (nonatomic) unsigned long long snapState;
@property (nonatomic, readonly) CDStruct_183601bc quaternionTarget;
@property (nonatomic, readonly) MISSING_TYPE *scaleTarget;
@property (nonatomic, readonly) MISSING_TYPE *topPlaneTranslationTarget;
@property (nonatomic, readonly) MISSING_TYPE *bottomPlaneTranslationTarget;
@property (nonatomic) _Bool isVertical;

- (id)init;
- (CDStruct_183601bc)computeQuaternionTarget;
- (void)setQuaternionTarget:(CDStruct_183601bc)arg1;
- (MISSING_TYPE *)computeScaleTarget;
- (void)setScaleTarget: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)computeTopPlaneTranslationTarget;
- (void)setTopPlaneTranslationTarget: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)computeBottomPlaneTranslationTarget;
- (void)setBottomPlaneTranslationTarget: /* Error: Ran out of types for this method. */;

@end
