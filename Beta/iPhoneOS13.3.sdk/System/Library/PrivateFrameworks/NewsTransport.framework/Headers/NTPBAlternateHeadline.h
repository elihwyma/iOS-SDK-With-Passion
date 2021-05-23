/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface NTPBAlternateHeadline : PBCodable

{
    int _articleHeadlineTreatmentId;
    int _articleHeadlineTreatmentState;
    struct {
        unsigned int articleHeadlineTreatmentId:1;
        unsigned int articleHeadlineTreatmentState:1;
    } _has;
}

@property (nonatomic) _Bool hasArticleHeadlineTreatmentState;
@property (nonatomic) int articleHeadlineTreatmentState;
@property (nonatomic) _Bool hasArticleHeadlineTreatmentId;
@property (nonatomic) int articleHeadlineTreatmentId;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
