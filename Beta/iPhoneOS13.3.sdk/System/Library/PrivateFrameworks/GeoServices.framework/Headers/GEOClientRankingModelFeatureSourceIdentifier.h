/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOClientRankingModelFeatureIdentifier.h>

@interface GEOClientRankingModelFeatureSourceIdentifier : GEOClientRankingModelFeatureIdentifier

{
    int _source;
}

@property (nonatomic, readonly) int source;

- (id)init;
- (long long)featureIdentifierType;
- (id)initWithSource:(int)arg1;

@end
