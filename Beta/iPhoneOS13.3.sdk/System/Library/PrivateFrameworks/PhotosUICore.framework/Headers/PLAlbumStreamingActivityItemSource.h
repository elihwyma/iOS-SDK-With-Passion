/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PLCloudSharedAlbum;

@interface PLAlbumStreamingActivityItemSource : NSObject

{
    PLCloudSharedAlbum *_album;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;
- (id)activityViewControllerSubject:(id)arg1;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)initWithAlbum:(id)arg1;

@end
