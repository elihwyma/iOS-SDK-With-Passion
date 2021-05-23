/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary, NSObject;

@protocol PLAlbumContainer, PLAssetContainerList;

@interface PLAssetContainerListChangeNotification : PLContainerChangeNotification

{
    NSDictionary *_userInfo;
}

@property (nonatomic, readonly) id <PLAssetContainerList> assetContainerList;
@property (nonatomic, readonly) NSObject<PLAlbumContainer> *albumList;

+ (id)notificationWithContainerList:(id)arg1 snapshot:(id)arg2 changedContainers:(id)arg3;

- (id)description;
- (id)name;
- (id)userInfo;
- (id)_contentRelationshipName;

@end
