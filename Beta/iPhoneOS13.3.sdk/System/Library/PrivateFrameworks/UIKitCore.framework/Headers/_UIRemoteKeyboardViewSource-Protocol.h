/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@protocol _UIRemoteKeyboardControllerDelegate;

@protocol _UIRemoteKeyboardViewSource <Swift>

@property (retain, nonatomic) id <_UIRemoteKeyboardControllerDelegate> controllerDelegate;
@property (nonatomic, readonly) _Bool isOnScreenRotating;
@property (nonatomic) _Bool dontDismissReachability;

- (unsigned short)checkPlaceholdersForRemoteKeyboards;
- (unsigned short)updateForKeyplaneChangeWithContext: /* Error: Ran out of types for this method. */;

@end
