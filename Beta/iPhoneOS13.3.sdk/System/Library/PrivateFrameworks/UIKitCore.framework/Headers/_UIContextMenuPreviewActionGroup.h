/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIActionGroup.h>

@class UIViewController;

@interface _UIContextMenuPreviewActionGroup : _UIActionGroup

{
    UIViewController *_previewViewController;
    CDUnknownBlockType _previewHandler;
}

@property (retain, nonatomic) UIViewController *previewViewController;
@property (copy, nonatomic) CDUnknownBlockType previewHandler;

+ (id)groupWithChildren:(id)arg1 previewViewController:(id)arg2 previewHandler:(CDUnknownBlockType)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
