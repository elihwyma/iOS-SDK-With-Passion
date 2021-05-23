/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSItemProvider, UITextRange;

@interface UITextDraggableObject : NSObject

{
    NSItemProvider *_itemProvider;
    UITextRange *_range;
    CDUnknownBlockType _targetedPreviewProvider;
    CDUnknownBlockType _previewProvider;
}

@property (retain, nonatomic) NSItemProvider *itemProvider;
@property (retain, nonatomic) UITextRange *range;
@property (copy, nonatomic) CDUnknownBlockType targetedPreviewProvider;
@property (copy, nonatomic) CDUnknownBlockType previewProvider;

+ (id)draggableObjectWithItemProvider:(id)arg1 fromRange:(id)arg2;

@end
