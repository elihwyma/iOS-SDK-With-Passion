/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface FigCaptureSourceCompanionFormat : NSObject

{
    int _formatIndex;
    CDStruct_79c71658 _fesDimensions;
    CDStruct_79c71658 _fesInputCropDimensions;
    CDStruct_79c71658 _outputCropDimensionsWhenFesIsEnabled;
    CDStruct_79c71658 _sensorCropDimensions;
    _Bool _sifrEnabled;
}

@property (readonly) int formatIndex;
@property (readonly) CDStruct_79c71658 fesDimensions;
@property (readonly) CDStruct_79c71658 fesInputCropDimensions;
@property (readonly) CDStruct_79c71658 outputCropDimensionsWhenFesIsEnabled;
@property (readonly) CDStruct_79c71658 sensorCropDimensions;
@property (readonly) _Bool sifrEnabled;

- (void)dealloc;
- (id)description;
- (id)initWithCompanionFormatDictionary:(id)arg1;

@end
