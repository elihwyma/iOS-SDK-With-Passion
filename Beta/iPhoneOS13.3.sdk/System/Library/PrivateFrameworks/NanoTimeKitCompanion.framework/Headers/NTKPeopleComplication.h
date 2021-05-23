/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKComplication.h>

@class NSString;

@interface NTKPeopleComplication : NTKComplication

{
    NSString *_contactID;
    NSString *_shortName;
    NSString *_fullName;
    NSString *_abbreviation;
}

@property (nonatomic, readonly) NSString *contactID;
@property (nonatomic, readonly) NSString *shortName;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) NSString *abbreviation;

+ (_Bool)supportsSecureCoding;
+ (id)_allComplicationConfigurationsWithType:(unsigned long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedRichDetailText;
- (id)localizedDetailText;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (id)localizedKeylineLabelText;
- (_Bool)appearsInDailySnapshotForFamily:(long long)arg1;
- (id)customDailySnapshotKey;
- (_Bool)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;
- (id)localizedRichKeylineLabelText;

@end
