/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary, PLManagedAsset;

@interface PLCloudCommentsChangeNotification : PLContainerChangeNotification

{
    NSDictionary *_userInfo;
}

@property (nonatomic, readonly) PLManagedAsset *asset;

+ (id)notificationWithAsset:(id)arg1 snapshot:(id)arg2;

- (id)description;
- (id)name;
- (id)userInfo;
- (id)_contentRelationshipName;

@end
