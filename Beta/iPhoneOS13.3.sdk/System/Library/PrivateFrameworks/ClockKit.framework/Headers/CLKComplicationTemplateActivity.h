/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@interface CLKComplicationTemplateActivity : CLKComplicationTemplate

{
    long long _family;
    _Bool _hideDots;
    double _movePercentComplete;
    double _exercisePercentComplete;
    double _standPercentComplete;
}

@property (nonatomic) double movePercentComplete;
@property (nonatomic) double exercisePercentComplete;
@property (nonatomic) double standPercentComplete;
@property (nonatomic, getter=dotsAreHidden) _Bool hideDots;

+ (id)activityTemplateWithFamily:(long long)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_enumerateFloatKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateBOOLKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
