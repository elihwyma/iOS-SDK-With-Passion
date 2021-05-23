/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionReusableView.h>

@class UIView;

@interface CKBrowserSwitcherFooterAccessoryCell : UICollectionReusableView

{
    double _minHeight;
    double _maxHeight;
    UIView *_seperatorView;
}

@property (retain, nonatomic) UIView *seperatorView;
@property (nonatomic) double minHeight;
@property (nonatomic) double maxHeight;

+ (id)reuseIdentifier;
+ (id)supplementryViewKind;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
