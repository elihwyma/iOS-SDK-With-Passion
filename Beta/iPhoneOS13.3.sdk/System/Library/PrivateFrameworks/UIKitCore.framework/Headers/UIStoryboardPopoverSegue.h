/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStoryboardSegue.h>

@class NSArray, UIBarButtonItem, UIPopoverController, UIView;

@interface UIStoryboardPopoverSegue : UIStoryboardSegue

{
    UIPopoverController *_popoverController;
    NSArray *_passthroughViews;
    unsigned long long _permittedArrowDirections;
    UIView *_anchorView;
    UIBarButtonItem *_anchorBarButtonItem;
    struct CGRect _anchorRect;
}

@property (copy, nonatomic, setter=_setPassthroughViews:) NSArray *_passthroughViews;
@property (nonatomic, setter=_setPermittedArrowDirections:) unsigned long long _permittedArrowDirections;
@property (retain, nonatomic, setter=_setAnchorBarButtonItem:) UIBarButtonItem *_anchorBarButtonItem;
@property (retain, nonatomic, setter=_setAnchorView:) UIView *_anchorView;
@property (nonatomic, setter=_setAnchorRect:) struct CGRect _anchorRect;
@property (nonatomic, readonly) UIPopoverController *popoverController;

- (void)perform;

@end
