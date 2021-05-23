/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUCellConfigurationContext.h>

@class ISURLOperationPool, SUImageCache, SUImageDataProvider, UIImage;

@interface SUArtworkCellContext : SUCellConfigurationContext

{
    SUImageCache *_imageCache;
    ISURLOperationPool *_imagePool;
    SUImageDataProvider *_imageProvider;
    UIImage *_placeholderImage;
}

@property (retain, nonatomic) SUImageCache *imageCache;
@property (retain, nonatomic) ISURLOperationPool *imagePool;
@property (retain, nonatomic) SUImageDataProvider *imageProvider;
@property (retain, nonatomic) UIImage *placeholderImage;

- (void)dealloc;

@end
