/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <ProtocolBuffer/PBCodable.h>

@interface WBSAnalyticsSafariViewControllerTappedOnToolbarButtonEvent : PBCodable

{
    unsigned long long _timestamp;
    int _button;
    _Bool _usedLongTap;
    CDStruct_9b2e609f _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasButton;
@property (nonatomic) int button;
@property (nonatomic) _Bool hasUsedLongTap;
@property (nonatomic) _Bool usedLongTap;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)buttonAsString:(int)arg1;
- (int)StringAsButton:(id)arg1;

@end
