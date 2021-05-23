/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <WFAQIScaleCategory.h>

@class NSString;

@interface WFAQIScaleCategory (Localized)

@property (copy, nonatomic, readonly) NSString *description;
@property (copy, nonatomic, readonly) NSString *longDescription;
@property (nonatomic, readonly) unsigned long long warningLevel;
@property (copy, nonatomic, readonly) NSString *scaleClassName;

@end
