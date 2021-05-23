/*
 Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

#import <ShareSheet/UIActivityViewController.h>

@class UIBarButtonItem;

@protocol DOCServicePopoverTrackerProtocol;

@interface DOCDocBrowserVC_UIActivityViewController : UIActivityViewController

{
    id <DOCServicePopoverTrackerProtocol> _popoverTracker;
    UIBarButtonItem *_barButtonItem;
}

@property (retain) id <DOCServicePopoverTrackerProtocol> popoverTracker;
@property (weak) UIBarButtonItem *barButtonItem;

@end
