/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <PhotoAnalysis/Swift-Protocol.h>

@class NSData, NSDate, NSString;

@protocol PVAssetProtocol <Swift>

@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) NSString *cloudIdentifier;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) NSString *originalFilename;
@property (nonatomic, readonly) unsigned long long pixelWidth;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) struct CLLocationCoordinate2D locationCoordinate;
@property (nonatomic, readonly) NSData *distanceIdentity;
@property (nonatomic, readonly) NSDate *clsDistanceIdentity;

@end
