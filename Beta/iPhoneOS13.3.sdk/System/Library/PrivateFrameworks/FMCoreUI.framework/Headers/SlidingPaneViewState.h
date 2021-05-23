/*
 Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

#import <Foundation/NSObject.h>

@class ISPaneFrameView, NSLayoutConstraint, UIViewController, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface SlidingPaneViewState : NSObject

{
    _Bool _shouldNotifyOfPaneSizeChanges;
    UIViewController *_paneViewController;
    ISPaneFrameView *_paneView;
    UIVisualEffectView *_visualEffectView;
    NSLayoutConstraint *_paneVerticalPositionConstraint;
    NSLayoutConstraint *_paneHorizontalPositionConstraint;
    unsigned long long _edge;
}

@property (retain, nonatomic) UIViewController *paneViewController;
@property (retain, nonatomic) ISPaneFrameView *paneView;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (retain, nonatomic) NSLayoutConstraint *paneVerticalPositionConstraint;
@property (retain, nonatomic) NSLayoutConstraint *paneHorizontalPositionConstraint;
@property (nonatomic) _Bool shouldNotifyOfPaneSizeChanges;
@property (nonatomic) unsigned long long edge;

- (void)dealloc;
- (id)initWithViewController:(id)arg1 edge:(unsigned long long)arg2;

@end
