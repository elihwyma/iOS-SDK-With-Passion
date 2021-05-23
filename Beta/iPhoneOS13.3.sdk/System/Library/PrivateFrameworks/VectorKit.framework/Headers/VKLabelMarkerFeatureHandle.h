/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@interface VKLabelMarkerFeatureHandle : NSObject

{
    struct LabelMarkerFeatureHandle _actualHandle;
}

- (void)dealloc;
- (id).cxx_construct;
- (id)styleAttributes;
- (int)featureType;
- (long long)featureIndex;
- (int)tileStyle;
- (id)initWithLabelMarkerHandle:(const struct LabelMarkerFeatureHandle *)arg1;
- (const struct LabelMarkerFeatureHandle *)actualHandle;
- (int)tileX;
- (int)tileY;
- (int)tileZ;
- (unsigned int)tileVersion;

@end
