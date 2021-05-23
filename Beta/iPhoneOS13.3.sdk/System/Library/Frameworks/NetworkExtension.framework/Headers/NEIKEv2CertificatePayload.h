/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSData;

@interface NEIKEv2CertificatePayload : NEIKEv2Payload

{
    unsigned long long _encoding;
    NSData *_certificateData;
}

@property unsigned long long encoding;
@property (retain) NSData *certificateData;

+ (id)copyTypeDescription;

- (id)description;
- (unsigned long long)type;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)hasRequiredFields;
- (_Bool)generatePayloadData;
- (_Bool)parsePayloadData;

@end
