/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIInputViewSetPlacement, UIView;

@protocol UIInputViewAnimationHost;

__attribute__((visibility("hidden")))
@interface _UIKeyboardAnimatorAnimationStyleControllerContext : NSObject

{
    id <UIInputViewAnimationHost> _host;
    UIInputViewSetPlacement *_start;
    UIInputViewSetPlacement *_end;
    struct CGRect _startFrame;
    struct CGRect _endFrame;
    _Bool _hidden;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly) UIView *animatingView;
@property (nonatomic) _Bool inputViewsHidden;
@property (nonatomic, readonly) struct CGRect startFrame;
@property (nonatomic, readonly) struct CGRect endFrame;

- (void)complete;
- (id)initWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3;

@end
