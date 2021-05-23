/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCMetricEndpoint.h>

@class BRCAccountSession;

__attribute__((visibility("hidden")))
@interface BRCCKMetricEndpoint : BRCMetricEndpoint

{
    BRCAccountSession *_session;
}

- (void)submitEventMetric:(id)arg1;
- (id)initWithSession:(id)arg1;

@end
