/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString, WAKView, WebDataSource;

__attribute__((visibility("hidden")))
@interface WebPluginController : NSObject

{
    WAKView *_documentView;
    WebDataSource *_dataSource;
    NSMutableArray *_views;
    _Bool _started;
    NSMutableSet *_checksInProgress;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isPlugInView:(id)arg1;
+ (void)addPlugInView:(id)arg1;

- (void)dealloc;
- (void)setDataSource:(id)arg1;
- (id)webFrame;
- (id)webView;
- (id)initWithDocumentView:(id)arg1;
- (id)plugInViewWithArguments:(id)arg1 fromPluginPackage:(id)arg2;
- (void)pluginView:(id)arg1 receivedResponse:(id)arg2;
- (void)pluginView:(id)arg1 receivedData:(id)arg2;
- (void)pluginView:(id)arg1 receivedError:(id)arg2;
- (void)pluginViewFinishedLoading:(id)arg1;
- (void)destroyAllPlugins;
- (void)stopAllPlugins;
- (void)startAllPlugins;
- (void)addPlugin:(id)arg1;
- (void)destroyPlugin:(id)arg1;
- (void)_webPluginContainerCancelCheckIfAllowedToLoadRequest:(id)arg1;
- (void)stopOnePlugin:(id)arg1;
- (void)stopOnePluginForPageCache:(id)arg1;
- (void)destroyOnePlugin:(id)arg1;
- (void)_cancelOutstandingChecks;
- (void)webPlugInContainerShowStatus:(id)arg1;
- (_Bool)plugInsAreRunning;
- (id)superlayerForPluginView:(id)arg1;
- (void)stopPluginsForPageCache;
- (void)restorePluginsFromCache;
- (_Bool)processingUserGesture;
- (id)_webPluginContainerCheckIfAllowedToLoadRequest:(id)arg1 inFrame:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4;
- (void)webPlugInContainerLoadRequest:(id)arg1 inFrame:(id)arg2;
- (void)webPlugInContainerWillShowFullScreenForView:(id)arg1;
- (void)webPlugInContainerDidHideFullScreenForView:(id)arg1;
- (void)showStatus:(id)arg1;
- (id)URLPolicyCheckReferrer;

@end
