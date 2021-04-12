//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockComplications/CLKCComplication.h>


@interface NTKComplication : CLKCComplication <NSSecureCoding, NSCopying>
{
    NSUInteger _complicationType;
}

+ (BOOL)supportsSecureCoding;
+ (id)complicationWithJSONObjectRepresentation:(id)arg1;
+ (id)_allComplicationConfigurationsWithType:(NSUInteger)arg1;
+ (Class)_complicationClassForType:(NSUInteger)arg1;
+ (id)nullComplication;
+ (id)anyComplicationOfType:(NSUInteger)arg1;
+ (id)allComplicationsOfType:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger complicationType; // @synthesize complicationType=_complicationType;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_initWithComplicationType:(NSUInteger)arg1 JSONDictionary:(id)arg2;
- (id)JSONObjectRepresentation;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1 subclassesAllowed:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)localizedRichDetailText;
- (id)localizedDetailText;
- (id)localizedRichKeylineLabelText;
- (id)localizedKeylineLabelText;
- (id)description;
- (BOOL)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;
- (id)customDailySnapshotKey;
- (BOOL)appearsInDailySnapshotForFamily:(long long)arg1;
- (void)_setComplicationType:(NSUInteger)arg1;
- (id)initWithComplicationType:(NSUInteger)arg1;

@end

