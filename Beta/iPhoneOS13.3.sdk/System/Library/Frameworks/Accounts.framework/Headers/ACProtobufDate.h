/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface ACProtobufDate : PBCodable

{
    double _value;
}

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) double value;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDate:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
