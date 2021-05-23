/*
 Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, SISchemaViewContainer;

@interface SISchemaInvocation : PBCodable

{
    int _invocationAction;
    int _invocationSource;
    SISchemaViewContainer *_viewContainer;
}

@property (nonatomic) int invocationAction;
@property (nonatomic) int invocationSource;
@property (retain, nonatomic) SISchemaViewContainer *viewContainer;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
