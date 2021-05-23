/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, UITargetedPreview;

__attribute__((visibility("hidden")))
@interface _UIContextMenuLayoutArbiterInput : NSObject

{
    _Bool _shouldUpdateAttachment;
    UITargetedPreview *_sourcePreview;
    NSArray *_accessoryViews;
    struct CGSize _preferredPreviewSize;
    struct CGSize _preferredMenuSize;
    struct UIEdgeInsets _preferredEdgeInsets;
}

@property (nonatomic) _Bool shouldUpdateAttachment;
@property (nonatomic) struct CGSize preferredPreviewSize;
@property (nonatomic) struct CGSize preferredMenuSize;
@property (nonatomic) struct UIEdgeInsets preferredEdgeInsets;
@property (retain, nonatomic) UITargetedPreview *sourcePreview;
@property (retain, nonatomic) NSArray *accessoryViews;

@end
