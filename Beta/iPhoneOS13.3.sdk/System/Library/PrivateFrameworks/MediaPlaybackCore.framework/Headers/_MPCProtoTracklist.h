/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@class NSMutableArray, _MPCProtoTracklistIndexPath;

@interface _MPCProtoTracklist : PBCodable <Swift>

{
    NSMutableArray *_accountInfos;
    NSMutableArray *_containers;
    int _shuffleMode;
    _MPCProtoTracklistIndexPath *_startingItemIndexPath;
    struct {
        unsigned int shuffleMode:1;
    } _has;
}

@property (retain, nonatomic) NSMutableArray *accountInfos;
@property (retain, nonatomic) NSMutableArray *containers;
@property (nonatomic, readonly) _Bool hasStartingItemIndexPath;
@property (retain, nonatomic) _MPCProtoTracklistIndexPath *startingItemIndexPath;
@property (nonatomic) _Bool hasShuffleMode;
@property (nonatomic) int shuffleMode;

+ (Class)containerType;
+ (Class)accountInfoType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (unsigned long long)containersCount;
- (void)addContainer:(id)arg1;
- (void)addAccountInfo:(id)arg1;
- (void)clearAccountInfos;
- (unsigned long long)accountInfosCount;
- (id)accountInfoAtIndex:(unsigned long long)arg1;
- (void)clearContainers;
- (id)containerAtIndex:(unsigned long long)arg1;

@end
