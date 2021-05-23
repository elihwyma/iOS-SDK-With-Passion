/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface UIInputViewAnimationStyleExtraView : NSObject

{
    int _clipContainerType;
    int _alignment;
    UIView *_view;
    CDUnknownBlockType _animation;
}

@property (nonatomic) int clipContainerType;
@property (retain, nonatomic) UIView *view;
@property (nonatomic) int alignment;
@property (copy, nonatomic) CDUnknownBlockType animation;

+ (id)extraView:(id)arg1 withAlignment:(int)arg2 animation:(CDUnknownBlockType)arg3 onSnapshot:(_Bool)arg4;

- (void)dealloc;

@end
