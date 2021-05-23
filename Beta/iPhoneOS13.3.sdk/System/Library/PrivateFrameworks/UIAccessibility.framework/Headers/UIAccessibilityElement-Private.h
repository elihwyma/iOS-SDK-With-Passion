/*
 Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <UIKit/UIAccessibilityElement.h>

@interface UIAccessibilityElement (Private)

@property (weak, nonatomic) id accessibilityDelegate;
@property (nonatomic) struct CGRect bounds;
@property (nonatomic, readonly) _Bool _accessibilityUsesFrameInContainerSpace;

- (id)dataForKey:(id)arg1;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (id)_accessibilityProxyView;
- (void)setTableCellYOffset:(float)arg1;
- (void)setDelegate:(id)arg1 forAttribute:(long long)arg2 withSelector:(SEL)arg3;
- (void)delegateSpecificsForAttribute:(long long)arg1 delegate:(id *)arg2 selector:(SEL *)arg3;

@end
