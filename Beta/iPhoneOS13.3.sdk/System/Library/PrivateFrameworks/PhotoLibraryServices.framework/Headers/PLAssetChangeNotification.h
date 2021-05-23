/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLChangeNotification.h>

@class NSSet;

@interface PLAssetChangeNotification : PLChangeNotification

{
    NSSet *_updatedAssets;
}

@property (copy, nonatomic) NSSet *updatedAssets;

+ (id)notificationWithChangedAssets:(id)arg1;

- (id)description;
- (id)name;
- (id)object;
- (id)userInfo;
- (id)_init;
- (id)_initWithChangedObjects:(id)arg1;

@end
