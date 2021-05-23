/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString, PUPhotoDecoration;

__attribute__((visibility("hidden")))
@interface PUAlbumListCellContentViewHelperConfiguration : NSObject

{
    _Bool _allowsEmailInSubtitle;
    _Bool _showsDeleteButtonOnCellContentView;
    _Bool _hasRoundedCorners;
    _Bool _shouldUseTableView;
    long long _cellContentViewLayout;
    unsigned long long _stackViewStyle;
    unsigned long long _folderStackViewStyle;
    long long _imageContentMode;
    NSString *_albumSubtitleFormat;
    NSString *_nameOfEmptyAlbumPlaceholderImage;
    NSString *_nameOfEmptySharedAlbumPlaceholderImage;
    NSString *_nameOfAddSharedAlbumPlaceholderImage;
    NSString *_nameOfHiddenAlbumPlaceholderImage;
    NSString *_nameOfRecentlyDeletedAlbumPlaceholderImage;
    PUPhotoDecoration *_photoDecoration;
    double _gridMargin;
    double _gridItemSpacing;
    double _posterSquareCornerRadius;
    double _posterSubitemCornerRadius;
    double _dynamicTitleLeading;
    double _dynamicSubtitleleading;
    double _dynamicTopLeading;
    struct CGSize _stackSize;
    struct CGSize _pixelSize;
    struct UIOffset _stackOffset;
    struct UIOffset _stackPerspectiveOffset;
    struct UIEdgeInsets _stackPerspectiveInsets;
}

@property (nonatomic) _Bool allowsEmailInSubtitle;
@property (nonatomic) _Bool showsDeleteButtonOnCellContentView;
@property (nonatomic) _Bool hasRoundedCorners;
@property (nonatomic) _Bool shouldUseTableView;
@property (nonatomic) long long cellContentViewLayout;
@property (nonatomic) unsigned long long stackViewStyle;
@property (nonatomic) unsigned long long folderStackViewStyle;
@property (nonatomic) long long imageContentMode;
@property (copy, nonatomic) NSString *albumSubtitleFormat;
@property (copy, nonatomic) NSString *nameOfEmptyAlbumPlaceholderImage;
@property (copy, nonatomic) NSString *nameOfEmptySharedAlbumPlaceholderImage;
@property (copy, nonatomic) NSString *nameOfAddSharedAlbumPlaceholderImage;
@property (copy, nonatomic) NSString *nameOfHiddenAlbumPlaceholderImage;
@property (copy, nonatomic) NSString *nameOfRecentlyDeletedAlbumPlaceholderImage;
@property (retain, nonatomic) PUPhotoDecoration *photoDecoration;
@property (nonatomic) struct CGSize stackSize;
@property (nonatomic) struct CGSize pixelSize;
@property (nonatomic) struct UIOffset stackOffset;
@property (nonatomic) struct UIOffset stackPerspectiveOffset;
@property (nonatomic) struct UIEdgeInsets stackPerspectiveInsets;
@property (nonatomic) double gridMargin;
@property (nonatomic) double gridItemSpacing;
@property (nonatomic) double posterSquareCornerRadius;
@property (nonatomic) double posterSubitemCornerRadius;
@property (nonatomic) double dynamicTitleLeading;
@property (nonatomic) double dynamicSubtitleleading;
@property (nonatomic) double dynamicTopLeading;

+ (id)defaultConfiguration;

- (void)configureWithSpec:(id)arg1;

@end
