/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <Foundation/NSObject.h>

#import <CoreNFC/Swift-Protocol.h>

@class NSData;

@interface NFCNDEFPayload : NSObject <Swift>

{
    unsigned long long _chunkSize;
    unsigned char _typeNameFormat;
    NSData *_type;
    NSData *_identifier;
    NSData *_payload;
}

@property (nonatomic) unsigned char typeNameFormat;
@property (copy, nonatomic) NSData *type;
@property (copy, nonatomic) NSData *identifier;
@property (copy, nonatomic) NSData *payload;

+ (_Bool)supportsSecureCoding;
+ (id)wellKnownTypeURIPayloadWithString:(id)arg1;
+ (id)wellKnownTypeURIPayloadWithURL:(id)arg1;
+ (id)wellKnowTypeTextPayloadWithString:(id)arg1 locale:(id)arg2;
+ (id)wellKnownTypeTextPayloadWithString:(id)arg1 locale:(id)arg2;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)asData;
- (unsigned long long)chunkSize;
- (void)setChunkSize:(unsigned long long)arg1;
- (id)initWithFormatType:(unsigned char)arg1 type:(id)arg2 identifier:(id)arg3 payload:(id)arg4 chunkSize:(unsigned long long)arg5;
- (id)wellKnownTypeURIPayload;
- (id)initWithFormat:(unsigned char)arg1 type:(id)arg2 identifier:(id)arg3 payload:(id)arg4;
- (id)initWithFormat:(unsigned char)arg1 type:(id)arg2 identifier:(id)arg3 payload:(id)arg4 chunkSize:(unsigned long long)arg5;
- (id)resolveURIString:(id)arg1;
- (id)wellKnownTypeTextPayloadWithLocale:(id *)arg1;

@end
