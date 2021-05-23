/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSDate, NSNumber, NSString, PLAdditionalAssetAttributes;

@interface PLUnmanagedAdjustment : PLManagedObject

@property (retain, nonatomic) NSNumber *adjustmentBaseImageFormat;
@property (retain, nonatomic) NSString *adjustmentFormatIdentifier;
@property (retain, nonatomic) NSString *adjustmentFormatVersion;
@property (retain, nonatomic) NSDate *adjustmentTimestamp;
@property (retain, nonatomic) NSString *editorLocalizedName;
@property (retain, nonatomic) NSString *otherAdjustmentsFingerprint;
@property (retain, nonatomic) NSString *similarToOriginalAdjustmentsFingerprint;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes;
@property (nonatomic) unsigned int adjustmentRenderTypes;

+ (id)entityName;
+ (id)addUnmanagedAdjustmentFromXMPDataIfNeededForAsset:(id)arg1;
+ (id)_convertRedEyeCorrections:(id)arg1 withOrientation:(long long)arg2;
+ (id)_convertRedEyeCorrection:(id)arg1 withOrientation:(long long)arg2;
+ (id)copyUnmanagedAdjustmentFromSourceAsset:(id)arg1 forPlaceholderAsset:(id)arg2 inLibrary:(id)arg3 error:(id *)arg4;

- (void)awakeFromInsert;
- (void)willSave;
- (id)payloadID;
- (id)payloadForChangedKeys:(id)arg1;
- (_Bool)supportsCloudUpload;
- (_Bool)isSyncableChange;

@end
