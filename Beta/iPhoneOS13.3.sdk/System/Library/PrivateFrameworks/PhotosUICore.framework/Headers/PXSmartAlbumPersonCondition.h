/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSmartAlbumCondition.h>

@class NSArray, NSString;

@interface PXSmartAlbumPersonCondition : PXSmartAlbumCondition

{
    NSArray *_personNames;
}

@property (nonatomic, readonly) NSArray *personNames;
@property (retain, nonatomic) NSString *personName;

+ (id)defaultSingleQueryForEditingContext:(id)arg1;

@end
