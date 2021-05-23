/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NACAudioRouteBuffer : PBCodable

{
    NSString *_routeName;
    int _routeType;
    NSString *_uniqueIdentifier;
    _Bool _picked;
    _Bool _supportsVolumeControl;
    struct {
        unsigned int routeType:1;
        unsigned int picked:1;
        unsigned int supportsVolumeControl:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasUniqueIdentifier;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic, readonly) _Bool hasRouteName;
@property (retain, nonatomic) NSString *routeName;
@property (nonatomic) _Bool hasSupportsVolumeControl;
@property (nonatomic) _Bool supportsVolumeControl;
@property (nonatomic) _Bool hasPicked;
@property (nonatomic) _Bool picked;
@property (nonatomic) _Bool hasRouteType;
@property (nonatomic) int routeType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)routeTypeAsString:(int)arg1;
- (int)StringAsRouteType:(id)arg1;

@end
