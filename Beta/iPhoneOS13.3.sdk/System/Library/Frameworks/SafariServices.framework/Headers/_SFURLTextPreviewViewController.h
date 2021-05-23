/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSURL, _SFLinkPreviewHeader, _SFURLTextPreviewView, _WKActivatedElementInfo;

@interface _SFURLTextPreviewViewController : UIViewController

{
    NSArray *_linkActions;
    _WKActivatedElementInfo *_activatedElementInfo;
    _SFLinkPreviewHeader *_previewHeader;
    NSURL *_URL;
    _SFURLTextPreviewView *_previewView;
}

@property (retain, nonatomic) _SFURLTextPreviewView *previewView;
@property (copy, nonatomic) NSURL *URL;

- (id)initWithURL:(id)arg1;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (id)previewActionItems;
- (id)_linkActions;
- (id)_activatedElementInfo;
- (void)_setLinkActions:(id)arg1;
- (void)_setActivatedElementInfo:(id)arg1;
- (id)_previewHeader;

@end
