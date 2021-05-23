/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKDPRecordType : PBCodable

{
    NSString *_name;
}

@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

@end
