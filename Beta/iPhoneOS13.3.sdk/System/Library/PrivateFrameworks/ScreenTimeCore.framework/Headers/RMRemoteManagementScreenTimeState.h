/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface RMRemoteManagementScreenTimeState : PBCodable

{
    struct {
        unsigned long long *list;
        unsigned long long count;
        unsigned long long size;
    } _daysSinceCreationDates;
    unsigned long long _alwaysAllowedAppsCount;
    unsigned long long _daysWithScreenTimeEnabled;
    unsigned long long _numberOfLimits;
    unsigned long long _timestamp;
    NSString *_familyMemberType;
    NSMutableArray *_limitedCategories;
    _Bool _contentPrivacyRestrictionsEnabled;
    _Bool _customDowntimeEnabled;
    _Bool _downtimeEnabled;
    _Bool _hasPasscode;
    _Bool _isManaged;
    _Bool _isManaging;
    _Bool _screenTimeEnabled;
    struct {
        unsigned int alwaysAllowedAppsCount:1;
        unsigned int daysWithScreenTimeEnabled:1;
        unsigned int numberOfLimits:1;
        unsigned int timestamp:1;
        unsigned int contentPrivacyRestrictionsEnabled:1;
        unsigned int customDowntimeEnabled:1;
        unsigned int downtimeEnabled:1;
        unsigned int hasPasscode:1;
        unsigned int isManaged:1;
        unsigned int isManaging:1;
        unsigned int screenTimeEnabled:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasScreenTimeEnabled;
@property (nonatomic) _Bool screenTimeEnabled;
@property (nonatomic) _Bool hasDaysWithScreenTimeEnabled;
@property (nonatomic) unsigned long long daysWithScreenTimeEnabled;
@property (nonatomic, readonly) _Bool hasFamilyMemberType;
@property (retain, nonatomic) NSString *familyMemberType;
@property (nonatomic) _Bool hasIsManaged;
@property (nonatomic) _Bool isManaged;
@property (nonatomic) _Bool hasIsManaging;
@property (nonatomic) _Bool isManaging;
@property (nonatomic) _Bool hasHasPasscode;
@property (nonatomic) _Bool hasPasscode;
@property (nonatomic) _Bool hasDowntimeEnabled;
@property (nonatomic) _Bool downtimeEnabled;
@property (nonatomic) _Bool hasCustomDowntimeEnabled;
@property (nonatomic) _Bool customDowntimeEnabled;
@property (nonatomic) _Bool hasNumberOfLimits;
@property (nonatomic) unsigned long long numberOfLimits;
@property (retain, nonatomic) NSMutableArray *limitedCategories;
@property (nonatomic, readonly) unsigned long long daysSinceCreationDatesCount;
@property (nonatomic, readonly) unsigned long long *daysSinceCreationDates;
@property (nonatomic) _Bool hasAlwaysAllowedAppsCount;
@property (nonatomic) unsigned long long alwaysAllowedAppsCount;
@property (nonatomic) _Bool hasContentPrivacyRestrictionsEnabled;
@property (nonatomic) _Bool contentPrivacyRestrictionsEnabled;

+ (Class)limitedCategoriesType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addLimitedCategories:(id)arg1;
- (unsigned long long)limitedCategoriesCount;
- (void)clearLimitedCategories;
- (id)limitedCategoriesAtIndex:(unsigned long long)arg1;
- (void)clearDaysSinceCreationDates;
- (unsigned long long)daysSinceCreationDateAtIndex:(unsigned long long)arg1;
- (void)addDaysSinceCreationDate:(unsigned long long)arg1;
- (void)setDaysSinceCreationDates:(unsigned long long *)arg1 count:(unsigned long long)arg2;

@end
