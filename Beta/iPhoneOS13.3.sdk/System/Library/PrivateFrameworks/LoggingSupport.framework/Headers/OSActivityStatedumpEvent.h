/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <LoggingSupport/OSActivityEvent.h>

@interface OSActivityStatedumpEvent : OSActivityEvent

- (id)initWithEntry:(struct os_activity_stream_entry_s *)arg1;
- (void)_addProperties:(id)arg1;

@end
