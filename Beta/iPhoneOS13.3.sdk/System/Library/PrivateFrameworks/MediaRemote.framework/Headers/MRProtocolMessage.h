/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class MRProtocolClientConnection, MSVMultiCallback, NSData, NSError, NSString, PBCodable;

@interface MRProtocolMessage : NSObject

{
    NSData *_protobufData;
    _Bool _replied;
    MSVMultiCallback *_messageSentCallbacks;
    MSVMultiCallback *_messagePurgedCallbacks;
    _Bool _isReply;
    PBCodable *_underlyingCodableMessage;
    NSError *_error;
    NSString *_identifier;
    unsigned long long _timestamp;
    MRProtocolClientConnection *_clientConnection;
}

@property (retain, nonatomic) PBCodable *underlyingCodableMessage;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long timestamp;
@property (copy, nonatomic) NSError *error;
@property (weak, nonatomic) MRProtocolClientConnection *clientConnection;
@property (nonatomic) _Bool isReply;
@property (nonatomic, readonly) NSData *protobufData;
@property (nonatomic, readonly) unsigned long long encryptionType;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long priority;
@property (nonatomic, readonly) _Bool shouldLog;
@property (nonatomic, readonly) MSVMultiCallback *messageSentCallbacks;
@property (nonatomic, readonly) MSVMultiCallback *messagePurgedCallbacks;

+ (id)protocolMessageWithProtobufData:(id)arg1;
+ (unsigned long long)currentProtocolVersion;

- (void)dealloc;
- (_Bool)reply;
- (id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2;
- (_Bool)replyWithMessage:(id)arg1;

@end
