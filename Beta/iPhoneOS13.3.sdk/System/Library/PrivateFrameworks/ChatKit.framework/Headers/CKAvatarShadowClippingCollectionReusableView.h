/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionReusableView.h>

@class UIImageView;

@interface CKAvatarShadowClippingCollectionReusableView : UICollectionReusableView

{
    UIImageView *_imageView;
}

@property (nonatomic, readonly) UIImageView *imageView;

+ (struct CGSize)shadowSize;
+ (id)decorationViewKind;

- (id)initWithFrame:(struct CGRect)arg1;

@end
