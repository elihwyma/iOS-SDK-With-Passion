/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBCodable.h>

@class BLTPBAppearance, NSData, NSString;

@interface BLTPBAction : PBCodable

{
    int _activationMode;
    BLTPBAppearance *_appearance;
    int _behavior;
    NSData *_behaviorParameters;
    NSData *_behaviorParametersNulls;
    NSString *_identifier;
    NSString *_launchURL;
    struct {
        unsigned int behavior:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) BLTPBAppearance *appearance;
@property (nonatomic) int activationMode;
@property (nonatomic, readonly) _Bool hasLaunchURL;
@property (retain, nonatomic) NSString *launchURL;
@property (nonatomic) _Bool hasBehavior;
@property (nonatomic) int behavior;
@property (nonatomic, readonly) _Bool hasBehaviorParameters;
@property (retain, nonatomic) NSData *behaviorParameters;
@property (nonatomic, readonly) _Bool hasBehaviorParametersNulls;
@property (retain, nonatomic) NSData *behaviorParametersNulls;

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
