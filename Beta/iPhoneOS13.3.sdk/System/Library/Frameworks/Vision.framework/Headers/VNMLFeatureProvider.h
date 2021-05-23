/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, VNSceneprint;

@protocol MLFeatureProvider;

__attribute__((visibility("hidden")))
@interface VNMLFeatureProvider : NSObject

{
    NSString *_imageInputKey;
    struct __CVBuffer *_buffer;
    VNSceneprint *_scenePrint;
    long long *_scenePrintMLMultiArrayDataType;
    id <MLFeatureProvider> _featureProvider;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (void)dealloc;
- (id)featureValueForName:(id)arg1;
- (id)initWithBuffer:(struct __CVBuffer *)arg1 forKey:(id)arg2 originalFeatureProvider:(id)arg3;
- (id)initWithScenePrint:(id)arg1 dataType:(long long *)arg2 forKey:(id)arg3 originalFeatureProvider:(id)arg4;
- (id)featureValueFromScenePrint:(id)arg1 dataType:(long long)arg2;

@end
