/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RMSAudioRouteMessage : PBCodable

{
    long long _macAddress;
    NSString *_displayName;
    _Bool _selected;
    _Bool _supportsVideo;
    struct {
        unsigned int macAddress:1;
        unsigned int selected:1;
        unsigned int supportsVideo:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) _Bool hasMacAddress;
@property (nonatomic) long long macAddress;
@property (nonatomic) _Bool hasSupportsVideo;
@property (nonatomic) _Bool supportsVideo;
@property (nonatomic) _Bool hasSelected;
@property (nonatomic) _Bool selected;

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
