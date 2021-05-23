/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSSortDescriptor, NSString, PHAssetCollection, PHCollectionList, PHImportSource, PHPhotoLibrary;

@interface PHImportOptions : NSObject

{
    struct options_bits _options_bits;
    PHAssetCollection *_destinationAlbum;
    PHCollectionList *_destinationFolder;
    NSSortDescriptor *_sortDescriptor;
    NSMutableDictionary *_userIptcMetadata;
    NSString *_personId;
    PHImportSource *_importSource;
    PHPhotoLibrary *_library;
}

@property (retain, nonatomic) NSString *personId;
@property (retain, nonatomic) PHImportSource *importSource;
@property (retain, nonatomic) PHPhotoLibrary *library;
@property (retain, nonatomic) PHAssetCollection *destinationAlbum;
@property (retain, nonatomic) PHCollectionList *destinationFolder;
@property (nonatomic) _Bool preserveFolderStructure;
@property (nonatomic) _Bool hideProgress;
@property (nonatomic) _Bool skipAlertWhenFinished;
@property (nonatomic) _Bool shouldImportAsReferenced;
@property (nonatomic) _Bool allowDuplicates;
@property (nonatomic) _Bool skipDiskSpaceCheck;
@property (nonatomic) _Bool deleteAfterImport;
@property (nonatomic) unsigned char fileOperation;
@property (retain, nonatomic) NSSortDescriptor *sortDescriptor;
@property (nonatomic) unsigned char metadataAddMode;
@property (retain, nonatomic) NSMutableDictionary *userIptcMetadata;

- (id)init;
- (short)importedBy;
- (void)setImportedBy:(short)arg1;
- (_Bool)omitImportComplete;
- (void)setOmitImportComplete:(_Bool)arg1;
- (_Bool)allowUnsupported;
- (void)setAllowUnsupported:(_Bool)arg1;

@end
