/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSData, NSString, PLAdditionalAssetAttributes, PLPerson;

@interface PLPersonReference : PLManagedObject

@property (retain, nonatomic) NSString *personUUID;
@property (retain, nonatomic) NSData *personData;
@property (retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes;
@property (retain, nonatomic) PLPerson *person;

+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 personUUID:(id)arg2 personData:(id)arg3;

@end
