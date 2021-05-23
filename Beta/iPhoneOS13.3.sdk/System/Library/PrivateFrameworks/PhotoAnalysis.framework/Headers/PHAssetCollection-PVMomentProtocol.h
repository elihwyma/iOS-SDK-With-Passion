/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Photos/PHAssetCollection.h>

@class NSDate, NSString;

@interface PHAssetCollection (PVMomentProtocol)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long estimatedAssetCount;
@property (nonatomic, readonly) struct CLLocationCoordinate2D approximateCoordinate;

@end
