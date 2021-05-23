/*
 Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import <PrototypeTools/PTTestRecipe.h>

@interface PTToggleTestRecipe : PTTestRecipe

{
    _Bool _on;
    CDUnknownBlockType _toggleAction;
}

@property (copy, nonatomic) CDUnknownBlockType toggleAction;
@property (nonatomic, readonly, getter=isOn) _Bool on;

+ (id)recipeWithTitle:(id)arg1 prepareBlock:(CDUnknownBlockType)arg2 toggleAction:(CDUnknownBlockType)arg3 cleanupBlock:(CDUnknownBlockType)arg4;
+ (id)recipeWithTitle:(id)arg1 toggleAction:(CDUnknownBlockType)arg2;

- (void)_activate;
- (void)invalidate;
- (void)_deactivate;
- (void)_handleEvent:(long long)arg1;
- (_Bool)_wantsEvent:(long long)arg1;

@end
