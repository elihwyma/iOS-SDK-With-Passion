/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDPProtectionInfo : PBCodable

{
    NSData *_protectionInfo;
    NSString *_protectionInfoTag;
}

@property (nonatomic, readonly) _Bool hasProtectionInfo;
@property (retain, nonatomic) NSData *protectionInfo;
@property (nonatomic, readonly) _Bool hasProtectionInfoTag;
@property (retain, nonatomic) NSString *protectionInfoTag;

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
