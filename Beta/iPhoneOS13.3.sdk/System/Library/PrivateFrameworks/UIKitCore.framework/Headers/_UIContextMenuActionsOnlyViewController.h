/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class UITargetedPreview;

__attribute__((visibility("hidden")))
@interface _UIContextMenuActionsOnlyViewController : UIViewController

{
    UITargetedPreview *_sourcePreview;
}

@property (retain, nonatomic) UITargetedPreview *sourcePreview;

- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (id)initWithTargetedPreview:(id)arg1;

@end
