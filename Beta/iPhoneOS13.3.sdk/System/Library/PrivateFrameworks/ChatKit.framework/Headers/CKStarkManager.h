/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class UIViewController, UIWindow;

@interface CKStarkManager : NSObject

{
    UIViewController *_starkRootViewController;
    UIWindow *_starkWindow;
}

@property (retain, nonatomic) UIViewController *starkRootViewController;
@property (retain, nonatomic) UIWindow *starkWindow;
@property (nonatomic, readonly) _Bool isStarkConnected;

+ (id)sharedInstance;

- (id)_assistantContextForConversation:(id)arg1;
- (id)_assistantContextForRecipientID:(id)arg1;
- (void)attachStarkToWindow:(id)arg1;
- (void)detachStarkFromWindow:(id)arg1;
- (void)activateForConversation:(id)arg1;
- (void)activateForRecipient:(id)arg1;

@end
