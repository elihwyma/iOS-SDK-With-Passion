/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UIImage, UIView;

__attribute__((visibility("hidden")))
@interface _UIDraggingImageComponent : NSObject <Swift>

{
    _Bool _ignoresAccessibilityFilters;
    _Bool _hidesImage;
    UIView *_view;
    UIImage *_image;
    struct CGRect _frame;
}

@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) struct CGRect frame;
@property (nonatomic, readonly) _Bool ignoresAccessibilityFilters;
@property (nonatomic, readonly) _Bool hidesImage;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithView:(id)arg1;
- (id)_initWithNoImageAndFrame:(struct CGRect)arg1;
- (id)initWithImage:(id)arg1 frame:(struct CGRect)arg2 ignoreAccessibilityFilters:(_Bool)arg3;
- (id)initHidingDragImage;

@end
