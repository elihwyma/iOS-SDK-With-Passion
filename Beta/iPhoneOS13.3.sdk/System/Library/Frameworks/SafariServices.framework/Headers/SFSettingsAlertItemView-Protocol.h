/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/Swift-Protocol.h>

@class _SFSettingsAlertItem;

@protocol SFSettingsAlertItemView <Swift>

@property (weak, nonatomic) _SFSettingsAlertItem *item;
@property (nonatomic) _Bool hidesSeparator;
@property (nonatomic) long long defaultBackgroundMode;
@property (nonatomic, readonly) long long backgroundMode;

@end
