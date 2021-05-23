/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Photos/PHPhotosHighlight.h>

@class NSArray, NSDate, NSString, PHAsset, PHAssetCollection;

@interface PHPhotosHighlight (HighlightItem)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *localStartDate;
@property (nonatomic, readonly) NSDate *localEndDate;
@property (nonatomic, readonly) NSString *uuid;
@property (copy, nonatomic, readonly) NSString *dateDescription;
@property (copy, nonatomic, readonly) NSString *smartDescription;
@property (nonatomic, readonly) PHAsset *keyAsset;
@property (nonatomic, readonly) NSArray *extendedCuratedAssets;
@property (nonatomic, readonly) unsigned long long numberOfAssetsInExtended;
@property (nonatomic, readonly) double promotionScore;
@property (nonatomic, readonly) unsigned short type;
@property (nonatomic, readonly) unsigned short kind;
@property (nonatomic, readonly) unsigned short visibilityState;
@property (nonatomic, readonly) unsigned short enrichmentState;
@property (nonatomic, readonly) id modelObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned short type;
@property (nonatomic) unsigned short enrichmentState;
@property (nonatomic, readonly, getter=isRecent) _Bool recent;
@property (nonatomic, readonly) _Bool isGroup;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) PHAssetCollection *assetCollection;

- (id)changeRequest;
- (double)sceneAnalysisProgressForPhotoLibrary:(id)arg1;
- (double)faceAnalysisProgressForPhotoLibrary:(id)arg1;
- (double)nonDefaultCurationScorePercentageForPhotoLibrary:(id)arg1;

@end
