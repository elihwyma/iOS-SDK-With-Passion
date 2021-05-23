/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class VUILibraryGridCollectionViewController, VUIMediaEntityType;

__attribute__((visibility("hidden")))
@interface _VUIDownloadSeeAllController : NSObject

{
    VUILibraryGridCollectionViewController *_gridViewController;
    VUIMediaEntityType *_mediaEntityType;
}

@property (retain, nonatomic) VUILibraryGridCollectionViewController *gridViewController;
@property (nonatomic) VUIMediaEntityType *mediaEntityType;

@end
