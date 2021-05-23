/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, _HKWheelchairUseCharacteristicCache;

@interface HKDisplayTypeController : NSObject

{
    _HKWheelchairUseCharacteristicCache *_wheelchairUseCharacteristicCache;
    NSArray *_displayTypes;
    NSDictionary *_displayTypesByIdentifier;
    NSDictionary *_displayTypesByCategoryIdentifier;
    NSDictionary *_displayTypesByObjectType;
}

+ (id)sharedInstance;

- (id)init;
- (void)wheelchairUseCharacteristicCache:(id)arg1 wheelchairUsageDidChange:(_Bool)arg2;
- (id)displayTypeForObjectType:(id)arg1;
- (id)displayTypeForObjectTypeUnifyingBloodPressureTypes:(id)arg1;
- (void)setWheelchairUseCharacteristicCache:(id)arg1;
- (id)displayTypeWithIdentifier:(id)arg1;
- (id)displayTypesForCategoryIdentifier:(long long)arg1;
- (id)allDisplayTypes;

@end
