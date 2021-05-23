/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class WAKView;

__attribute__((visibility("hidden")))
@interface WebHTMLViewPrivate : NSObject

{
    _Bool closed;
    _Bool ignoringMouseDraggedEvents;
    _Bool printing;
    _Bool paginateScreenContent;
    WAKView *layerHostingView;
    struct RetainPtr<WebEvent> mouseDownEvent;
    _Bool handlingMouseDownEvent;
    struct RetainPtr<WebEvent> keyDownEvent;
    _Bool exposeInputContext;
    struct CGPoint lastScrollPosition;
    _Bool inScrollPositionChanged;
    struct RetainPtr<WebPluginController> pluginController;
    struct RetainPtr<NSArray> pageRects;
    struct WebHTMLViewInterpretKeyEventsParameters *interpretKeyEventsParameters;
    struct RetainPtr<WebDataSource> dataSource;
    SEL selectorForDoCommandBySelector;
}

- (void)dealloc;
- (void)clear;
- (id).cxx_construct;

@end
