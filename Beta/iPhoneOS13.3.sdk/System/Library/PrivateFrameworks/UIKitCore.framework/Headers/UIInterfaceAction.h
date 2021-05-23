/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSPointerArray, NSString, UIColor, UIImage, UIInterfaceActionRepresentationView, UIInterfaceActionVisualStyle, UIView, UIViewController;

@protocol _UIInterfaceActionPresenting;

@interface UIInterfaceAction : NSObject <Swift>

{
    _Bool _enabled;
    _Bool _preferred;
    _Bool _focused;
    UIView *_customContentView;
    long long _type;
    UIViewController *_customContentViewController;
    NSString *_title;
    long long _titleAlignment;
    NSString *_classificationTitle;
    UIImage *_leadingImage;
    UIImage *_trailingImage;
    CDUnknownBlockType _handler;
    NSPointerArray *_weakDisplayPropertyObservers;
    UIInterfaceActionRepresentationView *__visualRepresentation;
    id <_UIInterfaceActionPresenting> __presentingController;
    UIInterfaceActionVisualStyle *_visualStyle;
    UIColor *_titleTextColor;
    UIColor *_imageTintColor;
    struct CGSize _leadingImageLayoutSize;
    struct CGSize _trailingImageLayoutSize;
}

@property (retain, nonatomic) UIViewController *customContentViewController;
@property (copy, nonatomic) CDUnknownBlockType handler;
@property (nonatomic) long long type;
@property (nonatomic, readonly) NSPointerArray *weakDisplayPropertyObservers;
@property (nonatomic, readonly) long long _typeForDeterminingViewRepresentation;
@property (nonatomic, readonly) UIView *customContentView;
@property (weak, nonatomic, setter=_setVisualRepresentation:) UIInterfaceActionRepresentationView *_visualRepresentation;
@property (weak, nonatomic, setter=_setPresentingController:) id <_UIInterfaceActionPresenting> _presentingController;
@property (nonatomic) struct CGSize leadingImageLayoutSize;
@property (nonatomic) struct CGSize trailingImageLayoutSize;
@property (nonatomic, getter=_isPreferred, setter=_setIsPreferred:) _Bool preferred;
@property (nonatomic, getter=_isFocused, setter=_setIsFocused:) _Bool focused;
@property (retain, nonatomic, getter=_visualStyle, setter=_setVisualStyle:) UIInterfaceActionVisualStyle *visualStyle;
@property (retain, nonatomic, getter=_titleTextColor, setter=_setTitleTextColor:) UIColor *titleTextColor;
@property (retain, nonatomic, getter=_imageTintColor, setter=_setImageTintColor:) UIColor *imageTintColor;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long titleAlignment;
@property (copy, nonatomic) NSString *classificationTitle;
@property (retain, nonatomic) UIImage *leadingImage;
@property (retain, nonatomic) UIImage *trailingImage;
@property (nonatomic, getter=isEnabled) _Bool enabled;

+ (id)actionWithTitle:(id)arg1 type:(long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (_Bool)changedProperties:(id)arg1 containsAny:(id)arg2;
+ (id)actionWithCustomContentViewController:(id)arg1;
+ (id)actionWithCustomContentView:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)_setInterfaceActionCanInvokeActionsWithoutPresentingController:(_Bool)arg1;
+ (id)_observableDisplayProperties;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 type:(long long)arg2 customContentViewController:(id)arg3 customContentView:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)_notifyObserversVisualStyleDidChange;
- (void)_notifyObserversDidChangeActionProperty:(id)arg1;
- (struct CGSize)_layoutSizeForImageProperty:(id)arg1;
- (void)_invokeHandlerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_addActionDisplayPropertyObserver:(id)arg1;
- (void)_removeActionDisplayPropertyObserver:(id)arg1;

@end
