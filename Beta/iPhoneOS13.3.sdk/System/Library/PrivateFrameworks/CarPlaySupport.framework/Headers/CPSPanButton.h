/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <UIKit/UIButton.h>

@class NSString, UIView;

@interface CPSPanButton : UIButton

{
    long long _direction;
    UIView *_backgroundView;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic, readonly) long long direction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)dynamicBackgroundColor;

- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)layoutSubviews;
- (void)_updateColors;
- (id)initWithDirection:(long long)arg1;
- (void)_setupPanImages;

@end
