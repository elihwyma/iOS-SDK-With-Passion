/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <UIKitCore/UICollectionReusableView.h>

@class UIButton;

@interface _UIActivityContentFooterView : UICollectionReusableView

{
    UIButton *_editButton;
}

@property (retain, nonatomic) UIButton *editButton;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
