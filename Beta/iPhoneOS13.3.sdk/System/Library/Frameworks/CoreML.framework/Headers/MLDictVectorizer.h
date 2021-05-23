/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLModel.h>

@class NSOrderedSet, NSString;

@interface MLDictVectorizer : MLModel

{
    NSOrderedSet *_categoryName;
}

@property (nonatomic, readonly) NSOrderedSet *categoryName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)categoryName:(id)arg1 inputDescription:(id)arg2 outputDescription:(id)arg3 orderedInputFeatureNames:(id)arg4 orderedOutputFeatureNames:(id)arg5 error:(id *)arg6;
+ (id)categoryName:(id)arg1 dataTransformerName:(id)arg2 inputDescription:(id)arg3 outputDescription:(id)arg4 orderedInputFeatureNames:(id)arg5 orderedOutputFeatureNames:(id)arg6 error:(id *)arg7;

- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWith:(id)arg1 dataTransformerName:(id)arg2 inputDescription:(id)arg3 outputDescription:(id)arg4 orderedInputFeatureNames:(id)arg5 orderedOutputFeatureNames:(id)arg6 configuration:(id)arg7 error:(id *)arg8;
- (id)constructDictionary:(id)arg1 error:(id *)arg2;

@end
