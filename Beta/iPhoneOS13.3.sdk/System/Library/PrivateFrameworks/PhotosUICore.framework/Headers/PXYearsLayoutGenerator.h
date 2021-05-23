/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCachingLayoutGenerator.h>

@interface PXYearsLayoutGenerator : PXCachingLayoutGenerator

{
    long long _presentedNumberOfColumns;
}

@property (nonatomic, readonly) long long presentedNumberOfColumns;

- (void)updateContentSize:(out struct CGSize *)arg1 itemRects:(out struct CGRect *)arg2;

@end
