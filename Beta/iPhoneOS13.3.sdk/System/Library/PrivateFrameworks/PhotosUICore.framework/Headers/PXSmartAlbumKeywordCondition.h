/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSmartAlbumCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumKeywordCondition : PXSmartAlbumCondition

{
    NSArray *_keywordValues;
}

@property (nonatomic, readonly) NSArray *keywordValues;
@property (retain, nonatomic) PXLabeledValue *keywordValue;

+ (id)defaultSingleQueryForEditingContext:(id)arg1;

@end
