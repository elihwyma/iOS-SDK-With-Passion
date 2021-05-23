/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UITargetedProxy.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIUserNotificationRestrictedAlertViewProxy : _UITargetedProxy

{
    id _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)restrictedProxyForAlertView:(id)arg1;

- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
