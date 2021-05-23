/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UITextFieldRoundedRectBackgroundViewNeue.h>

__attribute__((visibility("hidden")))
@interface _UISearchBarSearchFieldBackgroundView : _UITextFieldRoundedRectBackgroundViewNeue

{
    _Bool _showingTouch;
    _Bool _backgroundContainer;
    long long _barStyle;
    unsigned long long _searchBarStyle;
}

@property (nonatomic) long long barStyle;
@property (nonatomic) unsigned long long searchBarStyle;
@property (nonatomic) _Bool showingTouch;
@property (nonatomic) _Bool backgroundContainer;

- (void)setCornerRadius:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1 active:(_Bool)arg2 updateView:(_Bool)arg3;
- (id)_strokeColor:(_Bool)arg1;
- (id)_automaticFillColorForActive:(_Bool)arg1;
- (id)_ultralightFillColorForOverlayFilter:(_Bool)arg1 active:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 active:(_Bool)arg2;
- (id)_fillColor:(_Bool)arg1;

@end
