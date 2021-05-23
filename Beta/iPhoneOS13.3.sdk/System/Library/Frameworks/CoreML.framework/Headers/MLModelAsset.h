/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class MLModelConfiguration, NSURL;

@protocol MLClassifier, MLModeling, MLRegressor;

@interface MLModelAsset : NSObject

{
    _Bool _ranLoad;
    NSURL *_compiledURL;
    NSObject<MLModeling> *_asset;
    MLModelConfiguration *_loadConfiguration;
}

@property _Bool ranLoad;
@property (retain) NSObject<MLModeling> *asset;
@property (nonatomic, readonly) MLModelConfiguration *loadConfiguration;
@property (readonly) NSURL *compiledURL;
@property (nonatomic, readonly) id <MLModeling> model;
@property (nonatomic, readonly) id <MLRegressor> regressor;
@property (nonatomic, readonly) id <MLClassifier> classifier;

+ (id)modelAssetWithURL:(id)arg1 error:(id *)arg2;
+ (id)modelAssetWithURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)modelAssetWithSpecification:(struct _MLModelSpecification *)arg1 error:(id *)arg2;
+ (id)modelAssetWithSpecificationURL:(id)arg1 error:(id *)arg2;

- (id)description;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
- (_Bool)load:(id *)arg1;
- (id)modelWithError:(id *)arg1;
- (id)classifierWithError:(id *)arg1;
- (id)regressorWithError:(id *)arg1;

@end
