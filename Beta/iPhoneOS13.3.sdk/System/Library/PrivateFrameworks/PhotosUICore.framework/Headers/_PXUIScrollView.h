/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIScrollView.h>

@protocol PXUIScrollViewDelegate;

@interface _PXUIScrollView : UIScrollView

{
    _Bool _deferContentOffsetUpdates;
    id <PXUIScrollViewDelegate> _px_delegate;
    struct CGPoint _pagingOriginOffset;
}

@property (weak, nonatomic, setter=px_setDelegate:) id <PXUIScrollViewDelegate> px_delegate;
@property (nonatomic) struct CGPoint pagingOriginOffset;
@property (nonatomic) _Bool deferContentOffsetUpdates;

- (void)layoutSubviews;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)px_addSubview:(id)arg1;
- (void)_updatePagingOrigin;

@end
