/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <ClockKit/CLKComplicationTemplate.h>

@interface CLKComplicationTemplateBreathing : CLKComplicationTemplate

{
    long long _family;
    long long _sessionCount;
}

@property (nonatomic) long long sessionCount;

+ (id)breathingTemplateWithFamily:(long long)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
