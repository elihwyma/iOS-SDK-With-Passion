/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface VNClassificationCustomHierarchy : NSObject

{
    shared_ptr_eb20c8f2 _hierarchicalModel_DO_NOT_ACCESS_DIRECTLY;
    NSDictionary *_additionalRelationships;
    unsigned long long _sceneClassificationRequestRevision;
    unsigned long long _sceneClassificationRequestDetectionLevel;
}

@property (copy, nonatomic, readonly) NSDictionary *relationships;
@property (nonatomic, readonly) unsigned long long requestRevision;

+ (_Bool)supportsSecureCoding;
+ (id)customHierarchyForRequest:(id)arg1 error:(id *)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (id)initWithSceneClassificationRequestRevision:(unsigned long long)arg1 detectionLevel:(unsigned long long)arg2;
- (shared_ptr_eb20c8f2)hierarchicalModelAndReturnError:(id *)arg1;
- (shared_ptr_eb20c8f2)newHierarchicalModelAndReturnError:(id *)arg1;
- (_Bool)_addRelationships:(id)arg1 error:(id *)arg2;
- (id)customHierarchyWithAdditionalParent:(id)arg1 children:(id)arg2 error:(id *)arg3;
- (id)customHierarchyWithAdditionalRelationships:(id)arg1 error:(id *)arg2;
- (unsigned long long)requestDetectionLevel;

@end
