/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <PhotoAnalysis/Swift-Protocol.h>

@class NSDate, NSString;

@protocol PVMomentProtocol <Swift>

@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long estimatedAssetCount;
@property (nonatomic, readonly) struct CLLocationCoordinate2D approximateCoordinate;

@end
