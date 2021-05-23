/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface RMCategoryLimitUsageChange : PBCodable

{
    long long _changeInUsage;
    unsigned long long _daysSinceCreationDate;
    NSString *_limitType;
    NSString *_limitedCategory;
    _Bool _noCreationDate;
    struct {
        unsigned int changeInUsage:1;
        unsigned int daysSinceCreationDate:1;
        unsigned int noCreationDate:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasLimitedCategory;
@property (retain, nonatomic) NSString *limitedCategory;
@property (nonatomic) _Bool hasDaysSinceCreationDate;
@property (nonatomic) unsigned long long daysSinceCreationDate;
@property (nonatomic) _Bool hasChangeInUsage;
@property (nonatomic) long long changeInUsage;
@property (nonatomic, readonly) _Bool hasLimitType;
@property (retain, nonatomic) NSString *limitType;
@property (nonatomic) _Bool hasNoCreationDate;
@property (nonatomic) _Bool noCreationDate;

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
