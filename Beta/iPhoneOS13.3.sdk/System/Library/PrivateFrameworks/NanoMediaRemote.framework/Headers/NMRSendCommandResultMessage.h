/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSNumber, NSString, _NMRSendCommandResultMessageProtobuf;

@interface NMRSendCommandResultMessage : NSObject

{
    _NMRSendCommandResultMessageProtobuf *_protobuf;
}

@property (nonatomic, readonly) unsigned int errorCode;
@property (nonatomic, readonly) NSArray *handlerReturnStatuses;
@property (nonatomic, readonly) NSNumber *originIdentifier;
@property (nonatomic, readonly) NSDate *serializationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)messageWithErrorCode:(unsigned int)arg1 handlerReturnStatuses:(id)arg2 originIdentifier:(id)arg3;

- (id)protobufData;
- (id)initWithProtobufData:(id)arg1;
- (id)_initWithErrorCode:(unsigned int)arg1 handlerReturnStatuses:(id)arg2 originIdentifier:(id)arg3;

@end
