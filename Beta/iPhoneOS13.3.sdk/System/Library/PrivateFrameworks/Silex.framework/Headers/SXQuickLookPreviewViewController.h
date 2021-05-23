/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <QuickLook/QLPreviewController.h>

@class NSString, SXQuickLookFile, SXQuickLookTransitionContext;

@protocol SXMediaSharingPolicyProvider;

@interface SXQuickLookPreviewViewController : QLPreviewController

{
    SXQuickLookFile *_file;
    id <SXMediaSharingPolicyProvider> _mediaSharingPolicyProvider;
    SXQuickLookTransitionContext *_transitionContext;
}

@property (nonatomic, readonly) SXQuickLookFile *file;
@property (nonatomic, readonly) id <SXMediaSharingPolicyProvider> mediaSharingPolicyProvider;
@property (nonatomic, readonly) SXQuickLookTransitionContext *transitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;
- (_Bool)previewController:(id)arg1 canShareItem:(id)arg2;
- (id)initWithFile:(id)arg1 mediaSharingPolicyProvider:(id)arg2 transitionContext:(id)arg3;

@end
