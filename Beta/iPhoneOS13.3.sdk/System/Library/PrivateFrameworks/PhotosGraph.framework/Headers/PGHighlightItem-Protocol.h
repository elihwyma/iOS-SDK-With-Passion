/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/Swift-Protocol.h>

@class NSArray, NSDate, NSString, PHAsset;

@protocol PGHighlightItem <Swift>

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *localStartDate;
@property (nonatomic, readonly) NSDate *localEndDate;
@property (nonatomic, readonly) NSString *uuid;
@property (copy, nonatomic, readonly) NSString *dateDescription;
@property (copy, nonatomic, readonly) NSString *smartDescription;
@property (nonatomic, readonly) PHAsset *keyAsset;
@property (nonatomic, readonly) NSArray *extendedCuratedAssets;
@property (nonatomic, readonly) unsigned long long numberOfAssetsInExtended;
@property (nonatomic, readonly) double promotionScore;
@property (nonatomic, readonly) unsigned short type;
@property (nonatomic, readonly) unsigned short kind;
@property (nonatomic, readonly) unsigned short visibilityState;
@property (nonatomic, readonly) unsigned short enrichmentState;
@property (nonatomic, readonly) id modelObject;

@end
