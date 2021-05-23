/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage, UIKeyboardDockItemButton, UILongPressGestureRecognizer, UIPanGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIKeyboardDockItem : NSObject

{
    NSString *_identifier;
    NSString *_imageName;
    UIImage *_image;
    UIKeyboardDockItemButton *_button;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    struct CGPoint _touchDownPoint;
}

@property (retain, nonatomic) UIKeyboardDockItemButton *button;
@property (nonatomic) struct CGPoint touchDownPoint;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic) _Bool enabled;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, readonly) UIKeyboardDockItemButton *view;

+ (id)_standardGlyphColor;
+ (id)_darkStyleGlyphColor;

- (id)imageWithRenderConfig:(id)arg1;
- (id)initWithImageName:(id)arg1 identifier:(id)arg2;

@end
