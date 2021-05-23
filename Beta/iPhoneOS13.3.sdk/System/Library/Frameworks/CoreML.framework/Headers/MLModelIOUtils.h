/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@interface MLModelIOUtils : NSObject

+ (id)loadFromModelSpecificationInArchive:(struct _MLModelInputArchiver *)arg1 withClass:(Class)arg2 versionInfo:(id)arg3 configuration:(id)arg4 error:(id *)arg5;
+ (id)versionForSerializedSpecification:(struct _MLModelSpecification *)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)serializeSpecification:(struct _MLModelSpecification *)arg1 toArchive:(struct _MLModelOutputArchiver *)arg2 error:(id *)arg3;
+ (_Bool)serializeInterfaceFormat:(struct _MLModelDescriptionSpecification *)arg1 archive:(struct _MLModelOutputArchiver *)arg2 error:(id *)arg3;
+ (_Bool)deserializeInterfaceFormat:(struct _MLModelDescriptionSpecification *)arg1 archive:(struct _MLModelInputArchiver *)arg2 error:(id *)arg3;
+ (struct _NSRange)rangeFromAllowedSizeRangeProtoMessage:(const struct SizeRange *)arg1;
+ (id)populateConstraintsForFeatureDescription:(const struct FeatureDescription *)arg1;
+ (id)descriptionFromProto:(const RepeatedPtrField_6c6d963a *)arg1;
+ (id)orderedNamesFromProto:(const RepeatedPtrField_6c6d963a *)arg1;
+ (_Bool)serializeVersionInfo:(id)arg1 archive:(struct _MLModelOutputArchiver *)arg2 error:(id *)arg3;
+ (id)deserializeVersionInfoFromArchive:(struct _MLModelInputArchiver *)arg1 error:(id *)arg2;
+ (_Bool)serializeMetadataAndInterfaceFromSpecification:(struct _MLModelSpecification *)arg1 archive:(struct _MLModelOutputArchiver *)arg2 error:(id *)arg3;
+ (id)deserializeMetadataAndInterfaceFromArchive:(struct _MLModelInputArchiver *)arg1 error:(id *)arg2;
+ (id)inputDescriptionFromInterface:(struct _MLModelDescriptionSpecification *)arg1;
+ (id)outputDescriptionFromInterface:(struct _MLModelDescriptionSpecification *)arg1;
+ (id)trainingInputDescriptionFromInterface:(struct _MLModelDescriptionSpecification *)arg1;
+ (id)orderedFeatureNamesFromInterface:(struct _MLModelDescriptionSpecification *)arg1 forInput:(_Bool)arg2;

@end
