/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOClientRankingModelFeatureFunction, GEOClientRankingModelFeatureIdentifier;

@interface GEOClientRankingModelFeature : NSObject

{
    GEOClientRankingModelFeatureIdentifier *_featureIdentifier;
    GEOClientRankingModelFeatureFunction *_function;
}

@property (nonatomic, readonly) GEOClientRankingModelFeatureIdentifier *featureIdentifier;
@property (nonatomic, readonly) GEOClientRankingModelFeatureFunction *function;

- (id)init;
- (id)initWithGEOPDClientRankingFeatureMetadata:(id)arg1;
- (id)initWithFeatureIdentifier:(id)arg1 function:(id)arg2;

@end
