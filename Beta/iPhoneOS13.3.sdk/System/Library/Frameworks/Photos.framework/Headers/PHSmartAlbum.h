/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetCollection.h>

@interface PHSmartAlbum : PHAssetCollection

+ (id)managedEntityName;
+ (id)fetchType;

- (_Bool)collectionHasFixedOrder;

@end
