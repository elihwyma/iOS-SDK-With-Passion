/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIResponder, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface _UITextServiceSession : NSObject <Swift>

{
    long long _type;
    UIViewController *_modalViewController;
    UIView *_contextView;
    UIResponder *_pinnedResponder;
    _Bool _dismissed;
    CDUnknownBlockType _dismissedHandler;
}

@property (copy, nonatomic) CDUnknownBlockType dismissedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)canShowTextServices;
+ (id)showServiceForType:(long long)arg1 withContext:(id)arg2;
+ (id)showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4;
+ (id)showServiceForText:(id)arg1 selectedTextRange:(struct _NSRange)arg2 type:(long long)arg3 fromRect:(struct CGRect)arg4 inView:(id)arg5;
+ (id)textServiceSessionForType:(long long)arg1;
+ (_Bool)shouldPresentServiceInSameWindowAsView:(id)arg1;

- (id)init;
- (long long)type;
- (id)initWithType:(long long)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (_Bool)isDisplaying;
- (void)dismissTextServiceAnimated:(_Bool)arg1;
- (void)_endSession;
- (void)sessionDidDismiss;

@end
