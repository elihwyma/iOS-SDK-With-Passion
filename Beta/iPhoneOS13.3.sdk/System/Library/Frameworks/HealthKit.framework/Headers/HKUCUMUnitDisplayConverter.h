/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface HKUCUMUnitDisplayConverter : NSObject

{
    NSDictionary *_synonymLookupTable;
    NSDictionary *_hkUnitNameLookupTable;
}

@property (copy, nonatomic) NSDictionary *synonymLookupTable;
@property (copy, nonatomic) NSDictionary *hkUnitNameLookupTable;

+ (id)sharedConverter;

- (id)init;
- (id)hkUnitNameForUCUMUnitCode:(id)arg1;
- (id)synonymForUCUMUnitString:(id)arg1;

@end
