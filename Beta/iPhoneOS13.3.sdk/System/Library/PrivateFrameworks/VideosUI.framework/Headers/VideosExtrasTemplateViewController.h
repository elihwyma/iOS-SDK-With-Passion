/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VideosExtrasElementViewController.h>

@class IKAppDocument, IKViewElement, NSDictionary, NSString, VideosExtrasContext;

__attribute__((visibility("hidden")))
@interface VideosExtrasTemplateViewController : VideosExtrasElementViewController

{
    IKViewElement *_displayedTemplate;
    NSDictionary *_options;
    IKAppDocument *_document;
    VideosExtrasContext *_context;
}

@property (nonatomic, readonly) IKAppDocument *document;
@property (nonatomic, readonly) _Bool showsPlaceholder;
@property (weak, nonatomic, readonly) VideosExtrasContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)templateViewControllerWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)documentNeedsUpdate:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (void)_showPlaceholder;
- (void)_startBackgroundAudio;
- (_Bool)shouldUpdateByReplacingViewControllerWithTemplate:(id)arg1;
- (void)configureBackgroundWithElements:(id)arg1;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;
- (void)documentDidFail:(id)arg1 withError:(id)arg2;

@end
