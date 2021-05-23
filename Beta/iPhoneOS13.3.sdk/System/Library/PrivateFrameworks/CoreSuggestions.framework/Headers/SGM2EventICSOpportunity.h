/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface SGM2EventICSOpportunity : PBCodable

{
    NSString *_key;
    int _recipient;
    int _source;
    _Bool _accountSetup;
    struct {
        unsigned int recipient:1;
        unsigned int source:1;
        unsigned int accountSetup:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) _Bool hasSource;
@property (nonatomic) int source;
@property (nonatomic) _Bool hasRecipient;
@property (nonatomic) int recipient;
@property (nonatomic) _Bool hasAccountSetup;
@property (nonatomic) _Bool accountSetup;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)sourceAsString:(int)arg1;
- (int)StringAsSource:(id)arg1;
- (id)recipientAsString:(int)arg1;
- (int)StringAsRecipient:(id)arg1;

@end
