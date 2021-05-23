/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class CLLocation, NSArray, NSDate;

@interface PLAssetCluster : NSObject

{
    NSArray *_assets;
    CLLocation *_location;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;

+ (id)mergedCluster:(id)arg1;
+ (id)sortByTimeSortDescriptors;

- (id)description;
- (id)initWithAssetsSortedByDate:(id)arg1 region:(id)arg2;

@end
