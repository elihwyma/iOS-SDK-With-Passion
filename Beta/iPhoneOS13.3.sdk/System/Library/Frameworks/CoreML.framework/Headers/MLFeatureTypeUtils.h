/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@interface MLFeatureTypeUtils : NSObject

+ (long long)featureTypeForObject:(id)arg1;
+ (long long)featureTypeForValuesInArray:(id)arg1 error:(id *)arg2;
+ (id)featureDescriptionWithName:(id)arg1 consistentWithFeatureValues:(id)arg2 error:(id *)arg3;
+ (id)featureValuesWithConsistentTypeFromArray:(id)arg1 error:(id *)arg2;
+ (id)descriptionForType:(long long)arg1;
+ (_Bool)canShapeArrayBePromotedFrom:(id)arg1 to:(id)arg2;

@end
