/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface PUCropHandleView : UIView

{
    _Bool _lineWeightHeavy;
    _Bool _overlayHidden;
    unsigned long long _handle;
    NSArray *__lineViews;
    NSArray *__overlayViews;
    UIView *__layoutReferenceView;
    NSLayoutConstraint *__lineWidthConstraint;
}

@property (retain, nonatomic, setter=_setLineViews:) NSArray *_lineViews;
@property (retain, nonatomic, setter=_setOverlayViews:) NSArray *_overlayViews;
@property (retain, nonatomic, setter=_setLayoutReferenceView:) UIView *_layoutReferenceView;
@property (retain, nonatomic, setter=_setLineWidthConstraint:) NSLayoutConstraint *_lineWidthConstraint;
@property (nonatomic, readonly) unsigned long long handle;
@property (nonatomic, readonly) unsigned long long oppositeHandle;
@property (nonatomic, readonly) NSArray *adjacentHandles;
@property (nonatomic, readonly) id layoutReferenceItem;
@property (nonatomic, readonly, getter=isTop) _Bool top;
@property (nonatomic, readonly, getter=isLeft) _Bool left;
@property (nonatomic, readonly, getter=isRight) _Bool right;
@property (nonatomic, readonly, getter=isBottom) _Bool bottom;
@property (nonatomic, readonly, getter=isCorner) _Bool corner;
@property (nonatomic, readonly, getter=isLateral) _Bool lateral;
@property (nonatomic, getter=isLineWeightHeavy) _Bool lineWeightHeavy;
@property (nonatomic, getter=isOverlayHidden) _Bool overlayHidden;

+ (id)allHandles;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)initForHandle:(unsigned long long)arg1;
- (void)_updateLineWidth;
- (id)_createLineView;
- (id)_createCornerOverlayView;

@end
