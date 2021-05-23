/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <ProtocolBuffer/PBCodable.h>

#import <IMSharedUtilities/Swift-Protocol.h>

@class NSData, NSString;

@interface IMSharedUtilitiesProtoCloudKitEncryptedLocationShareStatusChange : PBCodable <Swift>

{
    long long _shareDirection;
    long long _shareStatus;
    NSString *_otherHandle;
    NSData *_padding;
    unsigned int _version;
    struct {
        unsigned int shareDirection:1;
        unsigned int shareStatus:1;
        unsigned int version:1;
    } _has;
}

@property (nonatomic) _Bool hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) _Bool hasShareStatus;
@property (nonatomic) long long shareStatus;
@property (nonatomic) _Bool hasShareDirection;
@property (nonatomic) long long shareDirection;
@property (nonatomic, readonly) _Bool hasOtherHandle;
@property (retain, nonatomic) NSString *otherHandle;
@property (nonatomic, readonly) _Bool hasPadding;
@property (retain, nonatomic) NSData *padding;

- (void)dealloc;
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
