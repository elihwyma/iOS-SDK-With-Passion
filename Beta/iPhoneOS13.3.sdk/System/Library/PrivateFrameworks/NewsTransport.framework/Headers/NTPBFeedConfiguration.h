/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBFeedConfiguration : PBCodable

{
    NSString *_freeAFeedID;
    NSString *_freeBFeedID;
    NSString *_freeCFeedID;
    NSString *_paidAFeedID;
    NSString *_paidBFeedID;
    NSString *_paidCFeedID;
}

@property (nonatomic, readonly) _Bool hasFreeAFeedID;
@property (retain, nonatomic) NSString *freeAFeedID;
@property (nonatomic, readonly) _Bool hasFreeBFeedID;
@property (retain, nonatomic) NSString *freeBFeedID;
@property (nonatomic, readonly) _Bool hasFreeCFeedID;
@property (retain, nonatomic) NSString *freeCFeedID;
@property (nonatomic, readonly) _Bool hasPaidAFeedID;
@property (retain, nonatomic) NSString *paidAFeedID;
@property (nonatomic, readonly) _Bool hasPaidBFeedID;
@property (retain, nonatomic) NSString *paidBFeedID;
@property (nonatomic, readonly) _Bool hasPaidCFeedID;
@property (retain, nonatomic) NSString *paidCFeedID;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
