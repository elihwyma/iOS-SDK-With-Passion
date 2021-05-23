/*
 Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SISchemaRedactableString : PBCodable

{
    int _redactionState;
    unsigned long long _which_String;
    NSString *_value;
}

@property (nonatomic) int redactionState;
@property (copy, nonatomic) NSString *value;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long which_String;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
