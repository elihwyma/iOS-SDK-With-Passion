/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSMutableSet, NSNumber, PLManagedAsset, PLManagedFolder;

@interface _PLGenericAlbum : PLManagedObject

@property (nonatomic) int pendingItemsCount;
@property (nonatomic) int pendingItemsType;
@property (retain, nonatomic) NSNumber *kind;
@property (retain, nonatomic) NSMutableSet *albumLists;
@property (retain, nonatomic) PLManagedFolder *parentFolder;
@property (nonatomic) long long syncEventOrderKey;
@property (nonatomic) int customSortKey;
@property (nonatomic) _Bool customSortAscending;
@property (retain, nonatomic) PLManagedAsset *customKeyAsset;
@property (nonatomic) int cachedCount;
@property (nonatomic) int cachedPhotosCount;
@property (nonatomic) int cachedVideosCount;

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityName;

@end
