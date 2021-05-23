/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface MLModelDescriptionUtils : NSObject

+ (struct Metadata *)createMetaData:(id)arg1;
+ (struct ImageFeatureType *)getImageFeatureTypeFromConstraint:(id)arg1;
+ (struct ArrayFeatureType *)getArrayFeatureTypeFromConstraint:(id)arg1;
+ (struct DictionaryFeatureType *)getDictionaryFeatureTypeFromConstraint:(id)arg1 error:(id *)arg2;
+ (struct SequenceFeatureType *)getSequenceFeatureTypeFromConstraint:(id)arg1 error:(id *)arg2;
+ (struct FeatureType *)createFeatureTypeFromFeatureDescription:(id)arg1 error:(id *)arg2;
+ (void)copyFeatureDescriptionFrom:(id)arg1 to:(struct FeatureDescription *)arg2 error:(id *)arg3;
+ (struct ModelDescription *)createModelDescription:(id)arg1 error:(id *)arg2;
+ (_Bool)saveModelDescription:(id)arg1 toSpecification:(struct _MLModelSpecification *)arg2 error:(id *)arg3;

@end
