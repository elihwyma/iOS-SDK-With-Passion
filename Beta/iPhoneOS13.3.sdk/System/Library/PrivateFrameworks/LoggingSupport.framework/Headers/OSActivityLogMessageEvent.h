/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <LoggingSupport/OSActivityEventMessage.h>

@class NSString;

@interface OSActivityLogMessageEvent : OSActivityEventMessage

{
    unsigned char _messageType;
    NSString *_subsystem;
    NSString *_category;
    unsigned long long _senderProgramCounter;
}

@property (copy, nonatomic, readonly) NSString *subsystem;
@property (copy, nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) unsigned long long senderProgramCounter;
@property (nonatomic, readonly) unsigned char messageType;

- (id)initWithEntry:(struct os_activity_stream_entry_s *)arg1;
- (void)_addProperties:(id)arg1;

@end
