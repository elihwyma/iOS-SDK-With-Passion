/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class WebNodeHighlight, WebView;

__attribute__((visibility("hidden")))
@interface WebNodeHighlighter : NSObject

{
    WebView *_inspectedWebView;
    WebNodeHighlight *_currentHighlight;
}

- (void)dealloc;
- (void)highlight;
- (id)initWithInspectedWebView:(id)arg1;
- (void)hideHighlight;
- (void)didAttachWebNodeHighlight:(id)arg1;
- (void)willDetachWebNodeHighlight:(id)arg1;

@end
