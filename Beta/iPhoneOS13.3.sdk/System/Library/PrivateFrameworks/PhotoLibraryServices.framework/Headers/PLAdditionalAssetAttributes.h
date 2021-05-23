/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class CLLocation, NSData, NSDate, NSManagedObject, NSNumber, NSSet, NSString, PLAssetDescription, PLEditedIPTCAttributes, PLManagedAsset, PLSceneprint, PLSpatialOverCaptureInformation, PLUnmanagedAdjustment;

@interface PLAdditionalAssetAttributes : PLManagedObject

{
    CLLocation *__cachedShiftedLocation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *originatingAssetIdentifier;
@property (retain, nonatomic, readonly) NSNumber *embeddedThumbnailHeight;
@property (retain, nonatomic, readonly) NSNumber *embeddedThumbnailLength;
@property (retain, nonatomic, readonly) NSNumber *embeddedThumbnailOffset;
@property (retain, nonatomic, readonly) NSNumber *embeddedThumbnailWidth;
@property (retain, nonatomic, readonly) NSString *exifTimestampString;
@property (nonatomic, readonly) long long ptpTrashedState;
@property (retain, nonatomic, readonly) PLSpatialOverCaptureInformation *spatialOverCaptureInformation;
@property (retain, nonatomic) NSString *longDescription;
@property (retain, nonatomic) NSData *mediaMetadataData;
@property (retain, nonatomic) PLSceneprint *sceneprint;
@property (nonatomic) short destinationAssetCopyState;
@property (readonly) PLSpatialOverCaptureInformation *spatialOverCaptureInformation;
@property (retain, nonatomic, setter=_setCachedShiftedLocation:) CLLocation *_cachedShiftedLocation;
@property (retain, nonatomic) NSString *creatorBundleID;
@property (retain, nonatomic) NSString *editorBundleID;
@property (retain, nonatomic) NSString *exifTimestampString;
@property (retain, nonatomic) NSNumber *embeddedThumbnailHeight;
@property (retain, nonatomic) NSNumber *embeddedThumbnailLength;
@property (retain, nonatomic) NSNumber *embeddedThumbnailOffset;
@property (retain, nonatomic) NSNumber *embeddedThumbnailWidth;
@property (retain, nonatomic) NSString *montage;
@property (retain, nonatomic) id originalAssetsUUID;
@property (retain, nonatomic) NSString *originalFilename;
@property (retain, nonatomic) NSNumber *originalFilesize;
@property (retain, nonatomic) NSData *originalHash;
@property (retain, nonatomic) NSNumber *originalHeight;
@property (retain, nonatomic) NSNumber *originalOrientation;
@property (retain, nonatomic) NSNumber *originalResourceChoice;
@property (retain, nonatomic) NSNumber *originalWidth;
@property (retain, nonatomic) NSString *publicGlobalUUID;
@property (retain, nonatomic) NSData *reverseLocationData;
@property (retain, nonatomic) NSNumber *reverseLocationDataIsValid;
@property (retain, nonatomic) NSString *timeZoneName;
@property (retain, nonatomic) NSNumber *timeZoneOffset;
@property (retain, nonatomic) NSNumber *inferredTimeZoneOffset;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *lastUploadAttemptDate;
@property (retain, nonatomic) NSNumber *uploadAttempts;
@property (retain, nonatomic) PLManagedAsset *asset;
@property (retain, nonatomic) NSSet *keywords;
@property (retain, nonatomic) PLUnmanagedAdjustment *unmanagedAdjustment;
@property (retain, nonatomic) NSNumber *locationHash;
@property (retain, nonatomic) PLAssetDescription *assetDescription;
@property (retain, nonatomic) NSData *faceRegions;
@property (retain, nonatomic) NSSet *personReferences;
@property (nonatomic) short cameraCaptureDevice;
@property (copy, nonatomic) NSString *originatingAssetIdentifier;
@property (copy, nonatomic) NSString *snowplowGroupUUID;
@property (nonatomic) long long playCount;
@property (nonatomic) long long shareCount;
@property (nonatomic) long long viewCount;
@property (nonatomic) long long pendingPlayCount;
@property (nonatomic) long long pendingShareCount;
@property (nonatomic) long long pendingViewCount;
@property (nonatomic) _Bool allowedForAnalysis;
@property (nonatomic) unsigned long long cloudRecoveryState;
@property (nonatomic) short cloudStateRecoveryAttemptsCount;
@property (nonatomic) short importedBy;
@property (nonatomic) long long ptpTrashedState;
@property (nonatomic) short shareType;
@property (copy, nonatomic) NSString *shareOriginator;
@property (copy, nonatomic) NSString *snowdayIdentifier;
@property (copy, nonatomic) NSString *snowdaySnowplowIdentifier;
@property (retain, nonatomic) NSManagedObject *mediaMetadata;
@property (retain, nonatomic) NSString *mediaMetadataType;
@property (retain, nonatomic) NSString *photoStreamTagId;
@property (retain, nonatomic) NSSet *sceneClassifications;
@property (nonatomic) short sceneAnalysisVersion;
@property (retain, nonatomic) NSDate *sceneAnalysisTimestamp;
@property (retain, nonatomic) NSData *distanceIdentity;
@property (nonatomic) int cloudAvalanchePickType;
@property (nonatomic) short cloudKindSubtype;
@property (nonatomic) long long cloudGroupingState;
@property (nonatomic) _Bool shiftedLocationIsValid;
@property (retain, nonatomic) NSData *shiftedLocationData;
@property (nonatomic) int videoCpDurationTimescale;
@property (nonatomic) long long videoCpDisplayValue;
@property (nonatomic) int videoCpDisplayTimescale;
@property (copy, nonatomic) NSString *masterFingerPrint;
@property (copy, nonatomic) NSString *adjustedFingerPrint;
@property (retain, nonatomic) NSData *placeAnnotationData;
@property (retain, nonatomic) CLLocation *shiftedLocation;
@property (nonatomic) unsigned long long variationSuggestionStates;
@property (retain, nonatomic) NSDate *alternateImportImageDate;
@property (retain, nonatomic) PLEditedIPTCAttributes *editedIPTCAttributes;

+ (id)entityName;
+ (id)listOfSyncedProperties;
+ (id)newExtraDurationDataFromStillDisplayTime:(CDStruct_198678f7)arg1 videoDuration:(CDStruct_198678f7)arg2;
+ (void)fromExtraDurationData:(id)arg1 getStillDisplayTime:(CDStruct_198678f7 *)arg2 videoDuration:(CDStruct_198678f7 *)arg3;
+ (id)descriptionForDestinationAssetCopyState:(short)arg1;

- (void)willSave;
- (_Bool)validateForInsert:(id *)arg1;
- (_Bool)validateForUpdate:(id *)arg1;
- (id)payloadID;
- (id)payloadForChangedKeys:(id)arg1;
- (_Bool)supportsCloudUpload;
- (_Bool)isSyncableChange;
- (_Bool)isUserInterfaceChange;
- (void)truncatedOriginalCheckChangedValues:(id)arg1;
- (_Bool)hasConsistentCloudState;
- (void)setCloudRecoveryStateFlag:(unsigned long long)arg1;
- (void)removeCloudRecoveryStateFlag:(unsigned long long)arg1;
- (_Bool)hasCloudRecoveryStateFlagSet:(unsigned long long)arg1;
- (void)resetCloudRecoveryState;
- (void)setSceneprintWithData:(id)arg1;

@end
