/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionReusableView.h>

@class UIView;

@protocol CKFullscreenEffectView;

@interface CKFullscreenEffectDecorationView : UICollectionReusableView

{
    UIView<CKFullscreenEffectView> *_effectView;
}

@property (weak, nonatomic) UIView<CKFullscreenEffectView> *effectView;

+ (id)reuseIdentifier;
+ (id)decorationViewKind;

- (void)prepareForReuse;
- (void)setupForEffectView:(id)arg1;
- (void)tearDownEffectView;

@end
