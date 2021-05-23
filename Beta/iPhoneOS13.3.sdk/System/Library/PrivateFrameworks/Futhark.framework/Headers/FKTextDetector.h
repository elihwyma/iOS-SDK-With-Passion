/*
 Image: /System/Library/PrivateFrameworks/Futhark.framework/Futhark
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol OS_dispatch_queue;

@interface FKTextDetector : NSObject

{
    struct FKSession *_sessions[8];
    struct recognizer *_recognizer;
    struct CGSize _size;
    struct CGRect _roi;
    unsigned int _timeDownscale[8];
    unsigned int _timeBinarizer[8];
    unsigned int _timeConcomps[8];
    unsigned int _timeSequences[8];
    unsigned int _timeRecognizer[8];
    struct {
        unsigned long long scaleBuffer;
        unsigned long long binarizer;
        unsigned long long linesegs;
        unsigned long long concomps;
        unsigned long long sequences;
        unsigned long long total;
    } _memoryUsage[8];
    _Bool _detectDiacritics;
    _Bool _returnSubFeatures;
    _Bool _minimizeFalseDetections;
    _Bool _createFeaturesForAllConcomps;
    _Bool _enableBinarizerFiltering;
    _Bool _colorSplits;
    int _minimumCharacterHeight;
    int _binarizerLimit;
    int _contrastLimit;
    NSString *_recognitionLanguage;
    NSArray *_recognitionLanguages;
    long long _thresholdingAlgorithm;
    NSObject<OS_dispatch_queue> *_multiThreadingQueue;
    CDStruct_74dcf1ab _mergeSettings;
}

@property (nonatomic) _Bool createFeaturesForAllConcomps;
@property (nonatomic) _Bool enableBinarizerFiltering;
@property (nonatomic) _Bool colorSplits;
@property (nonatomic) CDStruct_74dcf1ab mergeSettings;
@property (nonatomic) int contrastLimit;
@property (nonatomic) _Bool detectDiacritics;
@property (nonatomic) int minimumCharacterHeight;
@property (nonatomic) long long thresholdingAlgorithm;
@property (nonatomic) int binarizerLimit;
@property (copy, nonatomic) NSString *recognitionLanguage;
@property (copy, nonatomic) NSArray *recognitionLanguages;
@property (nonatomic) _Bool returnSubFeatures;
@property (nonatomic) _Bool minimizeFalseDetections;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *multiThreadingQueue;

- (void)dealloc;
- (id)initWithDimensions:(struct CGSize)arg1;
- (void)resetOptions;
- (id)detectFeaturesInBuffer:(struct __CVBuffer *)arg1 withRegionOfInterest:(struct CGRect)arg2 error:(id *)arg3;
- (void)resetTimers;
- (_Bool)disableMultithreading;
- (id)createFeaturesForSessionScale:(int)arg1 roi:(struct CGRect)arg2 originalSize:(struct CGSize)arg3 startID:(long long *)arg4;
- (void)mergeFeature:(id)arg1 withArray:(id)arg2;
- (unsigned char)isValidPixelBuffer:(struct __CVBuffer *)arg1 regionOfInterest:(struct CGRect)arg2 error:(id *)arg3;
- (void)translatePropertiesToOptionsWithNumSessions:(int)arg1;
- (id)createFeaturesForROI:(struct CGRect)arg1 originalSize:(struct CGSize)arg2 lastID:(long long *)arg3;
- (void)runRecognizerOnFeatures:(id)arg1 roi:(struct CGRect)arg2 size:(struct CGSize)arg3 lastID:(long long *)arg4;
- (id)detectFeaturesInBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (id)detectCharacterInBoundingBox:(struct CGRect)arg1 error:(id *)arg2;
- (unsigned long long)getMemoryUsageOfLastOperation;

@end
