/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface VNPersonsModelFaceModel : NSObject

{
    NSMapTable *_serialNumberToPersonUniqueIdentifierMapTable;
    shared_ptr_8c39738b _faceIDModel;
    unsigned long long _faceprintRequestRevision;
    int _maximumElementsPerID;
}

+ (_Bool)supportsSecureCoding;
+ (shared_ptr_099ccdd3)_concatenateFaceprintImageDescriptorBuffer:(shared_ptr_099ccdd3)arg1 withFaceprints:(id)arg2 forIdentityWithSerialNumber:(int)arg3 faceprintLabels:(vector_3203cf93 *)arg4;
+ (id)modelBuiltFromConfiguration:(id)arg1 dataProvider:(id)arg2 canceller:(id)arg3 error:(id *)arg4;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (unsigned long long)personCount;
- (id)personUniqueIdentifiers;
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)arg1;
- (id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg1;
- (id)faceCountsForAllPersons;
- (unsigned long long)faceprintRequestRevision;
- (id)initWithFaceIDModel:(shared_ptr_8c39738b)arg1 faceprintRequestRevision:(unsigned long long)arg2 maximumElementsPerID:(unsigned long long)arg3 personUniqueIdentifierToSerialNumberMapping:(id)arg4;
- (id)_personPredictionsForFace:(id)arg1 withDescriptor:(const struct ImageDescriptorBufferFloat32 *)arg2 limit:(unsigned long long)arg3 faceIDCanceller:(struct CVMLCanceller *)arg4 error:(id *)arg5;
- (id)personPredictionsForFace:(id)arg1 withDescriptor:(const struct ImageDescriptorBufferFloat32 *)arg2 limit:(unsigned long long)arg3 canceller:(id)arg4 error:(id *)arg5;

@end
