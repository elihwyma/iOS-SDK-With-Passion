/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, PHPhotoLibrary;

@interface PXSmartAlbumPhotoKitEditingContext : NSObject

{
    PHPhotoLibrary *_photoLibrary;
}

@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *conditionTypeValues;
@property (nonatomic, readonly) NSArray *albumValues;
@property (nonatomic, readonly) NSArray *cameraModels;
@property (nonatomic, readonly) NSArray *lensModels;
@property (nonatomic, readonly) NSArray *keywordValues;
@property (nonatomic, readonly) NSArray *personNames;

- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)apertureValuesWithFormatter:(id)arg1;
- (id)focalLengthValuesWithFormatter:(id)arg1;
- (id)ISOValuesWithFormatter:(id)arg1;
- (id)shutterSpeedValuesWithFormatter:(id)arg1;

@end
