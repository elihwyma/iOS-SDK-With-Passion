/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@protocol PXProtoFeature;

@protocol PXProtoMutableFeatureView <Swift>

@property (retain, nonatomic) id <PXProtoFeature> feature;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (nonatomic, getter=isDisabled) _Bool disabled;

@end
