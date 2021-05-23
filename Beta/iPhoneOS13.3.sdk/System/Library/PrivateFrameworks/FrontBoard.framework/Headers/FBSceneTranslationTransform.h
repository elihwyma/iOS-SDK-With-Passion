/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoard/FBSceneTransform.h>

@interface FBSceneTranslationTransform : FBSceneTransform

{
    struct CGPoint _translation;
}

@property (nonatomic) struct CGPoint translation;

- (id)description;
- (void)_updateTransform;
- (id)initWithTranslation:(struct CGPoint)arg1;

@end
