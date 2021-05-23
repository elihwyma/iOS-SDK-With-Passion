/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2Payload.h>

@class NEIKEv2SPI, NSData;

@interface NEIKEv2NotifyPayload : NEIKEv2Payload

{
    unsigned long long _notifyType;
    NSData *_data;
    NEIKEv2SPI *_spi;
}

@property (readonly) _Bool isError;
@property (readonly) _Bool isPrivateError;
@property unsigned long long notifyType;
@property (retain) NSData *data;
@property (retain) NEIKEv2SPI *spi;

+ (id)copyTypeDescription;
+ (id)createNotifyPayloadType:(unsigned long long)arg1 spi:(id)arg2;
+ (id)createNotifyPayloadType:(unsigned long long)arg1;
+ (id)createNotifyPayloadType:(unsigned long long)arg1 data:(id)arg2;

- (id)description;
- (unsigned long long)type;
- (id)copyError;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)copyTypeDescription;
- (id)copyAdditionalAddress;
- (_Bool)hasRequiredFields;
- (_Bool)generatePayloadData;
- (_Bool)parsePayloadData;
- (id)copyServerRedirectNonce;
- (id)copyServerRedirectEndpoint;

@end
