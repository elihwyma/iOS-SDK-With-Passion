/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSArray, NSDate, NSObject, NSSet, NSString;

@protocol NSCopying, PLMomentAssetData, PLPhotosHighlightData;

@protocol PLPhotosHighlightData <Swift>

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic, readonly) NSDate *localStartDate;
@property (retain, nonatomic, readonly) NSDate *localEndDate;
@property (nonatomic) int startTimeZoneOffset;
@property (nonatomic) int endTimeZoneOffset;
@property (nonatomic) _Bool isCurated;
@property (nonatomic) double promotionScore;
@property (nonatomic) unsigned short type;
@property (nonatomic) unsigned short kind;
@property (nonatomic) unsigned short category;
@property (nonatomic) unsigned short visibilityState;
@property (nonatomic) unsigned short enrichmentState;
@property (retain, nonatomic) id <PLPhotosHighlightData> parentPhotosHighlight;
@property (retain, nonatomic) id <PLPhotosHighlightData> parentDayGroupPhotosHighlight;
@property (retain, nonatomic) NSSet *childPhotosHighlights;
@property (retain, nonatomic) NSSet *childDayGroupPhotosHighlights;
@property (retain, nonatomic, readonly) NSObject<NSCopying> *uniqueObjectID;
@property (retain, nonatomic) NSSet *moments;
@property (retain, nonatomic, readonly) NSArray *momentsSortedByTime;
@property (retain, nonatomic) id <PLMomentAssetData> keyAssetForKind;
@property (retain, nonatomic) id <PLMomentAssetData> monthFirstAsset;
@property (retain, nonatomic) NSSet *assets;
@property (retain, nonatomic) NSSet *summaryAssets;
@property (retain, nonatomic) NSSet *extendedAssets;
@property (retain, nonatomic) NSSet *dayGroupAssets;
@property (retain, nonatomic) NSSet *dayGroupExtendedAssets;
@property (retain, nonatomic) NSSet *dayGroupSummaryAssets;

+ (unsigned short)sortByTimeSortDescriptors;

- (unsigned short)delete;
- (unsigned short)isDeleted;
- (unsigned short)refreshAssets;
- (unsigned short)bumpHighlightVersion;
- (unsigned short)removeAssetData: /* Error: Ran out of types for this method. */;

@end
