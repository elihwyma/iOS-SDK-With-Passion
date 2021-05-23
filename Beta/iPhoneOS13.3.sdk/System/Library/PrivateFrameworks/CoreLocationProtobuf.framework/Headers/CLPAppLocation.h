/*
 Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

#import <PBCodable.h>

@class CLPLocation, NSString;

@interface CLPAppLocation : PBCodable

{
    double _age;
    NSString *_appBundleId;
    int _appState;
    CLPLocation *_location;
    int _loiType;
    int _routineMode;
    int _serverHash;
    struct {
        unsigned int age:1;
        unsigned int loiType:1;
        unsigned int routineMode:1;
        unsigned int serverHash:1;
    } _has;
}

@property (retain, nonatomic) NSString *appBundleId;
@property (nonatomic) int appState;
@property (nonatomic) _Bool hasAge;
@property (nonatomic) double age;
@property (retain, nonatomic) CLPLocation *location;
@property (nonatomic) _Bool hasServerHash;
@property (nonatomic) int serverHash;
@property (nonatomic) _Bool hasRoutineMode;
@property (nonatomic) int routineMode;
@property (nonatomic) _Bool hasLoiType;
@property (nonatomic) int loiType;

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
