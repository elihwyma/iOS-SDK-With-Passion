/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSLayoutManager, UIImage;

@interface UITextDragPreviewRenderer : NSObject

{
    struct _NSRange _range;
    struct CGRect _firstRect;
    struct CGRect _lastRect;
    struct CGRect _middleRect;
    struct CGPoint _origin;
    UIImage *_image;
    _Bool _calculated;
    _Bool _unifyRects;
    NSLayoutManager *_layoutManager;
}

@property (nonatomic, readonly) NSLayoutManager *layoutManager;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) struct CGRect firstLineRect;
@property (nonatomic, readonly) struct CGRect bodyRect;
@property (nonatomic, readonly) struct CGRect lastLineRect;

- (id)initWithLayoutManager:(id)arg1 range:(struct _NSRange)arg2 unifyRects:(_Bool)arg3;
- (void)_calculate;
- (void)_calculateRectsUsingLayoutManager:(id)arg1;
- (struct CGRect)_correctlyOffsetBoundingRect;
- (struct CGRect)_rawBoundingRect;
- (void)adjustFirstLineRect:(inout struct CGRect *)arg1 bodyRect:(inout struct CGRect *)arg2 lastLineRect:(inout struct CGRect *)arg3 textOrigin:(struct CGPoint)arg4;
- (id)initWithLayoutManager:(id)arg1 range:(struct _NSRange)arg2;

@end
