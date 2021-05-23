/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@class NSString, _MPCProtoDelegateInfo, _MPCProtoRadioContentReference;

@interface _MPCProtoRadioCreationProperties : PBCodable <Swift>

{
    _MPCProtoDelegateInfo *_accountInfo;
    _MPCProtoRadioContentReference *_nowPlayingContentReference;
    NSString *_playActivityFeatureName;
    NSString *_radioStationID;
    NSString *_radioStationURLString;
    _MPCProtoRadioContentReference *_seedContentReference;
}

@property (nonatomic, readonly) _Bool hasRadioStationID;
@property (retain, nonatomic) NSString *radioStationID;
@property (nonatomic, readonly) _Bool hasRadioStationURLString;
@property (retain, nonatomic) NSString *radioStationURLString;
@property (nonatomic, readonly) _Bool hasSeedContentReference;
@property (retain, nonatomic) _MPCProtoRadioContentReference *seedContentReference;
@property (nonatomic, readonly) _Bool hasNowPlayingContentReference;
@property (retain, nonatomic) _MPCProtoRadioContentReference *nowPlayingContentReference;
@property (nonatomic, readonly) _Bool hasAccountInfo;
@property (retain, nonatomic) _MPCProtoDelegateInfo *accountInfo;
@property (nonatomic, readonly) _Bool hasPlayActivityFeatureName;
@property (retain, nonatomic) NSString *playActivityFeatureName;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
