/*
 Image: /System/Library/PrivateFrameworks/NLPLearner.framework/NLPLearner
 */

#import <NSObject.h>

@class NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface QuickTypePFLTrainerMLP : NSObject

{
    NSURL *_seedModelPath;
    struct CFScopedPtr<void *> _model;
    NSNumber *_initialLoss;
    NSNumber *_trainingLoss;
    unsigned long long _batchSize;
    NSNumber *_learningRate;
    NSNumber *_gradientClipMin;
    NSNumber *_gradientClipMax;
    NSNumber *_clippingNorm;
    unsigned long long _normBinCount;
    NSString *_privacyIdentifier;
}

@property (nonatomic, readonly) NSString *privacyIdentifier;
@property (nonatomic) unsigned long long batchSize;
@property (retain, nonatomic) NSNumber *learningRate;
@property (retain, nonatomic) NSNumber *gradientClipMin;
@property (retain, nonatomic) NSNumber *gradientClipMax;
@property (retain, nonatomic) NSNumber *clippingNorm;
@property (nonatomic) unsigned long long normBinCount;
@property (nonatomic, readonly) NSNumber *initialLoss;
@property (nonatomic, readonly) NSNumber *trainingLoss;

+ (void)initialize;
+ (struct __CFData *)copyToFlatBuffer:(void *)arg1;
+ (id)reportingStringForModelUpdates:(float *)arg1 count:(unsigned long long)arg2;

- (id).cxx_construct;
- (_Bool)trainOn:(id)arg1 forNEpochs:(unsigned long long)arg2;
- (id)initWithSeedModelPath:(id)arg1 andPrivacyIdentifier:(id)arg2;
- (void)writeModelToURL:(id)arg1;
- (id)getWeightUpdatesAddNoise:(_Bool)arg1 encryptionKey:(id)arg2;

@end
