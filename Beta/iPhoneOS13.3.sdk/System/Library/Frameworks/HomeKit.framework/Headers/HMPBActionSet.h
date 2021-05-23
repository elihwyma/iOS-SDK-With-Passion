/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface HMPBActionSet : PBCodable

{
    NSString *_actionSetType;
    NSMutableArray *_actions;
    NSData *_homeUUID;
    NSString *_name;
    NSData *_uuid;
}

@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *actions;
@property (nonatomic, readonly) _Bool hasActionSetType;
@property (retain, nonatomic) NSString *actionSetType;
@property (nonatomic, readonly) _Bool hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic, readonly) _Bool hasHomeUUID;
@property (retain, nonatomic) NSData *homeUUID;

+ (Class)actionsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)actionsCount;
- (id)actionsAtIndex:(unsigned long long)arg1;
- (void)clearActions;
- (void)addActions:(id)arg1;

@end
