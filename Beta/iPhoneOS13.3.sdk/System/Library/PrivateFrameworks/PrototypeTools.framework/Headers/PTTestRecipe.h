/*
 Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import <Foundation/NSObject.h>

@class NSString, PTTestRecipeInfo;

@interface PTTestRecipe : NSObject

{
    NSString *_title;
    CDUnknownBlockType _prepareBlock;
    CDUnknownBlockType _cleanupBlock;
    PTTestRecipeInfo *_info;
    CDUnknownBlockType _invalidationHandler;
}

@property (retain, nonatomic) PTTestRecipeInfo *info;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic, readonly) NSString *title;
@property (copy, nonatomic) CDUnknownBlockType prepareBlock;
@property (copy, nonatomic) CDUnknownBlockType cleanupBlock;

- (void)_activate;
- (void)invalidate;
- (void)_deactivate;
- (void)_handleEvent:(long long)arg1;
- (_Bool)_wantsEvent:(long long)arg1;
- (id)_initWithTitle:(id)arg1 prepareBlock:(CDUnknownBlockType)arg2 cleanupBlock:(CDUnknownBlockType)arg3;

@end
