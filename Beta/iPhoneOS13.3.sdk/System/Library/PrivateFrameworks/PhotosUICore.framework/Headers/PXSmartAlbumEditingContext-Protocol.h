/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray;

@protocol PXSmartAlbumEditingContext <Swift>

@property (nonatomic, readonly) NSArray *conditionTypeValues;
@property (nonatomic, readonly) NSArray *albumValues;
@property (nonatomic, readonly) NSArray *cameraModels;
@property (nonatomic, readonly) NSArray *lensModels;
@property (nonatomic, readonly) NSArray *keywordValues;
@property (nonatomic, readonly) NSArray *personNames;

- (unsigned short)apertureValuesWithFormatter: /* Error: Ran out of types for this method. */;
- (unsigned short)focalLengthValuesWithFormatter: /* Error: Ran out of types for this method. */;
- (unsigned short)ISOValuesWithFormatter: /* Error: Ran out of types for this method. */;
- (unsigned short)shutterSpeedValuesWithFormatter: /* Error: Ran out of types for this method. */;

@end
