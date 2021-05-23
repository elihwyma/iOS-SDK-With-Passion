/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <LoggingSupport/OSActivityEventMessage.h>

@class NSObject;

@protocol OS_xpc_object;

@interface OSActivityTraceMessageEvent : OSActivityEventMessage

{
    unsigned char _messageType;
    NSObject<OS_xpc_object> *_payload;
    unsigned long long _senderProgramCounter;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *payload;
@property (nonatomic, readonly) unsigned long long senderProgramCounter;
@property (nonatomic, readonly) unsigned char messageType;

- (id)initWithEntry:(struct os_activity_stream_entry_s *)arg1;
- (void)_addProperties:(id)arg1;

@end
