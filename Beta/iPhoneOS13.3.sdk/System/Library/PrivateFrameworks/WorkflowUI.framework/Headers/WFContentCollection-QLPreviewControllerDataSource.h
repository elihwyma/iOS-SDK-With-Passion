/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ContentKit/WFContentCollection.h>

@interface WFContentCollection (QLPreviewControllerDataSource)

- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (void)generatePreviewControllerDataSource:(CDUnknownBlockType)arg1;

@end
