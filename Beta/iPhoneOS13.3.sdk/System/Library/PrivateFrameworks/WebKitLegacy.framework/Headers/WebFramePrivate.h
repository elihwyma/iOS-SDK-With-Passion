/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class WebFrameView;

__attribute__((visibility("hidden")))
@interface WebFramePrivate : NSObject

{
    struct Frame *coreFrame;
    WebFrameView *webFrameView;
    struct unique_ptr<WebScriptDebugger, std::__1::default_delete<WebScriptDebugger>> scriptDebugger;
    id internalLoadDelegate;
    _Bool shouldCreateRenderers;
    _Bool includedInWebKitStatistics;
    struct RetainPtr<NSString> url;
    struct RetainPtr<NSString> provisionalURL;
    _Bool isCommitting;
}

- (void)dealloc;
- (id).cxx_construct;
- (void)setWebFrameView:(id)arg1;

@end
