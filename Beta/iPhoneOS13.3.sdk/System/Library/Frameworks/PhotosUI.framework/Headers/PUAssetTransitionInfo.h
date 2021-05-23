/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, PUPhotoViewContentHelper, UIImage, UIView;

@protocol PUDisplayAsset;

@interface PUAssetTransitionInfo : NSObject

{
    UIView *_snapshotView;
    UIImage *_image;
    NSArray *_filters;
    double _cornerRadius;
    id <PUDisplayAsset> _asset;
    NSArray *_badgeTransitionInfos;
    PUPhotoViewContentHelper *_contentHelper;
    CDStruct_1b6d18a9 _seekTime;
    struct CGRect _frame;
}

@property (retain, nonatomic, setter=_setSnapshotView:) UIView *snapshotView;
@property (retain, nonatomic, setter=_setImage:) UIImage *image;
@property (copy, nonatomic, setter=_setFilters:) NSArray *filters;
@property (nonatomic, setter=_setSeekTime:) CDStruct_1b6d18a9 seekTime;
@property (nonatomic) struct CGRect frame;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) id <PUDisplayAsset> asset;
@property (copy, nonatomic) NSArray *badgeTransitionInfos;
@property (retain, nonatomic) PUPhotoViewContentHelper *contentHelper;

+ (id)assetTransitionInfoWithSnapshotView:(id)arg1;
+ (id)assetTransitionInfoWithImage:(id)arg1;
+ (id)assetTransitionInfoWithImage:(id)arg1 filters:(id)arg2;
+ (id)assetTransitionInfoWithImage:(id)arg1 andSeekTime:(CDStruct_1b6d18a9)arg2;
+ (id)assetTransitionInfoWithImage:(id)arg1 frame:(struct CGRect)arg2;

- (id)init;

@end
