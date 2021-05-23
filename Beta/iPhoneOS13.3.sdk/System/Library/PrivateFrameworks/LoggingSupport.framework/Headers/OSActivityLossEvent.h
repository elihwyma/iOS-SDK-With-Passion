/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <LoggingSupport/OSActivityEvent.h>

@interface OSActivityLossEvent : OSActivityEvent

{
    _Bool _saturated;
    unsigned int _count;
    unsigned long long _startMachTimestamp;
    unsigned long long _endMachTimestamp;
}

@property (nonatomic, readonly) unsigned long long startMachTimestamp;
@property (nonatomic, readonly) unsigned long long endMachTimestamp;
@property (nonatomic, readonly) unsigned int count;
@property (nonatomic, readonly) _Bool saturated;

- (id)initWithEntry:(struct os_activity_stream_entry_s *)arg1;
- (void)_addProperties:(id)arg1;

@end
