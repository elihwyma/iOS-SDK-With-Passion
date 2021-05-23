/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AXMLanguage, NSSet;

@interface AXMTextDetectionOptions : NSObject

{
    _Bool _correctSpelling;
    _Bool _detectDiacritics;
    _Bool _returnSubFeatures;
    _Bool _minimizeFalsePositives;
    _Bool _usesLanguageCorrection;
    unsigned long long _detectionFlavor;
    AXMLanguage *_textDetectionLanguage;
    NSSet *_spellCheckingLanguages;
    double _minimumCharacterHeight;
    unsigned long long _recognitionLevel;
    double _normalizedMinimumTextHeightRatio;
}

@property (nonatomic) unsigned long long detectionFlavor;
@property (nonatomic) _Bool correctSpelling;
@property (retain, nonatomic) AXMLanguage *textDetectionLanguage;
@property (retain, nonatomic) NSSet *spellCheckingLanguages;
@property (nonatomic) double minimumCharacterHeight;
@property (nonatomic) _Bool detectDiacritics;
@property (nonatomic) _Bool returnSubFeatures;
@property (nonatomic) _Bool minimizeFalsePositives;
@property (nonatomic) unsigned long long recognitionLevel;
@property (nonatomic) double normalizedMinimumTextHeightRatio;
@property (nonatomic) _Bool usesLanguageCorrection;

+ (_Bool)supportsSecureCoding;
+ (id)defaultRecognizeTextOptions;
+ (id)defaultDetectTextRectanglesOptions;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDetectionFlavor:(unsigned long long)arg1;

@end
