/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface _MRAudioFormatSettingsProtobuf : PBCodable

{
    NSData *_formatSettingsPlistData;
}

@property (nonatomic, readonly) _Bool hasFormatSettingsPlistData;
@property (retain, nonatomic) NSData *formatSettingsPlistData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
