/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UINavigationController.h>

@class EKICSPreviewController, NSString, NSURL, UIBarButtonItem;

@interface _SFICSPreviewViewController : UINavigationController

{
    NSString *_filePath;
    NSURL *_sourceURL;
    UIBarButtonItem *_activityBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    EKICSPreviewController *_icsController;
    CDUnknownBlockType _beforeDismissHandler;
}

@property (copy, nonatomic) CDUnknownBlockType beforeDismissHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)icsPreviewControllerWantsDismissal:(id)arg1;
- (void)_presentActivityViewController:(id)arg1;
- (void)_done:(id)arg1;
- (void)_updateNavigationBarItems;
- (void)_ensureLeftBarButtonItemsIncludesActivityItem:(id)arg1;
- (void)_ensureLeftBarButtonItemsIncludesDoneItem:(id)arg1;
- (id)initWithFilePath:(id)arg1 sourceURL:(id)arg2;

@end
