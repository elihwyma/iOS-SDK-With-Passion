/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <MediaMiningKit/CLSHolidayCalendarEventRuleTraits.h>

@interface CLSHolidayCalendarEventRuleRequiredTraits : CLSHolidayCalendarEventRuleTraits

{
    _Bool _mustContainMePerson;
    _Bool _allowSceneClassificationBasedEvaluation;
    unsigned long long _type;
    unsigned long long _category;
    struct _NSRange _peopleRange;
}

@property (nonatomic) _Bool mustContainMePerson;
@property (nonatomic) struct _NSRange peopleRange;
@property (nonatomic) _Bool allowSceneClassificationBasedEvaluation;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long category;
@property (nonatomic, readonly) _Bool isCelebration;

+ (id)_locationTraitDebugStringForTrait:(unsigned long long)arg1;
+ (id)_peopleTraitDebugStringForTrait:(unsigned long long)arg1;

- (id)description;
- (id)initWithDescription:(id)arg1;
- (_Bool)evaluateWithTraits:(id)arg1;
- (_Bool)peopleCountRangeIsRequired;

@end
