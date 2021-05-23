/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIContextBinderSubstrate.h>

@class NSMapTable;

@interface _UIFBSSceneSubstrate : _UIContextBinderSubstrate

{
    NSMapTable *_sceneLayerTable;
}

- (id)initWithScene:(id)arg1;
- (void)detachContext:(id)arg1;
- (void)attachContext:(id)arg1;

@end
