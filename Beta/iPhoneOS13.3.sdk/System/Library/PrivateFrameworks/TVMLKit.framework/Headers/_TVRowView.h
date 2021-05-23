/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVFocusRedirectView.h>

@class NSArray, NSString, UIView;

__attribute__((visibility("hidden")))
@interface _TVRowView : _TVFocusRedirectView

{
    NSArray *_components;
    UIView *_preferredFocusedComponent;
    long long _contentVerticalAlignment;
    NSArray *_leftComponents;
    NSArray *_centerComponents;
    NSArray *_rightComponents;
    NSArray *_allComponents;
    UIView *_lastFocusedView;
}

@property (copy, nonatomic, readonly) NSArray *leftComponents;
@property (copy, nonatomic, readonly) NSArray *centerComponents;
@property (copy, nonatomic, readonly) NSArray *rightComponents;
@property (copy, nonatomic, readonly) NSArray *allComponents;
@property (weak, nonatomic, readonly) UIView *lastFocusedView;
@property (copy, nonatomic) NSArray *components;
@property (weak, nonatomic) UIView *preferredFocusedComponent;
@property (nonatomic) long long contentVerticalAlignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct CGRect)_leftAlignedFrameForComponent:(id)arg1 previousComponent:(id)arg2 interitemSpacing:(double)arg3;
+ (void)_alignComponents:(id)arg1 withLineSize:(struct CGSize)arg2 boundingRect:(struct CGRect)arg3 originYBump:(double)arg4 verticalAlignment:(long long)arg5 horizontalAlignment:(long long)arg6;
+ (struct CGRect)_boundingRectForComponents:(id)arg1 interitemSpacing:(double)arg2 boundingSize:(struct CGSize)arg3 horizontalAlignment:(long long)arg4 allowsOverflow:(_Bool)arg5;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (_Bool)canBecomeFocused;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)_resetSubviews;
- (struct CGSize)_sizeThatFitsComponents:(id)arg1 boundingSize:(struct CGSize)arg2;
- (long long)_alignmentFromView:(id)arg1;
- (void)_addSubview:(id)arg1 maxViewWidth:(double)arg2;
- (void)_lineUpComponents:(id)arg1 alignment:(long long)arg2 attribute:(long long)arg3;

@end
