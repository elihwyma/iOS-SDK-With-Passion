/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSData, NSString, _INPBURLValue;

@interface _INPBFile : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    NSData *_data;
    _INPBURLValue *_fileURL;
    NSString *_filename;
    NSString *_typeIdentifier;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSData *data;
@property (nonatomic, readonly) _Bool hasData;
@property (retain, nonatomic) _INPBURLValue *fileURL;
@property (nonatomic, readonly) _Bool hasFileURL;
@property (copy, nonatomic) NSString *filename;
@property (nonatomic, readonly) _Bool hasFilename;
@property (copy, nonatomic) NSString *typeIdentifier;
@property (nonatomic, readonly) _Bool hasTypeIdentifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
