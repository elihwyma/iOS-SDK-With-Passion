/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CKDPStreamingAssetFooter : PBCodable

{
    NSData *_md5;
    int _status;
}

@property (nonatomic) int status;
@property (retain, nonatomic) NSData *md5;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)statusAsString:(int)arg1;
- (int)StringAsStatus:(id)arg1;

@end
