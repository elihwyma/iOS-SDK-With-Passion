/*
 Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, SISchemaViewContainer;

@interface SISchemaUUFRPresented : PBCodable

{
    int _errorCode;
    SISchemaViewContainer *_viewContainer;
    NSString *_errorDomain;
}

@property (retain, nonatomic) SISchemaViewContainer *viewContainer;
@property (copy, nonatomic) NSString *errorDomain;
@property (nonatomic) int errorCode;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
