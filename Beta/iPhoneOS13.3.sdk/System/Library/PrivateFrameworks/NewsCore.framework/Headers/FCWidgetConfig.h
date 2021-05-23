/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSDictionary, NTPBWidgetConfig;

@interface FCWidgetConfig : NSObject <Swift>

{
    NTPBWidgetConfig *_pbWidgetConfig;
    NSDictionary *_configDictionary;
}

@property (copy, nonatomic) NTPBWidgetConfig *pbWidgetConfig;
@property (copy, nonatomic) NSDictionary *configDictionary;
@property (nonatomic, readonly) double parsecPopulationFloor;
@property (nonatomic, readonly) double parsecPopulationCeiling;
@property (nonatomic, readonly) long long foregroundMinimumUpdateInterval;
@property (nonatomic, readonly) long long backgroundMinimumUpdateInterval;
@property (nonatomic, readonly) long long articleListForegroundMinimumUpdateInterval;
@property (nonatomic, readonly) long long articleListBackgroundMinimumUpdateInterval;
@property (nonatomic, readonly) long long forYouForegroundMinimumUpdateInterval;
@property (nonatomic, readonly) long long forYouBackgroundMinimumUpdateInterval;
@property (nonatomic, readonly) long long minimumArticleExposureDurationToBePreseen;
@property (nonatomic, readonly) unsigned int minimumNumberOfTimesPreseenToBeSeen;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithWidgetConfig:(id)arg1;

@end
