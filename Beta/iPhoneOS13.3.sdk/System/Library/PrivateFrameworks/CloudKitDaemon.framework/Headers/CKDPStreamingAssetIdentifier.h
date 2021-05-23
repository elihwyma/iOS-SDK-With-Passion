/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDPStreamingAssetIdentifier : PBCodable

{
    NSData *_fileSignature;
    NSString *_owner;
    NSData *_referenceSignature;
}

@property (nonatomic, readonly) _Bool hasOwner;
@property (retain, nonatomic) NSString *owner;
@property (nonatomic, readonly) _Bool hasFileSignature;
@property (retain, nonatomic) NSData *fileSignature;
@property (nonatomic, readonly) _Bool hasReferenceSignature;
@property (retain, nonatomic) NSData *referenceSignature;

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
