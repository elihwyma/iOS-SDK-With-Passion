/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <Foundation/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface _RWITCPRelayMessage : NSObject

{
    _Bool _writtenHeader;
    unsigned long long _writtenPayloadOffset;
    NSData *_payload;
}

@property (nonatomic, readonly) unsigned long long length;
@property (copy, nonatomic, readonly) NSData *payload;

+ (id)TCPRelayMessageWithPayload:(id)arg1;
+ (id)TCPRelayMessageFromDataStream:(id)arg1 error:(id *)arg2;

- (id)initWithPayload:(id)arg1;
- (long long)write:(int)arg1;
- (long long)writeLockdown:(struct _lockdown_connection *)arg1;
- (long long)writeInternal:(CDUnknownBlockType)arg1;

@end
