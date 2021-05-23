/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOClientRankingModelFeatureIdentifier.h>

@interface GEOClientRankingModelFeatureTypeIdentifier : GEOClientRankingModelFeatureIdentifier

{
    long long _featureType;
}

@property (nonatomic, readonly) long long featureType;

- (id)init;
- (long long)featureIdentifierType;
- (id)initWithFeatureType:(long long)arg1;

@end
