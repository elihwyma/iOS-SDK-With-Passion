/*
 Image: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
 */

#import <OSAnalytics/OSALog.h>

@class NSData;

@interface OSAEphemeralLog : OSALog

{
    NSData *_content;
}

- (void)retire:(const char *)arg1;
- (id)initWithData:(id)arg1 andMetadata:(id)arg2;

@end
