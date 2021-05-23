/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface DOCThumbnailFolderIcon : NSObject

{
    double _bottomInset;
    double _sharedBadgeBottomInset;
    struct CGSize _badgeSize;
    struct CGSize _sharedBadgeSize;
    NSString *_documentsBadgeName;
    NSString *_desktopBadgeName;
    NSString *_sharedBadgeName;
    NSString *_downloadsBadgeName;
    NSString *_genericSharepointBadgeName;
    UIImage *_documentsBadge;
    UIImage *_desktopBadge;
    UIImage *_sharedBadge;
    UIImage *_downloadsBadge;
    UIImage *_genericSharepointBadge;
    NSString *_imageName;
    UIImage *_plainFolderImage;
    double _imageDimension;
}

@property (nonatomic, readonly) NSString *imageName;
@property (nonatomic, readonly) UIImage *plainFolderImage;
@property (nonatomic, readonly) UIImage *documentsBadge;
@property (nonatomic, readonly) UIImage *desktopBadge;
@property (nonatomic, readonly) UIImage *sharedBadge;
@property (nonatomic, readonly) UIImage *downloadsBadge;
@property (nonatomic, readonly) UIImage *genericSharepointBadge;
@property (nonatomic, readonly) double imageDimension;
@property (nonatomic, readonly) double bottomInset;
@property (nonatomic, readonly) struct CGSize badgeSize;

+ (id)folderIcons;
+ (id)_folderIconsForImageNamePattern:(id)arg1 documentsBadgeNamePattern:(id)arg2 desktopBadgeNamePattern:(id)arg3 sharedBadgeNamePattern:(id)arg4 downloadsBadgeNamePattern:(id)arg5 genericSharepointBadgeNamePattern:(id)arg6;
+ (id)_folderIconForSize:(struct CGSize)arg1 scale:(double)arg2;
+ (id)imageWithStyle:(unsigned long long)arg1 assetImage:(id)arg2;
+ (id)folderIconForDescriptor:(id)arg1;

- (id)image;
- (id)initWithImageName:(id)arg1 documentsBadgeName:(id)arg2 dekstopBadgeName:(id)arg3 sharedBadgeName:(id)arg4 downloadsBadgeName:(id)arg5 genericSharepointBadgeName:(id)arg6 imageDimension:(double)arg7 badgeDimension:(double)arg8 badgeBottomInset:(double)arg9 sharedBadgeDimension:(double)arg10 sharedBadgeBottomInset:(double)arg11;
- (void)resolveImage;
- (id)badgeForFolderType:(unsigned long long)arg1;
- (struct CGSize)badgeSizeForFolderType:(unsigned long long)arg1;
- (double)bottomInsetForFolderType:(unsigned long long)arg1;
- (id)_badgedFolderIconForBadge:(id)arg1 badgeSize:(struct CGSize)arg2 bottomInset:(double)arg3 style:(unsigned long long)arg4;
- (id)plainFolderImageWithStyle:(unsigned long long)arg1;
- (id)badgedFolderIconForFolderType:(unsigned long long)arg1 style:(unsigned long long)arg2;
- (id)badgedFolderIconForBadge:(id)arg1 style:(unsigned long long)arg2;

@end
