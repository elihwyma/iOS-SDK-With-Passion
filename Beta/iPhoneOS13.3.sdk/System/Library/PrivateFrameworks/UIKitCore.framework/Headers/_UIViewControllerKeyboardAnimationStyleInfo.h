/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIViewControllerKeyboardAnimationStyleInfo : NSObject

{
    _Bool _isAnimationCompleting;
    CDUnknownBlockType _previousCompleteHandler;
}

@property (copy, nonatomic) CDUnknownBlockType previousCompleteHandler;
@property (nonatomic) _Bool isAnimationCompleting;

- (void)dealloc;

@end
