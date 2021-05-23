/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIView.h>

@class AVButton, NSString, UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface AVLoadingButtonView : UIView

{
    _Bool _removed;
    _Bool _included;
    _Bool _hasFullScreenAppearance;
    _Bool _hasAlternateAppearance;
    _Bool _collapsedOrExcluded;
    _Bool _collapsed;
    _Bool _showsLoadingIndicator;
    AVButton *_button;
    UIActivityIndicatorView *_loadingIndicator;
}

@property (retain, nonatomic) UIActivityIndicatorView *loadingIndicator;
@property (nonatomic, readonly) AVButton *button;
@property (nonatomic) _Bool showsLoadingIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct CGSize extrinsicContentSize;
@property (nonatomic, getter=isRemoved) _Bool removed;
@property (nonatomic, getter=isCollapsed) _Bool collapsed;
@property (nonatomic, getter=isIncluded) _Bool included;
@property (nonatomic, readonly, getter=isCollapsedOrExcluded) _Bool collapsedOrExcluded;
@property (nonatomic) _Bool hasAlternateAppearance;
@property (nonatomic) _Bool hasFullScreenAppearance;

- (void)setHidden:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1;
- (void)_updateIsHiddenAndAlpha;

@end
