/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface NEIKEv2Payload : NSObject

{
    _Bool _isInbound;
    NSData *_payloadData;
}

@property _Bool isInbound;
@property (readonly) _Bool hasRequiredFields;
@property (retain) NSData *payloadData;
@property (readonly) _Bool isValid;
@property (readonly) unsigned long long type;

+ (id)copyTypeDescription;
+ (id)createPayloadWithType:(unsigned long long)arg1 fromData:(id)arg2;

- (id)init;
- (id)copyPayloadData;
- (_Bool)generatePayloadData;
- (_Bool)parsePayloadData;

@end
