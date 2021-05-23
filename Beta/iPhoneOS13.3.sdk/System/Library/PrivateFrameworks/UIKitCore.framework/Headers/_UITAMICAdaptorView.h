/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, NSString, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface _UITAMICAdaptorView : UIView

{
    UIView *_view;
    NSLayoutConstraint *_width;
    NSLayoutConstraint *_height;
    struct CGSize _layoutSize;
    _Bool _inLayout;
    float _sizingPriority;
    UILayoutGuide *_sizingLayoutGuide;
}

@property (nonatomic, readonly) UIView *view;
@property (nonatomic) float sizingPriority;
@property (retain, nonatomic) UILayoutGuide *sizingLayoutGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)shouldWrapView:(id)arg1;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)initWithView:(id)arg1;
- (void)updateForAvailableSize;
- (void)_geometryChanges:(id)arg1 forAncestor:(id)arg2;

@end
