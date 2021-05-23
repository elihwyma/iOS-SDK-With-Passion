/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString, VKCustomFeature;

__attribute__((visibility("hidden")))
@interface VKClusterFeatureAnnotation : NSObject

{
    CDStruct_2c43369c _coordinate;
    VKCustomFeature *_customFeature;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) CDStruct_c3b9c2ee coordinate;
@property (nonatomic) double course;

- (void)dealloc;
- (id)feature;
- (id)initWithClusterNode:(struct ClusterTreeClusterNode *)arg1 clusterTree:(const shared_ptr_e2fd4869 *)arg2 baseStyle:(id)arg3 imageText:(id)arg4 annotationText:(id)arg5 annotationLocale:(id)arg6;

@end
