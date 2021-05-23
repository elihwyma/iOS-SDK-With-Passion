/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, PLAdditionalAssetAttributes;

@interface PLAssetDescription : PLManagedObject

@property (retain, nonatomic) NSString *longDescription;
@property (retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes;

+ (id)entityName;
+ (id)listOfSyncedProperties;

- (void)prepareForDeletion;
- (void)willSave;
- (id)payloadID;
- (id)payloadForChangedKeys:(id)arg1;
- (_Bool)isSyncableChange;

@end
