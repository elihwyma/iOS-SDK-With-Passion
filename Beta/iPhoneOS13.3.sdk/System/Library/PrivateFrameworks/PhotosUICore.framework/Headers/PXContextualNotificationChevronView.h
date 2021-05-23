/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@interface PXContextualNotificationChevronView : UIView

{
    struct CGSize _intrinsicContentSize;
    struct CGSize _chevronSize;
}

@property (nonatomic, readonly) struct CGSize chevronSize;
@property (nonatomic, readonly) struct CGSize intrinsicContentSize;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 chevronScale:(double)arg2;

@end
