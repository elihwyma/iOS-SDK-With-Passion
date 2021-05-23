/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedAlbum.h>

@class NSString;

@interface PLPhotoStreamAlbum : PLManagedAlbum

@property (retain, nonatomic) NSString *personID;

+ (id)entityName;
+ (id)photoStreamAlbumWithStreamID:(id)arg1 inPhotoLibrary:(id)arg2 createIfNeeded:(_Bool)arg3;
+ (id)keyPathsForValuesAffectingPersonID;

- (void)awakeFromInsert;
- (_Bool)shouldDeleteWhenEmpty;
- (void)enforceImageLimitIfNecessary;
- (void)addAssetOrderedByDataTaken:(id)arg1;

@end
