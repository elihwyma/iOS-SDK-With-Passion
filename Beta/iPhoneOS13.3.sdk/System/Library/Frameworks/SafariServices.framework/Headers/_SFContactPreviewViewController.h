/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UINavigationController.h>

@class CNContactViewController, NSString, NSURL;

@interface _SFContactPreviewViewController : UINavigationController

{
    NSString *_filePath;
    NSURL *_sourceURL;
    CNContactViewController *_contactViewController;
    CDUnknownBlockType _beforeDismissHandler;
    _Bool _deleteFileWhenDone;
}

- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)_presentActivityViewController:(id)arg1;
- (void)_done:(id)arg1;
- (id)initWithFilePath:(id)arg1 sourceURL:(id)arg2 deleteFileWhenDone:(_Bool)arg3 beforeDismissHandler:(CDUnknownBlockType)arg4;

@end
