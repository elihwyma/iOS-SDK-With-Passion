/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, WFRemoteFileListView;

@protocol WFRemoteFileListViewDelegate;

__attribute__((visibility("hidden")))
@interface WFFilePickerResultsViewController : UIViewController

{
    NSArray *_files;
    id <WFRemoteFileListViewDelegate> _delegate;
    WFRemoteFileListView *_fileListView;
}

@property (weak, nonatomic, readonly) WFRemoteFileListView *fileListView;
@property (copy, nonatomic) NSArray *files;
@property (weak, nonatomic, readonly) id <WFRemoteFileListViewDelegate> delegate;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)updateContentInset;
- (id)initWithFileListDelegate:(id)arg1;

@end
