/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <LoggingSupport/OSActivityLogMessageEvent.h>

@interface OSActivitySignpostEvent : OSActivityLogMessageEvent

{
    unsigned long long _signpostID;
}

@property (nonatomic, readonly) unsigned long long signpostID;

- (id)initWithEntry:(struct os_activity_stream_entry_s *)arg1;

@end
