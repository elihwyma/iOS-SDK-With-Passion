/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBIssueData : PBCodable

{
    NSString *_issueId;
    int _issueType;
    _Bool _isBundlePaid;
    struct {
        unsigned int issueType:1;
        unsigned int isBundlePaid:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasIssueId;
@property (retain, nonatomic) NSString *issueId;
@property (nonatomic) _Bool hasIsBundlePaid;
@property (nonatomic) _Bool isBundlePaid;
@property (nonatomic) _Bool hasIssueType;
@property (nonatomic) int issueType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)issueTypeAsString:(int)arg1;
- (int)StringAsIssueType:(id)arg1;

@end
