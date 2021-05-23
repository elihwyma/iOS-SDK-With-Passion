/*
 Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

#import <ProtocolBuffer/PBCodable.h>

@class C2MPError, NSString;

__attribute__((visibility("hidden")))
@interface C2MPGenericEventMetricValue : PBCodable

{
    unsigned long long _dateValue;
    double _doubleValue;
    C2MPError *_errorValue;
    NSString *_stringValue;
    struct {
        unsigned int dateValue:1;
        unsigned int doubleValue:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) _Bool hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) _Bool hasDateValue;
@property (nonatomic) unsigned long long dateValue;
@property (nonatomic, readonly) _Bool hasErrorValue;
@property (retain, nonatomic) C2MPError *errorValue;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
