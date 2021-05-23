/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSData, PLManagedAsset;

@interface PLSearchData : PLManagedObject

@property (retain, nonatomic) NSData *data;
@property (nonatomic) _Bool valid;
@property (retain, nonatomic) PLManagedAsset *asset;

+ (id)entityName;

@end
