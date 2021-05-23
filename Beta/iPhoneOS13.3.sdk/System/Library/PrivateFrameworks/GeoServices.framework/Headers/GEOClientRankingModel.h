/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSArray;

@interface GEOClientRankingModel : NSObject

{
    NSArray *_features;
}

@property (nonatomic, readonly) NSArray *features;

- (id)init;
- (id)initWithGEOPDClientRankingFeatureMetadata:(id)arg1;
- (id)initWithFeatures:(id)arg1;

@end
