/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIBezierPath, UITextPosition, UITextRange;

__attribute__((visibility("hidden")))
@interface _UITextDragCaretUpdate : NSObject

{
    UITextPosition *position;
    UITextRange *range;
    UIBezierPath *maskPath;
    CDUnknownBlockType alongsideAnimations;
    CDUnknownBlockType completion;
    _Bool isAnimated;
}

@end
