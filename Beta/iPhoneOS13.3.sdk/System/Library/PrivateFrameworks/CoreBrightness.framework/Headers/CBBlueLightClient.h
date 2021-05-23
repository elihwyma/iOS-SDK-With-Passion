/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <Foundation/NSObject.h>

@class BrightnessSystemClient;

@interface CBBlueLightClient : NSObject

{
    BrightnessSystemClient *bsc;
    CDUnknownBlockType clientBlock;
    _Bool ownsClient;
    _Bool notificationActive;
    _Bool rangeSet;
    CDStruct_6ede4ed5 defaultCctRange;
    _Bool rangeOverridden;
    CDStruct_6ede4ed5 cctRange;
    _Bool _supported;
}

@property _Bool supported;

+ (_Bool)supportsBlueLightReduction;

- (id)init;
- (void)dealloc;
- (_Bool)setEnabled:(_Bool)arg1;
- (_Bool)setMode:(int)arg1;
- (_Bool)setActive:(_Bool)arg1;
- (_Bool)setSchedule:(const CDStruct_6cee55f3 *)arg1;
- (void)enableNotifications;
- (void)disableNotifications;
- (id)initWithClientObj:(id)arg1;
- (_Bool)setEnabled:(_Bool)arg1 withOption:(int)arg2;
- (_Bool)getBlueLightStatus:(CDStruct_fcaf372b *)arg1;
- (_Bool)parseStatusDictionary:(id)arg1 intoStruct:(CDStruct_fcaf372b *)arg2;
- (void)suspendNotifications:(_Bool)arg1 force:(_Bool)arg2;
- (_Bool)setCCT:(float)arg1 withPeriod:(float)arg2 commit:(_Bool)arg3;
- (_Bool)getDefaultCCTRange:(CDStruct_6ede4ed5 *)arg1;
- (_Bool)getCCT:(float *)arg1;
- (_Bool)getCCTRange:(CDStruct_6ede4ed5 *)arg1;
- (_Bool)setStrength:(float)arg1 withPeriod:(float)arg2 commit:(_Bool)arg3;
- (_Bool)getWarningCCT:(float *)arg1;
- (void)setStatusNotificationBlock:(CDUnknownBlockType)arg1;
- (void)suspendNotifications:(_Bool)arg1;
- (_Bool)setCCT:(float)arg1 commit:(_Bool)arg2;
- (_Bool)setCCTRange:(CDStruct_6ede4ed5 *)arg1;
- (_Bool)getStrength:(float *)arg1;
- (_Bool)setStrength:(float)arg1 commit:(_Bool)arg2;
- (_Bool)getWarningStrength:(float *)arg1;

@end
