/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface _DKPRSource : PBCodable

{
    NSString *_bundleID;
    NSString *_deviceID;
    NSString *_groupID;
    NSString *_itemID;
    NSString *_sourceID;
    int _userID;
    struct {
        unsigned int userID:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasSourceID;
@property (retain, nonatomic) NSString *sourceID;
@property (nonatomic, readonly) _Bool hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic, readonly) _Bool hasItemID;
@property (retain, nonatomic) NSString *itemID;
@property (nonatomic, readonly) _Bool hasGroupID;
@property (retain, nonatomic) NSString *groupID;
@property (nonatomic, readonly) _Bool hasDeviceID;
@property (retain, nonatomic) NSString *deviceID;
@property (nonatomic) _Bool hasUserID;
@property (nonatomic) int userID;

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
