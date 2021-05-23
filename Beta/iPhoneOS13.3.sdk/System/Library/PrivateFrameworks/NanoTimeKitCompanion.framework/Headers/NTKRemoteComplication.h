/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKComplication.h>

@class NSString;

@interface NTKRemoteComplication : NTKComplication

{
    NSString *_clientIdentifier;
    NSString *_appBundleIdentifier;
}

@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) NSString *appBundleIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)_allComplicationConfigurationsWithType:(unsigned long long)arg1;
+ (id)complicationWithClientIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;
+ (id)_remoteStocksComplication;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedRichDetailText;
- (id)localizedDetailText;
- (id)initWithComplicationType:(unsigned long long)arg1;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (id)localizedKeylineLabelText;
- (id)customDailySnapshotKey;
- (id)localizedRichKeylineLabelText;

@end
