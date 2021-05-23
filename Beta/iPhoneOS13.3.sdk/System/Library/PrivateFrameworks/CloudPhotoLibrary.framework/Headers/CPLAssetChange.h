/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLItemChange.h>

@class CLLocation, CPLAdjustments, CPLFaceAnalysisReference, CPLPlaceAnnotation, NSArray, NSData, NSDate, NSDictionary, NSNumber, NSString;

@interface CPLAssetChange : CPLItemChange

{
    NSDictionary *_resourcePerResourceType;
    _Bool _favorite;
    _Bool _hidden;
    NSString *_masterIdentifier;
    NSDate *_lastSharedDate;
    NSDate *_addedDate;
    NSDate *_assetDate;
    NSArray *_resources;
    NSString *_caption;
    NSString *_extendedDescription;
    long long _orientation;
    long long _duration;
    CLLocation *_location;
    NSArray *_keywords;
    NSString *_adjustedMediaMetaDataType;
    NSData *_adjustedMediaMetaData;
    NSString *_timeZoneName;
    NSNumber *_timeZoneOffset;
    NSString *_momentIdentifier;
    NSString *_momentName;
    NSString *_collectionIdentifier;
    NSString *_collectionName;
    unsigned long long _burstFlags;
    NSString *_burstIdentifier;
    NSString *_mediaGroupIdentifier;
    long long _videoComplementDurationValue;
    long long _videoComplementDurationTimescale;
    long long _videoComplementImageDisplayValue;
    long long _videoComplementImageDisplayTimescale;
    unsigned long long _videoComplementVisibilityState;
    unsigned long long _assetSubtype;
    unsigned long long _assetHDRType;
    CPLAdjustments *_adjustments;
    unsigned long long _originalChoice;
    long long _customRenderedValue;
    NSArray *_people;
    long long _facesVersion;
    NSString *_facesAdjustmentsFingerprint;
    CPLPlaceAnnotation *_placeAnnotation;
    long long _playCount;
    long long _shareCount;
    long long _viewCount;
    NSData *_facesData;
}

@property (copy, nonatomic) NSData *facesData;
@property (copy, nonatomic) NSString *masterIdentifier;
@property (copy, nonatomic) NSDate *lastSharedDate;
@property (copy, nonatomic) NSDate *addedDate;
@property (copy, nonatomic) NSDate *assetDate;
@property (copy, nonatomic) NSArray *resources;
@property (copy, nonatomic) NSString *caption;
@property (copy, nonatomic) NSString *extendedDescription;
@property (nonatomic, getter=isFavorite) _Bool favorite;
@property (nonatomic) long long orientation;
@property (nonatomic) long long duration;
@property (retain, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSString *adjustedMediaMetaDataType;
@property (retain, nonatomic) NSData *adjustedMediaMetaData;
@property (nonatomic, getter=isHidden) _Bool hidden;
@property (copy, nonatomic) NSString *timeZoneName;
@property (copy, nonatomic) NSNumber *timeZoneOffset;
@property (copy, nonatomic) NSString *momentIdentifier;
@property (copy, nonatomic) NSString *momentName;
@property (copy, nonatomic) NSString *collectionIdentifier;
@property (copy, nonatomic) NSString *collectionName;
@property (nonatomic) unsigned long long burstFlags;
@property (copy, nonatomic) NSString *burstIdentifier;
@property (copy, nonatomic) NSString *mediaGroupIdentifier;
@property (nonatomic) long long videoComplementDurationValue;
@property (nonatomic) long long videoComplementDurationTimescale;
@property (nonatomic) long long videoComplementImageDisplayValue;
@property (nonatomic) long long videoComplementImageDisplayTimescale;
@property (nonatomic) unsigned long long videoComplementVisibilityState;
@property (nonatomic) unsigned long long assetSubtype;
@property (nonatomic) unsigned long long assetHDRType;
@property (retain, nonatomic) CPLAdjustments *adjustments;
@property (nonatomic) unsigned long long originalChoice;
@property (nonatomic) long long customRenderedValue;
@property (copy, nonatomic) NSArray *people;
@property (copy, nonatomic) CPLFaceAnalysisReference *faces;
@property (nonatomic) long long facesVersion;
@property (copy, nonatomic) NSString *facesAdjustmentsFingerprint;
@property (retain, nonatomic) CPLPlaceAnnotation *placeAnnotation;
@property (nonatomic) long long playCount;
@property (nonatomic) long long shareCount;
@property (nonatomic) long long viewCount;

+ (_Bool)supportsSecureCoding;
+ (_Bool)serverSupportsVision;
+ (_Bool)cplShouldIgnorePropertyForCoding:(id)arg1;
+ (_Bool)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (CDUnknownBlockType)equalityBlockForDirection:(unsigned long long)arg1;
+ (CDUnknownBlockType)copyPropertyBlockForDirection:(unsigned long long)arg1;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (_Bool)supportsResources;
- (id)masterScopedIdentifier;
- (_Bool)supportsDeletion;
- (id)propertiesDescription;
- (CDUnknownBlockType)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (long long)dequeueOrder;
- (id)propertiesForChangeType:(unsigned long long)arg1;
- (id)resourceForType:(unsigned long long)arg1;
- (void)copyDerivativesFromRecordIfPossible:(id)arg1;
- (_Bool)supportsResourceType:(unsigned long long)arg1;
- (id)scopedIdentifiersForMapping;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)relatedIdentifier;
- (void)setRelatedIdentifier:(id)arg1;
- (_Bool)validateFullRecord;
- (id)allRelatedScopedIdentifiers;
- (_Bool)validateChangeWithError:(id *)arg1;
- (_Bool)_canLowerQuota;
- (unsigned long long)fullChangeTypeForFullRecord;
- (_Bool)isAssetChange;
- (_Bool)validateRecordForTracker:(id)arg1;
- (void)setMasterScopedIdentifier:(id)arg1;
- (id)scopeIdentifiersForQuarantine;
- (id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(_Bool)arg2 fullRecord:(id)arg3 usingClientCache:(id)arg4;

@end
