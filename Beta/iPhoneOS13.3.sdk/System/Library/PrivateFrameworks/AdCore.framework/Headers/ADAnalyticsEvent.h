/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <ProtocolBuffer/PBCodable.h>

@interface ADAnalyticsEvent : PBCodable

{
    double _timestamp;
    int _event;
}

@property (nonatomic) int event;
@property (nonatomic) double timestamp;

+ (id)options;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)eventAsString:(int)arg1;
- (int)StringAsEvent:(id)arg1;

@end
