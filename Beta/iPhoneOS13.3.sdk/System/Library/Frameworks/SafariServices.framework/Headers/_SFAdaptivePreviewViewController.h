/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, NSURL, _SFURLTextPreviewViewController, _WKActivatedElementInfo;

@protocol _SFAdaptivePreviewViewControllerDelegate;

@interface _SFAdaptivePreviewViewController : UIViewController

{
    _SFURLTextPreviewViewController *_textPreviewViewController;
    UIViewController *_linkPreviewViewController;
    id <_SFAdaptivePreviewViewControllerDelegate> _delegate;
    NSArray *_linkActions;
    _WKActivatedElementInfo *_activatedElementInfo;
    NSURL *_URL;
}

@property (weak, nonatomic) id <_SFAdaptivePreviewViewControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *linkActions;
@property (retain, nonatomic) _WKActivatedElementInfo *activatedElementInfo;
@property (retain, nonatomic) NSURL *URL;
@property (nonatomic, readonly) UIViewController *contentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithURL:(id)arg1;
- (void)viewDidLoad;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidLayoutSubviews;
- (_Bool)_allowsUserInteractionWhenPreviewedInContextMenu;
- (id)previewActionItems;
- (void)setLinkPreviewEnabled:(_Bool)arg1;
- (void)_setUpLinkPreviewViewControllerIfNeeded;
- (void)_setUpTextPreviewViewControllerIfNeeded;
- (void)_addViewFromViewController:(id)arg1;
- (void)_removeViewController:(id)arg1;
- (void)linkPreviewHeader:(id)arg1 didEnableLinkPreview:(_Bool)arg2;

@end
