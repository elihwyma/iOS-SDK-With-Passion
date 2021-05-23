/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface NTPBReportConcernSubmission : PBCodable

{
    int _cancelLocation;
    int _reportConcernLocation;
    int _resultType;
    struct {
        unsigned int cancelLocation:1;
        unsigned int reportConcernLocation:1;
        unsigned int resultType:1;
    } _has;
}

@property (nonatomic) _Bool hasResultType;
@property (nonatomic) int resultType;
@property (nonatomic) _Bool hasReportConcernLocation;
@property (nonatomic) int reportConcernLocation;
@property (nonatomic) _Bool hasCancelLocation;
@property (nonatomic) int cancelLocation;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
