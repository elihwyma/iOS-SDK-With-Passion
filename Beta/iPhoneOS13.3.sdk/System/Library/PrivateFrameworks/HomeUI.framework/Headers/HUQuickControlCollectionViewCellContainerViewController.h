/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

@class HUQuickControlCollectionViewCellContainerView, HUQuickControlViewController;

@interface HUQuickControlCollectionViewCellContainerViewController : UIViewController

{
    unsigned long long _titlePosition;
    HUQuickControlViewController *_contentViewController;
    struct UIEdgeInsets _preferredContentLayoutFrameInset;
}

@property (retain, nonatomic) HUQuickControlCollectionViewCellContainerView *view;
@property (nonatomic, readonly) HUQuickControlCollectionViewCellContainerView *viewIfLoaded;
@property (nonatomic) unsigned long long titlePosition;
@property (nonatomic) struct UIEdgeInsets preferredContentLayoutFrameInset;
@property (nonatomic, readonly) HUQuickControlViewController *contentViewController;

+ (id)intrinsicSizeDescriptorControlSizeDescriptor:(id)arg1 titlePosition:(unsigned long long)arg2;

- (void)setTitle:(id)arg1;
- (void)loadView;
- (id)initWithContentViewController:(id)arg1;
- (_Bool)_canShowWhileLocked;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;

@end
