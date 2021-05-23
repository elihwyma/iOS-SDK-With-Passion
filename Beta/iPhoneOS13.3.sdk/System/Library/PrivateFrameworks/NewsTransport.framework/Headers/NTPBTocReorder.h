/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface NTPBTocReorder : PBCodable

{
    NSString *_feedId;
    int _feedType;
    NSData *_tocExposureId;
    int _tocNewIndex;
    int _tocOldIndex;
    struct {
        unsigned int feedType:1;
        unsigned int tocNewIndex:1;
        unsigned int tocOldIndex:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasTocExposureId;
@property (retain, nonatomic) NSData *tocExposureId;
@property (nonatomic) _Bool hasTocOldIndex;
@property (nonatomic) int tocOldIndex;
@property (nonatomic) _Bool hasTocNewIndex;
@property (nonatomic) int tocNewIndex;
@property (nonatomic, readonly) _Bool hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (nonatomic) _Bool hasFeedType;
@property (nonatomic) int feedType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
- (int)StringAsFeedType:(id)arg1;

@end
