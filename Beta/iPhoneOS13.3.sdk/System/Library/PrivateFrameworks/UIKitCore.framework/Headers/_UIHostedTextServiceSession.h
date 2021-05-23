/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UITextServiceSession.h>

@protocol _UIHostedTextServiceSessionDelegate;

__attribute__((visibility("hidden")))
@interface _UIHostedTextServiceSession : _UITextServiceSession

{
    id <_UIHostedTextServiceSessionDelegate> _delegate;
}

@property (nonatomic) id <_UIHostedTextServiceSessionDelegate> delegate;

+ (id)showServiceForType:(long long)arg1 withContext:(id)arg2;
+ (id)showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4;
+ (id)showServiceForText:(id)arg1 selectedTextRange:(struct _NSRange)arg2 type:(long long)arg3 fromRect:(struct CGRect)arg4 inView:(id)arg5;

- (void)dismissTextServiceAnimated:(_Bool)arg1;
- (void)remoteSessionDidDismiss;

@end
