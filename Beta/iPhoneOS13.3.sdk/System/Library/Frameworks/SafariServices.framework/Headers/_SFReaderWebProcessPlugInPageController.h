/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/_SFWebProcessPlugInPageController.h>

@class WKWebProcessPlugInScriptWorld, _SFWebProcessPlugInReaderEnabledPageController;

@interface _SFReaderWebProcessPlugInPageController : _SFWebProcessPlugInPageController

{
    struct unique_ptr<SafariServices::WebProcessPlugInReaderJSController, std::__1::default_delete<SafariServices::WebProcessPlugInReaderJSController>> _readerJSController;
    WKWebProcessPlugInScriptWorld *_isolatedWorldForNextPageDetection;
    _SFWebProcessPlugInReaderEnabledPageController *_originalPageController;
}

@property (weak, nonatomic) _SFWebProcessPlugInReaderEnabledPageController *originalPageController;

+ (id)readerPageControllerForContextHandle:(id)arg1;

- (id).cxx_construct;
- (void)setConfiguration:(id)arg1;
- (void)webProcessPlugInBrowserContextController:(id)arg1 globalObjectIsAvailableForFrame:(id)arg2 inScriptWorld:(id)arg3;
- (id)initWithPlugIn:(id)arg1 contextController:(id)arg2;
- (void)willDestroyBrowserContextController:(id)arg1;
- (struct OpaqueJSValue *)originalArticleFinder;
- (void)_initializeReaderJSControllerForFrame:(id)arg1;
- (void)loadNewArticle;
- (void)reloadArticle;
- (void)setReaderIsActive:(_Bool)arg1;
- (id)isolatedWorldForNextPageDetection;
- (id)collectReaderContentFromPrintAndMailingFrame;
- (id)printingMailingFrame;

@end
