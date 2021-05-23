/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBString;

@protocol _INPBGeographicalFeature <Swift>

@property (copy, nonatomic) NSArray *geographicalFeatureDescriptors;
@property (nonatomic, readonly) unsigned long long geographicalFeatureDescriptorsCount;
@property (retain, nonatomic) _INPBString *geographicalFeatureType;
@property (nonatomic, readonly) _Bool hasGeographicalFeatureType;

+ (unsigned short)geographicalFeatureDescriptorsType;

- (unsigned short)clearGeographicalFeatureDescriptors;
- (unsigned short)addGeographicalFeatureDescriptors: /* Error: Ran out of types for this method. */;
- (unsigned short)geographicalFeatureDescriptorsAtIndex: /* Error: Ran out of types for this method. */;

@end
