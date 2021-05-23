/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSmartAlbumCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumAlbumCondition : PXSmartAlbumCondition

{
    NSArray *_albumValues;
}

@property (retain, nonatomic) PXLabeledValue *albumValue;
@property (nonatomic, readonly) _Bool albumValueIsOrphaned;

+ (id)defaultSingleQueryForEditingContext:(id)arg1;
+ (id)anyAlbumValue;

- (id)_albumValues;

@end
