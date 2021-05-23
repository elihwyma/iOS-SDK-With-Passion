/*
 Image: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
 */

#import <UIScrollView.h>

#import <JITAppKit/Swift-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIStackView, UIViewController;

@interface MCLViewControllerCollection : UIScrollView <Swift>

{
    UIStackView *_contentView;
    NSLayoutConstraint *_widthConstraint;
    UIViewController *_owner;
    NSArray *_views;
}

@property (weak, nonatomic) UIViewController *owner;
@property (nonatomic) double spacing;
@property (copy, nonatomic) NSArray *views;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;

@end
