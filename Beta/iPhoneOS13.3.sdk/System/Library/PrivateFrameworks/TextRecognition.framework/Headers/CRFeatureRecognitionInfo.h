/*
 Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

#import <NSObject.h>

@class CRTextFeature;

@interface CRFeatureRecognitionInfo : NSObject

{
    float _scale;
    CRTextFeature *_feature;
    struct CGRect _bounds;
    struct CGRect _rotatedROI;
}

@property (retain) CRTextFeature *feature;
@property float scale;
@property struct CGRect bounds;
@property struct CGRect rotatedROI;

+ (id)infoForFeature:(id)arg1 scale:(float)arg2 bounds:(struct CGRect)arg3 rotatedROI:(struct CGRect)arg4;

@end
