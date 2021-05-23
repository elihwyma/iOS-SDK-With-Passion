/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UINavigationController.h>

@class AVMediaSelectionTableViewController;

@interface AVMediaSelectionViewController : UINavigationController

{
    AVMediaSelectionTableViewController *_mediaSelectionTableViewController;
}

- (id)initWithPlayerController:(id)arg1 doneButtonTarget:(id)arg2 doneButtonAction:(SEL)arg3;
- (id)mediaSelectionTableViewController;

@end
