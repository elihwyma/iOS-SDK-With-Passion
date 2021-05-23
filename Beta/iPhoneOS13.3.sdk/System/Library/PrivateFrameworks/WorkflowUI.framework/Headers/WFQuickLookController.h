/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <QuickLook/QLPreviewController.h>

@class NSMutableIndexSet, NSTimer;

@interface WFQuickLookController : QLPreviewController

{
    _Bool _embedded;
    NSMutableIndexSet *_indexesPendingRefresh;
    NSTimer *_indexTimer;
    long long _lastIndex;
}

@property (retain, nonatomic) NSMutableIndexSet *indexesPendingRefresh;
@property (retain, nonatomic) NSTimer *indexTimer;
@property (nonatomic) long long lastIndex;
@property (nonatomic, getter=isEmbedded) _Bool embedded;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)activityItemForDocumentInteractionController:(id)arg1;
- (void)_updateAppearance:(_Bool)arg1;
- (void)wf_refreshPreviewItemAtIndex:(long long)arg1;
- (void)updateCurrentIndex;

@end
