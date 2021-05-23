/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class CLCircularRegion, NSDate, NSString, PHAssetCollection;

@interface CLSPPTimeLocationCluster : NSObject

{
    PHAssetCollection *_assetCollection;
    CLCircularRegion *_region;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDate *_expandedEndDate;
    NSDate *_expandedStartDate;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) CLCircularRegion *region;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *timeLocationIdentifier;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) struct CLLocationCoordinate2D coordinates;
@property (nonatomic, readonly) NSDate *expandedStartDate;
@property (nonatomic, readonly) NSDate *expandedEndDate;

- (id)initWithAssetCollection:(id)arg1 region:(id)arg2;

@end
