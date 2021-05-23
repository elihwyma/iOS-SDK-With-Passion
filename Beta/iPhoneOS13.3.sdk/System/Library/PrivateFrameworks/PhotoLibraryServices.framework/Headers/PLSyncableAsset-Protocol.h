/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSDate, NSSet, NSString;

@protocol PLSyncableAsset <Swift>

@property (retain, nonatomic, readonly) NSString *cloudIdentifier;
@property (retain, nonatomic) NSSet *detectedFaces;
@property (nonatomic, readonly) long long width;
@property (nonatomic, readonly) long long height;
@property (nonatomic, readonly) _Bool faceDetectionComplete;
@property (copy, nonatomic, readonly) NSDate *dateForComparingAdjustmentVersions;
@property (nonatomic, readonly) id faceAdjustmentVersion;
@property (copy, nonatomic, readonly) NSString *syncedAdjustmentFingerprint;
@property (nonatomic, readonly) _Bool hasAdjustmentsOrLegacyAdjustments;

- (unsigned short)markForNeedingFaceDetection;
- (unsigned short)syncDescription;

@end
