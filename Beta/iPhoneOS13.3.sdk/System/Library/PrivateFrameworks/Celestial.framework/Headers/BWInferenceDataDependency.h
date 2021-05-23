/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWInferenceDataRequirement, BWInferenceRequirement;

@interface BWInferenceDataDependency : NSObject

{
    BWInferenceDataRequirement *_dataRequirement;
    BWInferenceRequirement *_inferenceRequirement;
}

@property (nonatomic, readonly) BWInferenceDataRequirement *dataRequirement;
@property (nonatomic, readonly) BWInferenceRequirement *inferenceRequirement;

- (void)dealloc;
- (id)initWithInferenceRequirement:(id)arg1 dependentOnDataRequirement:(id)arg2;

@end
