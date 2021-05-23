/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <ProtocolBuffer/PBCodable.h>

@class ACProtobufVariableValue, NSString;

__attribute__((visibility("hidden")))
@interface ACProtobufVariableKeyValuePair : PBCodable

{
    NSString *_key;
    ACProtobufVariableValue *_value;
}

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) ACProtobufVariableValue *value;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)initWithObjectValue:(id)arg1 forKey:(id)arg2;

@end
