/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet, TIImageCacheClient, _UIActionWhenIdle;

__attribute__((visibility("hidden")))
@interface UIKeyboardCache : NSObject

{
    TIImageCacheClient *_store;
    NSSet *_layouts;
    NSMutableSet *_activeRenderers;
    _UIActionWhenIdle *_idleAction;
}

@property (retain, nonatomic) _UIActionWhenIdle *idleAction;

+ (id)sharedInstance;
+ (_Bool)enabled;

- (id)init;
- (void)dealloc;
- (void)purge;
- (void)commitTransaction;
- (void)decrementExpectedRender:(id)arg1;
- (void)incrementExpectedRender:(id)arg1;
- (id)displayImagesForView:(id)arg1 fromLayout:(id)arg2 imageFlags:(id)arg3;
- (struct CGImage *)cachedImageForKey:(id)arg1 fromLayout:(id)arg2;
- (void)drawCachedImage:(id)arg1 alpha:(double)arg2 inContext:(struct CGContext *)arg3;
- (void)_didIdle;
- (void)_didIdleAndShouldWait;
- (id)uniqueLayoutsFromInputModes:(id)arg1;
- (void)clearNonPersistentCache;
- (struct CGImage *)cachedCompositeImageForCacheKeys:(id)arg1 fromLayout:(id)arg2 opacities:(id)arg3;
- (void)updateCacheForInputModes:(id)arg1;

@end
