/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class VUILibraryGridCollectionViewController;

__attribute__((visibility("hidden")))
@interface _VUILibrarySeeAllController : NSObject

{
    VUILibraryGridCollectionViewController *_gridViewController;
    long long _shelfType;
}

@property (retain, nonatomic) VUILibraryGridCollectionViewController *gridViewController;
@property (nonatomic) long long shelfType;

@end
