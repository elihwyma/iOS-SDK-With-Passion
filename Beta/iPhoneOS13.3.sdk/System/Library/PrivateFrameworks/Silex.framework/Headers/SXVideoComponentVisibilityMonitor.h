/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <SilexVideo/SVVisibilityMonitor.h>

@class NSString;

@interface SXVideoComponentVisibilityMonitor : SVVisibilityMonitor

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)didScroll;
- (void)scrollingWillStart;
- (void)scrollingDidStop;

@end
