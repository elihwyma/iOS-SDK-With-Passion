/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface NWAWDLibnetcoreMbufStatsReport : PBCodable

{
    unsigned long long _mbuf16KBTotal;
    unsigned long long _mbuf256BTotal;
    unsigned long long _mbuf2KBTotal;
    unsigned long long _mbuf4KBTotal;
    unsigned long long _mbufDrainCount;
    unsigned long long _mbufMemReleased;
    unsigned long long _sockAtMBLimit;
    unsigned long long _sockMBcnt;
    struct {
        unsigned int mbuf16KBTotal:1;
        unsigned int mbuf256BTotal:1;
        unsigned int mbuf2KBTotal:1;
        unsigned int mbuf4KBTotal:1;
        unsigned int mbufDrainCount:1;
        unsigned int mbufMemReleased:1;
        unsigned int sockAtMBLimit:1;
        unsigned int sockMBcnt:1;
    } _has;
}

@property (nonatomic) _Bool hasMbuf256BTotal;
@property (nonatomic) unsigned long long mbuf256BTotal;
@property (nonatomic) _Bool hasMbuf2KBTotal;
@property (nonatomic) unsigned long long mbuf2KBTotal;
@property (nonatomic) _Bool hasMbuf4KBTotal;
@property (nonatomic) unsigned long long mbuf4KBTotal;
@property (nonatomic) _Bool hasMbuf16KBTotal;
@property (nonatomic) unsigned long long mbuf16KBTotal;
@property (nonatomic) _Bool hasSockMBcnt;
@property (nonatomic) unsigned long long sockMBcnt;
@property (nonatomic) _Bool hasSockAtMBLimit;
@property (nonatomic) unsigned long long sockAtMBLimit;
@property (nonatomic) _Bool hasMbufMemReleased;
@property (nonatomic) unsigned long long mbufMemReleased;
@property (nonatomic) _Bool hasMbufDrainCount;
@property (nonatomic) unsigned long long mbufDrainCount;

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
