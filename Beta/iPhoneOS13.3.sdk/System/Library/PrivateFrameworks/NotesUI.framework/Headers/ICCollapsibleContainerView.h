/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/ICCollapsibleBaseView.h>

@class UIView;

@interface ICCollapsibleContainerView : ICCollapsibleBaseView

{
    struct UIView *_containedView;
}

@property (retain, nonatomic) UIView *containedView;

- (void)performSetup;

@end
