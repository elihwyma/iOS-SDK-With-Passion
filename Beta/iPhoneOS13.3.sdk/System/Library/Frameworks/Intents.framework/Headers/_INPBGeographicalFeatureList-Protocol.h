/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBCondition;

@protocol _INPBGeographicalFeatureList <Swift>

@property (retain, nonatomic) _INPBCondition *condition;
@property (nonatomic, readonly) _Bool hasCondition;
@property (copy, nonatomic) NSArray *geographicalFeatures;
@property (nonatomic, readonly) unsigned long long geographicalFeaturesCount;

+ (unsigned short)geographicalFeatureType;

- (unsigned short)clearGeographicalFeatures;
- (unsigned short)addGeographicalFeature: /* Error: Ran out of types for this method. */;
- (unsigned short)geographicalFeatureAtIndex: /* Error: Ran out of types for this method. */;

@end
