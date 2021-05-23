/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/SFWebViewController.h>

@class NSString, _SFReaderController;

@protocol SFReaderEnabledWebViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SFReaderEnabledWebViewController : SFWebViewController

{
    _SFReaderController *_readerController;
}

@property (nonatomic, readonly) _SFReaderController *readerController;
@property (weak, nonatomic) id <SFReaderEnabledWebViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)createReaderWebViewForReaderController:(id)arg1;
- (void)readerController:(id)arg1 didDetermineReaderAvailability:(_Bool)arg2 dueTo:(long long)arg3;
- (void)readerController:(id)arg1 contentDidBecomeReadyWithDetectedLanguage:(id)arg2;
- (void)readerController:(id)arg1 didClickLinkRequestingNewWindowInReaderWithRequest:(id)arg2;
- (void)readerController:(id)arg1 didClickLinkInReaderWithRequest:(id)arg2;
- (void)setUpReaderWithReaderWebView:(id)arg1;
- (void)_updateDarkModeEnabled;

@end
