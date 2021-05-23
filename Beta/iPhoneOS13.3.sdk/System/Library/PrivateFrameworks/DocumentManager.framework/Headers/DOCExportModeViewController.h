/*
 Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

#import <DocumentManager/UIDocumentBrowserViewController.h>

@class DOCTargetSelectionBrowserViewController, NSURL;

@interface DOCExportModeViewController : UIDocumentBrowserViewController

{
    NSURL *_directoryURLToReveal;
    DOCTargetSelectionBrowserViewController *_moveVC;
}

@property (retain, nonatomic) DOCTargetSelectionBrowserViewController *moveVC;
@property (copy, nonatomic) NSURL *directoryURLToReveal;

- (void)viewWillAppear:(_Bool)arg1;
- (void)targetSelectionControllerWasCancelled:(id)arg1;
- (void)targetSelectionController:(id)arg1 didExportToURLs:(id)arg2;

@end
