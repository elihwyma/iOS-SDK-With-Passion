/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <ProtocolBuffer/PBCodable.h>

@interface WBSAnalyticsSafariContactAutoFillDidSelectSetEvent : PBCodable

{
    unsigned long long _timestamp;
    int _selectedSet;
    _Bool _hadPreviouslyCustomizedSet;
    struct {
        unsigned int timestamp:1;
        unsigned int selectedSet:1;
        unsigned int hadPreviouslyCustomizedSet:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasSelectedSet;
@property (nonatomic) int selectedSet;
@property (nonatomic) _Bool hasHadPreviouslyCustomizedSet;
@property (nonatomic) _Bool hadPreviouslyCustomizedSet;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)selectedSetAsString:(int)arg1;
- (int)StringAsSelectedSet:(id)arg1;

@end
