/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, WKWebView;

@protocol SWLogger;

@interface SWScriptsManager : NSObject

{
    _Bool _readyToExecuteScripts;
    WKWebView *_webView;
    id <SWLogger> _logger;
    NSMutableArray *_queuedExecutableScripts;
}

@property (nonatomic, readonly) WKWebView *webView;
@property (nonatomic, readonly) id <SWLogger> logger;
@property (nonatomic, readonly) NSMutableArray *queuedExecutableScripts;
@property (nonatomic) _Bool readyToExecuteScripts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)executeScript:(id)arg1;
- (void)addScript:(id)arg1;
- (void)removeAllScripts;
- (void)removeScript:(id)arg1;
- (id)initWithWebView:(id)arg1 documentStateProvider:(id)arg2 logger:(id)arg3;
- (void)executeQueuedScripts;
- (void)queueExecutableScript:(id)arg1;

@end
