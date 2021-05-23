/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary, NSObject, PLManagedObject;

@protocol PLAlbumProtocol, PLAssetContainer;

@interface PLAssetContainerChangeNotification : PLContainerChangeNotification

{
    _Bool _titleDidChange;
    _Bool _keyAssetDidChange;
    NSDictionary *_userInfo;
}

@property (nonatomic, readonly) PLManagedObject *container;
@property (nonatomic, readonly) id <PLAssetContainer> assetContainer;
@property (nonatomic, readonly) NSObject<PLAlbumProtocol> *album;
@property (nonatomic, readonly) _Bool titleDidChange;
@property (nonatomic, readonly) _Bool keyAssetDidChange;

+ (id)notificationWithContainer:(id)arg1 snapshot:(id)arg2 changedAssets:(id)arg3;

- (void)dealloc;
- (id)description;
- (id)name;
- (id)userInfo;
- (_Bool)hasDeletes;
- (void)_calculateDiffs;
- (id)_contentRelationshipName;
- (_Bool)_getOldSet:(id *)arg1 newSet:(id *)arg2;

@end
