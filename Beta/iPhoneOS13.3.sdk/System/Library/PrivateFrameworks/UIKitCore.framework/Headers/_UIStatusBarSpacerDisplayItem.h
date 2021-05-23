/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarDisplayItem.h>

@class NSArray, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface _UIStatusBarSpacerDisplayItem : _UIStatusBarDisplayItem

{
    UILayoutGuide *_layoutGuide;
    NSArray *_constraints;
    struct CGSize _size;
}

@property (retain, nonatomic) UILayoutGuide *layoutGuide;
@property (retain, nonatomic) NSArray *constraints;
@property (nonatomic) struct CGSize size;

- (void)setContainerView:(id)arg1;
- (id)initWithIdentifier:(id)arg1 item:(id)arg2;
- (void)applyUpdate:(id)arg1;
- (void)_applyConstraintsIfNeeded;

@end
