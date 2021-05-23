/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class MPArtworkCatalog;

@protocol MPArtworkDataSource;

__attribute__((visibility("hidden")))
@interface _VUIMediaPlayerImageLoaderOperationSet : NSObject

{
    id <MPArtworkDataSource> _dataSource;
    MPArtworkCatalog *_artworkCatalog;
}

@property (retain, nonatomic) id <MPArtworkDataSource> dataSource;
@property (retain, nonatomic) MPArtworkCatalog *artworkCatalog;

@end
