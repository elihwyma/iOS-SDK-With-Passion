/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FPSearchableItemValue : PBCodable

{
    double _doubleValue;
    long long _integerValue;
    double _timeIntervalSinceReferenceDateValue;
    NSString *_stringValue;
    struct {
        unsigned int doubleValue:1;
        unsigned int integerValue:1;
        unsigned int timeIntervalSinceReferenceDateValue:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) _Bool hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) _Bool hasIntegerValue;
@property (nonatomic) long long integerValue;
@property (nonatomic) _Bool hasTimeIntervalSinceReferenceDateValue;
@property (nonatomic) double timeIntervalSinceReferenceDateValue;

+ (id)stringFromObject:(id)arg1;
+ (id)objectFromString:(id)arg1;

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
