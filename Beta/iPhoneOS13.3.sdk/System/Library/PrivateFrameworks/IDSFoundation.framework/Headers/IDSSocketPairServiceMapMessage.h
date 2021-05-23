/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSString;

@interface IDSSocketPairServiceMapMessage : IDSSocketPairMessage

{
    unsigned char _reason;
    unsigned short _mappedStreamID;
    NSString *_serviceName;
}

@property (nonatomic, readonly) unsigned char reason;
@property (nonatomic, readonly) unsigned short mappedStreamID;
@property (nonatomic, readonly) NSString *serviceName;

- (unsigned char)command;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)_nonHeaderData;
- (id)initWithReason:(unsigned char)arg1 mappedStreamID:(unsigned short)arg2 serviceName:(id)arg3;

@end
