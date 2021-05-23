/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueViewContextData : PBCodable

{
    int _issueViewContext;
    struct {
        unsigned int issueViewContext:1;
    } _has;
}

@property (nonatomic) _Bool hasIssueViewContext;
@property (nonatomic) int issueViewContext;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)issueViewContextAsString:(int)arg1;
- (int)StringAsIssueViewContext:(id)arg1;

@end
