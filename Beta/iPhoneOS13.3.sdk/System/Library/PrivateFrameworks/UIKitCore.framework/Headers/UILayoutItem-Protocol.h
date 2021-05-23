/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSLayoutDimension, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, UIView;

@protocol UILayoutItem <Swift>

@property (nonatomic, readonly) struct CGRect _ui_bounds;
@property (nonatomic) struct CGRect _ui_frame;
@property (nonatomic, readonly) UIView *_ui_superview;
@property (nonatomic, readonly) UIView *_ui_view;
@property (nonatomic) _Bool _ui_usesManualLayout;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *leadingAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *trailingAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *leftAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *rightAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *topAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *bottomAnchor;
@property (nonatomic, readonly) NSLayoutDimension *widthAnchor;
@property (nonatomic, readonly) NSLayoutDimension *heightAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *centerXAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *centerYAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *firstBaselineAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *lastBaselineAnchor;

- (unsigned short)_ui_removeFromParentLayoutItem;
- (unsigned short)_ui_insertSubLayoutItem:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)_ui_addSubLayoutItem: /* Error: Ran out of types for this method. */;

@end
