/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ContentKit/WFContentItem.h>

@interface WFWeatherAirQualityPollutantContentItem : WFContentItem

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;

- (id)localizedDescription;
- (id)localizedName;
- (id)concentration;
- (id)pollutant;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;

@end
