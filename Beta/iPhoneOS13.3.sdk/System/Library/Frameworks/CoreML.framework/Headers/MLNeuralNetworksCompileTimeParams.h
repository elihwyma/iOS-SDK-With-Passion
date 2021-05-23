/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

#import <CoreML/Swift-Protocol.h>

@class NSArray, NSDictionary;

@interface MLNeuralNetworksCompileTimeParams : NSObject <Swift>

{
    long long _lossType;
    long long _optimizerType;
    NSDictionary *_optimizerParameters;
    NSDictionary *_lossParameters;
    NSArray *_trainableLayerNames;
    NSDictionary *_updateParameters;
}

@property (nonatomic) long long lossType;
@property (nonatomic) long long optimizerType;
@property (retain, nonatomic) NSDictionary *optimizerParameters;
@property (retain, nonatomic) NSDictionary *lossParameters;
@property (retain, nonatomic) NSArray *trainableLayerNames;
@property (retain, nonatomic) NSDictionary *updateParameters;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLossType:(long long)arg1 optimizerType:(long long)arg2 optimizerParameters:(id)arg3 lossParameters:(id)arg4 trainableLayerNames:(id)arg5 updateParameters:(id)arg6;
- (_Bool)writeUpdatableParamsToURL:(id)arg1 error:(id *)arg2;
- (id)unarchiveUpdatableParamsAtURL:(id)arg1 error:(id *)arg2;

@end
