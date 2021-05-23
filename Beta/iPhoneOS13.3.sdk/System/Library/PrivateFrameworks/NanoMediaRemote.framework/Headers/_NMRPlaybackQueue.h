/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _NMRPlaybackQueue : PBCodable

{
    NSMutableArray *_contentItems;
    int _location;
    struct {
        unsigned int location:1;
    } _has;
}

@property (nonatomic) _Bool hasLocation;
@property (nonatomic) int location;
@property (retain, nonatomic) NSMutableArray *contentItems;

+ (Class)contentItemType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)contentItemsCount;
- (void)clearContentItems;
- (void)addContentItem:(id)arg1;
- (id)contentItemAtIndex:(unsigned long long)arg1;

@end
