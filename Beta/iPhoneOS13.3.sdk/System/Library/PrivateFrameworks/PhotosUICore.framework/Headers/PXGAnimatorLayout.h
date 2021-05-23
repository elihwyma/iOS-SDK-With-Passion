/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXGAnimator, PXGLayout;

@interface PXGAnimatorLayout : NSObject

{
    PXGAnimator *_animator;
    PXGLayout *_inputLayout;
}

@property (weak, nonatomic, readonly) PXGAnimator *animator;
@property (retain, nonatomic) PXGLayout *inputLayout;

- (id)init;
- (struct CGSize)contentSize;
- (struct CGRect)visibleRect;
- (id)initWithAnimator:(id)arg1;
- (id)fences;
- (struct CGSize)referenceSize;
- (unsigned int)numberOfSprites;
- (void)enumerateDescendantsLayoutsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateLayoutsForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)removeAllFences;
- (_Bool)isSpriteIndex:(unsigned int)arg1 decoratingSpriteWithIndex:(out unsigned int *)arg2;

@end
