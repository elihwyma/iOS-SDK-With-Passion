/*
 Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, SISchemaRedactableString;

@interface SISchemaDialogOutput : PBCodable

{
    NSString *_viewID;
    SISchemaRedactableString *_spokenDialogOutput;
    SISchemaRedactableString *_displayedDialogOutput;
}

@property (copy, nonatomic) NSString *viewID;
@property (retain, nonatomic) SISchemaRedactableString *spokenDialogOutput;
@property (retain, nonatomic) SISchemaRedactableString *displayedDialogOutput;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
