/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <WebKitLegacy/WebEvent.h>

@class UIEvent;

__attribute__((visibility("hidden")))
@interface WKWebEvent : WebEvent

{
    struct RetainPtr<UIEvent> _uiEvent;
}

@property (retain, nonatomic, readonly) UIEvent *uiEvent;

- (id).cxx_construct;
- (id)initWithEvent:(id)arg1;

@end
