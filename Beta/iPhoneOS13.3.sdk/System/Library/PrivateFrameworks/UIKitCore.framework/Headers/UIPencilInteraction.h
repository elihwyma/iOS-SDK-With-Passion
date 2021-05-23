/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIView;

@protocol UIPencilInteractionDelegate;

@interface UIPencilInteraction : NSObject <Swift>

{
    _Bool _enabled;
    id <UIPencilInteractionDelegate> _delegate;
    UIView *_view;
}

@property (weak, nonatomic) UIView *view;
@property (weak, nonatomic) id <UIPencilInteractionDelegate> delegate;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)preferredTapAction;

- (id)init;
- (void)dealloc;
- (void)willMoveToView:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)performDelegateDidTap;

@end
