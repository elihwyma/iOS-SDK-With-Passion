/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

@class CADisplayLink;

__attribute__((visibility("hidden")))
@interface WebDisplayLinkHandler : NSObject

{
    struct DisplayRefreshMonitorIOS *m_monitor;
    CADisplayLink *m_displayLink;
}

- (void)dealloc;
- (void)invalidate;
- (void)handleDisplayLink:(id)arg1;
- (id)initWithMonitor:(struct DisplayRefreshMonitorIOS *)arg1;

@end
