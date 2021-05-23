/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIRemoteViewController.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

@protocol UIKeyboardMediaServiceRemoteViewControllerDelegate;

@interface UIKeyboardMediaServiceRemoteViewController : _UIRemoteViewController <Swift>

{
    id <UIKeyboardMediaServiceRemoteViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <UIKeyboardMediaServiceRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestInlineViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;
+ (id)requestCardViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;
+ (_Bool)__shouldHostRemoteTextEffectsWindow;

- (_Bool)_canShowWhileLocked;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)dismissCard;
- (void)pasteImageAtFileHandle:(id)arg1;
- (void)presentCard;
- (void)stageStickerWithFileHandle:(id)arg1 url:(id)arg2 accessibilityLabel:(id)arg3;
- (void)requestInsertionPointCompletion:(CDUnknownBlockType)arg1;
- (void)draggedStickerToPoint:(struct CGPoint)arg1;

@end
