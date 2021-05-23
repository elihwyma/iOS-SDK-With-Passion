/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AXMVisionFeature, NSMutableArray, NSMutableString;

@interface AXMDescriptionBuilder : NSObject

{
    long long _builderOptions;
    NSMutableString *_speakableDescription;
    NSMutableString *_visualDescription;
    NSMutableArray *_faceFeatures;
    NSMutableArray *_classificationLocalizedValues;
    NSMutableArray *_iconClassFeatures;
    AXMVisionFeature *_captionFeature;
    AXMVisionFeature *_blurFeature;
    AXMVisionFeature *_brightnessFeature;
}

@property (retain, nonatomic) AXMVisionFeature *blurFeature;
@property (retain, nonatomic) AXMVisionFeature *brightnessFeature;

+ (id)builderWithOptions:(long long)arg1;

- (id)_initWithOptions:(long long)arg1;
- (void)addDetectedClassificationLocalizedValue:(id)arg1;
- (void)_addCaptionInformationToDescription:(id)arg1;
- (void)_addBrightnessInformationToDescription:(id)arg1;
- (void)_addBlurInformationToDescription:(id)arg1;
- (void)_addFaceInformationToDescription:(id)arg1;
- (void)_addClassificationInformationToDescription:(id)arg1;
- (void)_addIconClassInformationToDescription:(id)arg1;
- (id)buildSpeakableDescription;
- (id)_stringForPauseType:(long long)arg1;
- (void)_appendPauseType:(long long)arg1 toDescriptionIfNeeded:(id)arg2;
- (void)_appendToDescription:(id)arg1 afterPauseType:(long long)arg2 withContents:(id)arg3;
- (void)addDetectedFaces:(id)arg1;
- (void)addDetectedClassificationFeatures:(id)arg1;
- (void)setDetectedCaption:(id)arg1;
- (void)addDetectedIconClasses:(id)arg1;
- (id)buildVisualDescription;

@end
