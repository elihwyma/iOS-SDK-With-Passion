/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIButtonBarLayout.h>

@class NSLayoutConstraint, UIBarButtonItem, UIView;

__attribute__((visibility("hidden")))
@interface _UIButtonBarSpacerLayout : _UIButtonBarLayout

{
    UIBarButtonItem *_item;
    UIView *_spacer;
    NSLayoutConstraint *_requestedSize;
    NSLayoutConstraint *_minimumSize;
    NSLayoutConstraint *_equalSize;
    _Bool _flexible;
    long long _spacerType;
}

@property (nonatomic, readonly) long long spacerType;

+ (long long)typeOfSpacerBetweenLayout:(id)arg1 andLayout:(id)arg2;
+ (id)spacerForLayoutMetrics:(id)arg1 betweenLayout:(id)arg2 andLayout:(id)arg3;

- (id)description;
- (id)_item;
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1;
- (void)_configure;
- (void)_addLayoutViews:(id)arg1;
- (void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;
- (id)initWithLayoutMetrics:(id)arg1;
- (_Bool)_isSpace;
- (_Bool)suppressSpacing;
- (id)initWithLayoutMetrics:(id)arg1 barButtonItem:(id)arg2;

@end
