/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class CLLocation, NSSet, PHAsset;

@interface PGKeyAssetCurationOptions : NSObject

{
    _Bool _focusOnPeople;
    _Bool _complete;
    _Bool _allowContextualTrip;
    _Bool _useSummarizer;
    _Bool _useContextualCurationOnly;
    _Bool _prefilterAssetsWithFaces;
    _Bool _promoteAutoplayableItems;
    CLLocation *_referenceLocation;
    NSSet *_referencePersonUUIDs;
    unsigned long long _precision;
    double _prefilterAssetsWithFacesThreshold;
    PHAsset *_referenceAsset;
}

@property (retain, nonatomic) CLLocation *referenceLocation;
@property (retain, nonatomic) NSSet *referencePersonUUIDs;
@property (nonatomic) unsigned long long precision;
@property (nonatomic) _Bool complete;
@property (nonatomic) _Bool focusOnPeople;
@property (nonatomic) _Bool allowContextualTrip;
@property (nonatomic) _Bool useSummarizer;
@property (nonatomic) _Bool prefilterAssetsWithFaces;
@property (nonatomic) double prefilterAssetsWithFacesThreshold;
@property (nonatomic) _Bool useContextualCurationOnly;
@property (nonatomic) _Bool promoteAutoplayableItems;
@property (nonatomic, readonly) PHAsset *referenceAsset;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithReferenceAsset:(id)arg1;

@end
