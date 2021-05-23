/*
 Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import <PrototypeTools/PTTestRecipe.h>

@interface PTSingleTestRecipe : PTTestRecipe

{
    CDUnknownBlockType _action;
}

@property (copy, nonatomic) CDUnknownBlockType action;

+ (id)recipeWithTitle:(id)arg1 prepareBlock:(CDUnknownBlockType)arg2 action:(CDUnknownBlockType)arg3 cleanupBlock:(CDUnknownBlockType)arg4;
+ (id)recipeWithTitle:(id)arg1 action:(CDUnknownBlockType)arg2;

- (void)invalidate;
- (void)_handleEvent:(long long)arg1;
- (_Bool)_wantsEvent:(long long)arg1;

@end
