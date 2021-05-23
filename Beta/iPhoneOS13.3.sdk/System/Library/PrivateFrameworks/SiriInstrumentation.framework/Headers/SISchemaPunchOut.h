/*
 Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, SISchemaViewContainer;

@interface SISchemaPunchOut : PBCodable

{
    NSString *_appID;
    NSString *_urlScheme;
    SISchemaViewContainer *_viewContainer;
    NSData *_viewElementID;
}

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *urlScheme;
@property (retain, nonatomic) SISchemaViewContainer *viewContainer;
@property (copy, nonatomic) NSData *viewElementID;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
