/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCachingLayoutGenerator.h>

@interface PXMonthsLayoutGenerator : PXCachingLayoutGenerator

{
    _Bool _presentedSingleColumn;
}

@property (nonatomic, readonly) _Bool presentedSingleColumn;

- (void)updateContentSize:(out struct CGSize *)arg1 itemRects:(out struct CGRect *)arg2 itemKinds:(out long long *)arg3;

@end
