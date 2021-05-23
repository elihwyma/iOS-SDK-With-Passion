/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIAlertController, UIColor, UIImage, UIInterfaceAction, UIViewController;

@protocol UIAlertActionMutablePropertyObservering, UIAlertActionViewRepresentation_Internal;

@interface UIAlertAction : NSObject <Swift>

{
    NSString *_title;
    long long _titleTextAlignment;
    _Bool _enabled;
    _Bool _checked;
    _Bool _isPreferred;
    UIColor *_imageTintColor;
    UIColor *_titleTextColor;
    long long _style;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _simpleHandler;
    UIImage *_image;
    CDUnknownBlockType _shouldDismissHandler;
    NSString *__descriptiveText;
    UIViewController *_contentViewController;
    NSString *_keyCommandInput;
    long long _keyCommandModifierFlags;
    id <UIAlertActionViewRepresentation_Internal> __representer;
    UIInterfaceAction<UIAlertActionMutablePropertyObservering> *__interfaceActionRepresentation;
    UIAlertController *__alertController;
}

@property (copy, nonatomic) CDUnknownBlockType handler;
@property (nonatomic) long long style;
@property (copy, nonatomic) CDUnknownBlockType simpleHandler;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) CDUnknownBlockType shouldDismissHandler;
@property (copy, nonatomic, setter=_setDescriptiveText:) NSString *_descriptiveText;
@property (retain, nonatomic, getter=_contentViewController, setter=_setContentViewController:) UIViewController *contentViewController;
@property (copy, nonatomic, getter=_keyCommandInput, setter=_setKeyCommandInput:) NSString *keyCommandInput;
@property (nonatomic, getter=_keyCommandModifierFlags, setter=_setKeyCommandModifierFlags:) long long keyCommandModifierFlags;
@property (setter=_setRepresenter:) id <UIAlertActionViewRepresentation_Internal> _representer;
@property (setter=_setInterfaceActionRepresentation:) UIInterfaceAction<UIAlertActionMutablePropertyObservering> *_interfaceActionRepresentation;
@property (setter=_setIsPreferred:) _Bool _isPreferred;
@property (nonatomic, setter=_setAlertController:) UIAlertController *_alertController;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isEnabled) _Bool enabled;

+ (id)_actionWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 handler:(CDUnknownBlockType)arg4 shouldDismissHandler:(CDUnknownBlockType)arg5;
+ (id)_actionWithTitle:(id)arg1 descriptiveText:(id)arg2 image:(id)arg3 style:(long long)arg4 handler:(CDUnknownBlockType)arg5 shouldDismissHandler:(CDUnknownBlockType)arg6;
+ (id)_actionWithContentViewController:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)_actionWithContentViewController:(id)arg1 style:(long long)arg2;
+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_titleTextColor;
- (id)_imageTintColor;
- (void)_setTitleTextColor:(id)arg1;
- (void)_setImageTintColor:(id)arg1;
- (void)_setTitleTextAlignment:(long long)arg1;
- (void)_setChecked:(_Bool)arg1;
- (_Bool)_isChecked;
- (long long)_titleTextAlignment;
- (void)_willAddContentViewController;
- (void)_didAddContentViewController;
- (void)_setKeyCommandInput:(id)arg1 modifierFlags:(long long)arg2;

@end
