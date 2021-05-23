/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@class CLLocation, NSData, NSDate, NSObject, NSString, PLRevGeoLocationInfo, PLRevGeoPlaceAnnotation;

@protocol NSCopying, PLMomentData, PLPhotosHighlightData;

@protocol PLMomentAssetData <Swift>

@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) NSDate *dateCreated;
@property (retain, nonatomic, readonly) NSDate *localDateCreated;
@property (nonatomic, readonly) int inferredTimeZoneOffset;
@property (retain, nonatomic) id <PLMomentData> moment;
@property (retain, nonatomic) NSData *reverseLocationData;
@property (nonatomic) _Bool reverseLocationDataIsValid;
@property (retain, nonatomic, readonly) NSObject<NSCopying> *uniqueObjectID;
@property (retain, nonatomic) CLLocation *shiftedLocation;
@property (nonatomic) _Bool shiftedLocationIsValid;
@property (retain, nonatomic, readonly) PLRevGeoPlaceAnnotation *placeAnnotation;
@property (retain, nonatomic, readonly) PLRevGeoLocationInfo *locationInfo;
@property (nonatomic) id <PLPhotosHighlightData> highlightBeingAssets;
@property (nonatomic) id <PLPhotosHighlightData> highlightBeingKeyAsset;
@property (nonatomic) id <PLPhotosHighlightData> highlightBeingSummaryAssets;
@property (nonatomic) id <PLPhotosHighlightData> highlightBeingExtendedAssets;
@property (nonatomic) id <PLPhotosHighlightData> dayGroupHighlightBeingAssets;
@property (nonatomic) id <PLPhotosHighlightData> dayGroupHighlightBeingKeyAsset;
@property (nonatomic) id <PLPhotosHighlightData> dayGroupHighlightBeingExtendedAssets;
@property (nonatomic) id <PLPhotosHighlightData> monthHighlightBeingKeyAsset;
@property (nonatomic) id <PLPhotosHighlightData> monthHighlightBeingFirstAsset;
@property (nonatomic) id <PLPhotosHighlightData> yearHighlightBeingKeyAsset;
@property (nonatomic) _Bool favorite;
@property (nonatomic) double curationScore;
@property (nonatomic, readonly) _Bool isPhoto;
@property (nonatomic, readonly) _Bool isVideo;
@property (nonatomic, readonly) _Bool isScreenRecording;
@property (nonatomic, readonly) NSString *avalancheUUID;
@property (nonatomic, readonly) _Bool isInterestingForAvalanche;
@property (nonatomic, readonly) _Bool isAvalancheStackPhoto;
@property (nonatomic, readonly) _Bool hasChanges;
@property (retain, nonatomic, readonly) NSString *uuid;
@property (retain, nonatomic) NSDate *modificationDate;
@property (nonatomic) double duration;
@property (nonatomic) short kind;
@property (nonatomic) short kindSubtype;
@property (nonatomic) long long height;
@property (nonatomic) long long width;
@property (retain, nonatomic, readonly) NSString *cloudAssetGUID;

- (unsigned short)isDeleted;
- (unsigned short)compareToAsset: /* Error: Ran out of types for this method. */;
- (unsigned short)assetComparisonSortDescriptors;
- (unsigned short)visibilityStateIsEqualToState: /* Error: Ran out of types for this method. */;
- (unsigned short)globalUUID;

@end
