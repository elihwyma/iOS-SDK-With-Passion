/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UISearchBarLayoutBase.h>

@class UIView, _UISearchBarSearchContainerLayout;

@protocol _UISearchBarContainerSublayoutDelegate;

__attribute__((visibility("hidden")))
@interface _UISearchBarScopeContainerLayout : _UISearchBarLayoutBase

{
    _Bool _collapsed;
    _Bool _hasScopeBar;
    id <_UISearchBarContainerSublayoutDelegate> _delegate;
    _UISearchBarSearchContainerLayout *_neighboringSearchLayout;
    UIView *_scopeBar;
    unsigned long long _numberOfScopeTitles;
    double _scopeBarOpacity;
    struct CGRect _scopeBarLayoutFrame;
}

@property (weak, nonatomic) id <_UISearchBarContainerSublayoutDelegate> delegate;
@property (nonatomic, getter=isCollapsed) _Bool collapsed;
@property (retain, nonatomic) _UISearchBarSearchContainerLayout *neighboringSearchLayout;
@property (retain, nonatomic) UIView *scopeBar;
@property (nonatomic) _Bool hasScopeBar;
@property (nonatomic) unsigned long long numberOfScopeTitles;
@property (nonatomic, readonly) struct UIEdgeInsets containerSpecificInsets;
@property (nonatomic, readonly) double naturalBarHeight;
@property (nonatomic, readonly) struct CGRect scopeBarLayoutFrame;
@property (nonatomic, readonly) double scopeBarOpacity;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateLayout;
- (void)applyLayout;
- (double)scopeControlHeight;

@end
