/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NPKProtoHash;

@interface NPKProtoNewLibraryHashRequest : PBRequest

{
    unsigned int _lastKnownResyncID;
    NPKProtoHash *_libraryHash;
    unsigned int _resyncID;
    unsigned int _syncID;
    CDStruct_02c44088 _has;
}

@property (retain, nonatomic) NPKProtoHash *libraryHash;
@property (nonatomic) _Bool hasResyncID;
@property (nonatomic) unsigned int resyncID;
@property (nonatomic) _Bool hasLastKnownResyncID;
@property (nonatomic) unsigned int lastKnownResyncID;
@property (nonatomic) _Bool hasSyncID;
@property (nonatomic) unsigned int syncID;

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
