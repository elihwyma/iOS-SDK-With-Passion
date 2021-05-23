/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <PBCodable.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSString;

@interface ICIAMTriggerCondition : PBCodable <Swift>

{
    int _comparisonType;
    int _dataType;
    NSString *_identifier;
    NSString *_triggerValue;
    struct {
        unsigned int comparisonType:1;
        unsigned int dataType:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) _Bool hasDataType;
@property (nonatomic) int dataType;
@property (nonatomic) _Bool hasComparisonType;
@property (nonatomic) int comparisonType;
@property (nonatomic, readonly) _Bool hasTriggerValue;
@property (retain, nonatomic) NSString *triggerValue;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)dataTypeAsString:(int)arg1;
- (int)StringAsDataType:(id)arg1;
- (id)comparisonTypeAsString:(int)arg1;
- (int)StringAsComparisonType:(id)arg1;

@end
