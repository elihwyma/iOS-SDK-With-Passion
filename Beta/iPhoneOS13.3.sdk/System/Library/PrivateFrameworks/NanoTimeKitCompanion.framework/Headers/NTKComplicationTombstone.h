/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKComplication.h>

@interface NTKComplicationTombstone : NTKComplication

{
    NTKComplication *_complication;
}

@property (nonatomic, readonly) NTKComplication *complication;

+ (_Bool)supportsSecureCoding;
+ (id)tombstoneWithComplication:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_addKeysToJSONDictionary:(id)arg1;

@end
