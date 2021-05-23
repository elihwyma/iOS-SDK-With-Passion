/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKComplication.h>

@class CLKCBundleComplication;

@interface NTKBundleComplication : NTKComplication

{
    CLKCBundleComplication *_complication;
}

@property (nonatomic, readonly) CLKCBundleComplication *complication;

+ (_Bool)supportsSecureCoding;
+ (id)bundledComplicationWithComplication:(id)arg1;
+ (id)_revertedBundleComplicationFromJSONDictionary:(id)arg1;
+ (id)bundledComplicationWithBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedRichDetailText;
- (id)localizedDetailText;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (id)localizedKeylineLabelText;
- (id)customDailySnapshotKey;
- (id)localizedRichKeylineLabelText;

@end
