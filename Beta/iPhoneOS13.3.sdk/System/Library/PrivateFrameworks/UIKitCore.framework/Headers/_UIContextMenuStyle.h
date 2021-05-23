/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, UITraitCollection, UIView, UIWindow;

@interface _UIContextMenuStyle : NSObject <Swift>

{
    _Bool _hasInteractivePreview;
    _Bool _preventPreviewRasterization;
    _Bool _reversesActionOrderWhenAttachedToTop;
    UIWindow *_containerWindow;
    UIView *_containerView;
    unsigned long long _preferredLayout;
    UITraitCollection *_preferredTraitCollection;
    NSArray *_preferredBackgroundEffects;
    struct UIEdgeInsets _preferredEdgeInsets;
    struct UIEdgeInsets _preferredBackgroundInsets;
}

@property (retain, nonatomic) UIWindow *containerWindow;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) unsigned long long preferredLayout;
@property (nonatomic) struct UIEdgeInsets preferredEdgeInsets;
@property (nonatomic) _Bool hasInteractivePreview;
@property (nonatomic) _Bool preventPreviewRasterization;
@property (nonatomic) _Bool reversesActionOrderWhenAttachedToTop;
@property (retain, nonatomic) UITraitCollection *preferredTraitCollection;
@property (retain, nonatomic) NSArray *preferredBackgroundEffects;
@property (nonatomic) struct UIEdgeInsets preferredBackgroundInsets;

+ (id)defaultStyle;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
