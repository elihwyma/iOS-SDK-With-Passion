/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UITargetedProxy.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIViewServiceViewControllerDeputy : _UITargetedProxy

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)XPCInterface;
+ (id)deputyWithViewController:(id)arg1;

- (id)invalidate;
- (void)__prepareForDisconnectionWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
