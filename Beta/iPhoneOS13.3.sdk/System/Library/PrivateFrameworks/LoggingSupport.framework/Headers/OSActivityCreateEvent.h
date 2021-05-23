/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <LoggingSupport/OSActivityEvent.h>

@interface OSActivityCreateEvent : OSActivityEvent

{
    unsigned long long _creatorActivityID;
    unsigned long long _creatorProcessUniqueID;
    unsigned long long _senderProgramCounter;
}

@property (nonatomic, readonly) unsigned long long creatorActivityID;
@property (nonatomic, readonly) unsigned long long creatorProcessUniqueID;
@property (nonatomic, readonly) unsigned long long senderProgramCounter;

- (id)initWithEntry:(struct os_activity_stream_entry_s *)arg1;
- (void)_addProperties:(id)arg1;

@end
