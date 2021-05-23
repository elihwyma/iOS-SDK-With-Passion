/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/ICCollapsibleBaseView.h>

@class UIActivityIndicatorView;

@interface ICCollapsibleActivityView : ICCollapsibleBaseView

{
    UIActivityIndicatorView *_activityIndicator;
}

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, readonly) _Bool isAnimating;

- (void)traitCollectionDidChange:(id)arg1;
- (void)setCollapsed:(_Bool)arg1;
- (void)performSetup;

@end
