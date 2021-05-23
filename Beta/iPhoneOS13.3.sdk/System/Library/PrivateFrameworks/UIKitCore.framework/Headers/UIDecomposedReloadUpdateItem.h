/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIUpdateItem.h>

__attribute__((visibility("hidden")))
@interface UIDecomposedReloadUpdateItem : UIUpdateItem

{
    UIDecomposedReloadUpdateItem *_pairedItem;
}

@property (weak, nonatomic) UIDecomposedReloadUpdateItem *pairedItem;

- (_Bool)isDecomposedFromReload;

@end
