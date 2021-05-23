/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSData;

@interface NEIKEv2EncryptedPayload : NEIKEv2Payload

{
    NSData *_encryptedData;
}

@property (retain) NSData *encryptedData;

+ (id)copyTypeDescription;

- (id)description;
- (unsigned long long)type;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)hasRequiredFields;
- (_Bool)generatePayloadData;
- (_Bool)parsePayloadData;
- (id)copyDecryptedPayloadsForEncryption:(id)arg1 integrity:(id)arg2 encryptionKey:(id)arg3 integrityKey:(id)arg4 packetData:(id)arg5;
- (_Bool)encryptPayloads:(id)arg1 encryption:(id)arg2 integrity:(id)arg3 encryptionKey:(id)arg4 integrityKey:(id)arg5 aad:(id)arg6 encryptionContext:(id)arg7;

@end
