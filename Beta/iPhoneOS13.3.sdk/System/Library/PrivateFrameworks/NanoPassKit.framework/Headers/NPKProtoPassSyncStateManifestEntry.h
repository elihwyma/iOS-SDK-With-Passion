/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NPKProtoPassSyncStateManifestEntry : PBCodable

{
    NSString *_fileHash;
    NSString *_relativePath;
}

@property (retain, nonatomic) NSString *relativePath;
@property (retain, nonatomic) NSString *fileHash;

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
