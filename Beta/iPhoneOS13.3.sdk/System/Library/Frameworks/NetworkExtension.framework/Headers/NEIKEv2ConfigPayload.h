/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2Payload.h>

@class NEIKEv2ConfigurationMessage;

@interface NEIKEv2ConfigPayload : NEIKEv2Payload

{
    NEIKEv2ConfigurationMessage *_configuration;
}

@property (retain) NEIKEv2ConfigurationMessage *configuration;

+ (id)copyTypeDescription;

- (id)description;
- (unsigned long long)type;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)hasRequiredFields;
- (_Bool)generatePayloadData;
- (_Bool)parsePayloadData;
- (id)createConfigAttributeFromData:(id)arg1 attributeName:(id)arg2 attributeLen:(unsigned short)arg3 attributeType:(unsigned long long)arg4 customType:(unsigned long long)arg5;

@end
