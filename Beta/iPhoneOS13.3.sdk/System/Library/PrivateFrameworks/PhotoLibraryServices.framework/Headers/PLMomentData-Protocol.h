/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@class CLLocation, NSArray, NSDate, NSObject, NSSet, NSString;

@protocol NSCopying, PLMomentListData, PLPhotosHighlightData;

@protocol PLMomentData <Swift>

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) int timeZoneOffset;
@property (retain, nonatomic, readonly) NSDate *localStartDate;
@property (retain, nonatomic, readonly) NSDate *localEndDate;
@property (retain, nonatomic) NSDate *representativeDate;
@property (retain, nonatomic, readonly) NSObject<NSCopying> *uniqueObjectID;
@property (nonatomic) double approximateLatitude;
@property (nonatomic) double approximateLongitude;
@property (retain, nonatomic) CLLocation *approximateLocation;
@property (nonatomic) unsigned short processedLocation;
@property (nonatomic) float aggregationScore;
@property (retain, nonatomic) NSSet *assets;
@property (retain, nonatomic, readonly) NSArray *batchedAssets;
@property (nonatomic, readonly) id <PLPhotosHighlightData> highlight;
@property (retain, nonatomic) id <PLMomentListData> yearMomentList;
@property (retain, nonatomic) id <PLMomentListData> megaMomentList;
@property (nonatomic) int cachedCount;
@property (nonatomic) int cachedPhotosCount;
@property (nonatomic) int cachedVideosCount;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *title;

+ (unsigned short)sortByTimeSortDescriptors;

- (unsigned short)delete;
- (unsigned short)isDeleted;
- (unsigned short)removeAssetData: /* Error: Ran out of types for this method. */;
- (unsigned short)insertAssetData: /* Error: Ran out of types for this method. */;

@end
