/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VNRecognizeTextRequestConfiguration : VNImageBasedRequestConfiguration

{
    _Bool _usesLanguageCorrection;
    float _minimumTextHeight;
    NSArray *_recognitionLanguages;
    NSArray *_customWords;
    long long _recognitionLevel;
}

@property (copy, nonatomic) NSArray *recognitionLanguages;
@property (copy, nonatomic) NSArray *customWords;
@property (nonatomic) long long recognitionLevel;
@property (nonatomic) _Bool usesLanguageCorrection;
@property (nonatomic) float minimumTextHeight;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end
