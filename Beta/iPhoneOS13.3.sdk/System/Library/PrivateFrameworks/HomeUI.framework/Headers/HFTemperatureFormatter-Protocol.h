/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/Swift-Protocol.h>

@class NSString;

@protocol HFTemperatureFormatter <Swift>

@property (nonatomic) _Bool inputIsCelsius;
@property (copy, nonatomic) NSString *fallbackTemperatureString;
@property (nonatomic) unsigned long long maximumFractionDigits;
@property (nonatomic) unsigned long long minimumFractionDigits;

@end
