/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CKDPPackageManifestItem : PBCodable

{
    long long _size;
    NSData *_signature;
    _Bool _lastItem;
    struct {
        unsigned int size:1;
        unsigned int lastItem:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasSignature;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic) _Bool hasSize;
@property (nonatomic) long long size;
@property (nonatomic) _Bool hasLastItem;
@property (nonatomic) _Bool lastItem;

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
