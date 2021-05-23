/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AVTAvatarConfigurationMetric : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)distanceFromConfiguration:(id)arg1 toConfiguration:(id)arg2;
+ (long long)gapFromDistance:(unsigned long long)arg1;
+ (id)defaultMetric;
+ (unsigned long long)differenceCountFromDistance:(unsigned long long)arg1;
+ (long long)impactForSettingKind:(CDStruct_597dd055)arg1;
+ (void)enumerateDifferencesFromConfiguration:(id)arg1 toConfiguration:(id)arg2 withHandler:(CDUnknownBlockType)arg3;

- (unsigned long long)distanceFromConfiguration:(id)arg1 toConfiguration:(id)arg2;
- (long long)gapFromDistance:(unsigned long long)arg1;
- (unsigned long long)differenceCountFromDistance:(unsigned long long)arg1;

@end
