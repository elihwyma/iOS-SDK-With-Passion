/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPFieldActionDeleteListRange, CKDPFieldActionInsertIntoList, CKDPFieldActionReplaceListRange;

__attribute__((visibility("hidden")))
@interface CKDPFieldAction : PBCodable

{
    CKDPFieldActionDeleteListRange *_deleteListRange;
    CKDPFieldActionInsertIntoList *_insertIntoList;
    CKDPFieldActionReplaceListRange *_replaceListRange;
}

@property (nonatomic, readonly) _Bool hasInsertIntoList;
@property (retain, nonatomic) CKDPFieldActionInsertIntoList *insertIntoList;
@property (nonatomic, readonly) _Bool hasDeleteListRange;
@property (retain, nonatomic) CKDPFieldActionDeleteListRange *deleteListRange;
@property (nonatomic, readonly) _Bool hasReplaceListRange;
@property (retain, nonatomic) CKDPFieldActionReplaceListRange *replaceListRange;

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
