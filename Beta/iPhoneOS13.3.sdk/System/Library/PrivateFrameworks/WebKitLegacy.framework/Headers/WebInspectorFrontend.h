/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebInspectorFrontend : NSObject

{
    struct WebInspectorFrontendClient *m_frontendClient;
}

- (void)close;
- (void)detach;
- (void)attach;
- (void)showConsole;
- (_Bool)isDebuggingEnabled;
- (void)setDebuggingEnabled:(_Bool)arg1;
- (_Bool)isTimelineProfilingEnabled;
- (void)setTimelineProfilingEnabled:(_Bool)arg1;
- (_Bool)isProfilingJavaScript;
- (id)initWithFrontendClient:(struct WebInspectorFrontendClient *)arg1;
- (void)startProfilingJavaScript;
- (void)stopProfilingJavaScript;

@end
