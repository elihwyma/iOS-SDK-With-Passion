/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, _MRAudioFormatSettingsProtobuf;

@interface _MRVoiceInputDeviceDescriptorProtobuf : PBCodable

{
    _MRAudioFormatSettingsProtobuf *_defaultFormat;
    NSMutableArray *_supportedFormats;
}

@property (retain, nonatomic) NSMutableArray *supportedFormats;
@property (nonatomic, readonly) _Bool hasDefaultFormat;
@property (retain, nonatomic) _MRAudioFormatSettingsProtobuf *defaultFormat;

+ (Class)supportedFormatsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addSupportedFormats:(id)arg1;
- (unsigned long long)supportedFormatsCount;
- (void)clearSupportedFormats;
- (id)supportedFormatsAtIndex:(unsigned long long)arg1;

@end
