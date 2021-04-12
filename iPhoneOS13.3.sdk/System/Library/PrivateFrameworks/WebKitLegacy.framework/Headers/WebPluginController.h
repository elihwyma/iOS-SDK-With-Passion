//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebPluginContainerCheckController-Protocol.h>
#import <WebKitLegacy/WebPluginManualLoader-Protocol.h>

@class NSMutableArray, NSMutableSet, WAKView, WebDataSource;

__attribute__((visibility("hidden")))
@interface WebPluginController : NSObject <WebPluginManualLoader, WebPluginContainerCheckController>
{
    WAKView *_documentView;
    WebDataSource *_dataSource;
    NSMutableArray *_views;
    BOOL _started;
    NSMutableSet *_checksInProgress;
}

+ (BOOL)isPlugInView:(id)arg1;
+ (void)addPlugInView:(id)arg1;
- (void)pluginViewFinishedLoading:(id)arg1;
- (void)pluginView:(id)arg1 receivedError:(id)arg2;
- (void)pluginView:(id)arg1 receivedData:(id)arg2;
- (void)pluginView:(id)arg1 receivedResponse:(id)arg2;
- (id)URLPolicyCheckReferrer;
- (id)webView;
- (id)webFrame;
- (void)showStatus:(id)arg1;
- (void)webPlugInContainerShowStatus:(id)arg1;
- (void)webPlugInContainerDidHideFullScreenForView:(id)arg1;
- (void)webPlugInContainerWillShowFullScreenForView:(id)arg1;
- (void)webPlugInContainerLoadRequest:(id)arg1 inFrame:(id)arg2;
- (id)_webPluginContainerCheckIfAllowedToLoadRequest:(id)arg1 inFrame:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4;
- (BOOL)processingUserGesture;
- (void)destroyAllPlugins;
- (void)_cancelOutstandingChecks;
- (void)_webPluginContainerCancelCheckIfAllowedToLoadRequest:(id)arg1;
- (void)destroyPlugin:(id)arg1;
- (void)addPlugin:(id)arg1;
- (void)restorePluginsFromCache;
- (void)stopPluginsForPageCache;
- (void)stopAllPlugins;
- (void)startAllPlugins;
- (void)destroyOnePlugin:(id)arg1;
- (void)stopOnePluginForPageCache:(id)arg1;
- (void)stopOnePlugin:(id)arg1;
- (id)superlayerForPluginView:(id)arg1;
- (BOOL)plugInsAreRunning;
- (void)dealloc;
- (void)setDataSource:(id)arg1;
- (id)initWithDocumentView:(id)arg1;
- (id)plugInViewWithArguments:(id)arg1 fromPluginPackage:(id)arg2;

@end

