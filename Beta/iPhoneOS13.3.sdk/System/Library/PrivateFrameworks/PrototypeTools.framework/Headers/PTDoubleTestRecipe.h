/*
 Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import <PrototypeTools/PTTestRecipe.h>

@interface PTDoubleTestRecipe : PTTestRecipe

{
    CDUnknownBlockType _increaseAction;
    CDUnknownBlockType _decreaseAction;
}

@property (copy, nonatomic) CDUnknownBlockType increaseAction;
@property (copy, nonatomic) CDUnknownBlockType decreaseAction;

+ (id)recipeWithTitle:(id)arg1 prepareBlock:(CDUnknownBlockType)arg2 increaseAction:(CDUnknownBlockType)arg3 decreaseAction:(CDUnknownBlockType)arg4 cleanupBlock:(CDUnknownBlockType)arg5;
+ (id)recipeWithTitle:(id)arg1 increaseAction:(CDUnknownBlockType)arg2 decreaseAction:(CDUnknownBlockType)arg3;

- (void)invalidate;
- (void)_handleEvent:(long long)arg1;
- (_Bool)_wantsEvent:(long long)arg1;

@end
