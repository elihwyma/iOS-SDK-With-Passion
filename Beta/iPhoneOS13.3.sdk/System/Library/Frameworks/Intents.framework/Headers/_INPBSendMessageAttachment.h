/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBFileDataAttachment, _INPBURLValue;

@interface _INPBSendMessageAttachment : PBCodable <Swift>

{
    struct _has;
    _Bool _currentLocation;
    _Bool __encodeLegacyGloryData;
    _INPBFileDataAttachment *_file;
    _INPBURLValue *_fileURL;
    _INPBURLValue *_speechDataURL;
    unsigned long long _whichDatasource;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool currentLocation;
@property (nonatomic, readonly) _Bool hasCurrentLocation;
@property (retain, nonatomic) _INPBFileDataAttachment *file;
@property (nonatomic, readonly) _Bool hasFile;
@property (retain, nonatomic) _INPBURLValue *fileURL;
@property (nonatomic, readonly) _Bool hasFileURL;
@property (retain, nonatomic) _INPBURLValue *speechDataURL;
@property (nonatomic, readonly) _Bool hasSpeechDataURL;
@property (nonatomic, readonly) unsigned long long whichDatasource;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
